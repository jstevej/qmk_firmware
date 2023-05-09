#include <math.h>
#include <qp.h>
#include "rgblight_name.h"
#include "source_sans_pro_18.qff.h"
#include "ui.h"

#define UI_IDLE_TIMEOUT_MS 5000
#define UI_LINE_SPACING 0.5
#define UI_POS_WIDTH_PCT 10

enum ui_screen_indices {
    UI_SCREEN_HOME,
    UI_SCREEN_RGBLIGHT_MODE,
    UI_SCREEN_RGBLIGHT_HUE,
    UI_SCREEN_RGBLIGHT_SAT,
    UI_SCREEN_RGBLIGHT_VAL,
    UI_NUM_SCREENS
};

typedef enum {
    UI_SCREEN_POS_NONE,
    UI_SCREEN_POS_ARC,
    UI_SCREEN_POS_DOT
} ui_screen_pos_t;

typedef struct UiScreen {
    uint8_t index;
    const char *label;
    ui_screen_pos_t pos_type;
    void (*change_value)(bool inc);
    const char* (*get_value)(void);
    float (*get_pos)(void); // [0, 1] (normalized radians, i.e., radians/2pi)
} UiScreen;

void ui_draw_centered_arc(float r_min, float r_max, float angle_start, float angle_end, uint8_t hue, uint8_t sat, uint8_t val);
void ui_render_screen(void);
void ui_screen_home_change_value(bool inc);
const char* ui_screen_home_get_value(void);
void ui_screen_rgblight_mode_change_value(bool inc);
const char* ui_screen_rgblight_mode_get_value(void);
float ui_screen_rgblight_mode_get_pos(void);
void ui_screen_rgblight_hue_change_value(bool inc);
float ui_screen_rgblight_hue_get_pos(void);
const char* ui_screen_rgblight_hue_get_value(void);
void ui_screen_rgblight_sat_change_value(bool inc);
float ui_screen_rgblight_sat_get_pos(void);
const char* ui_screen_rgblight_sat_get_value(void);
void ui_screen_rgblight_val_change_value(bool inc);
float ui_screen_rgblight_val_get_pos(void);
const char* ui_screen_rgblight_val_get_value(void);

const UiScreen ui_screens[] = {
    {
        UI_SCREEN_HOME,
        "Home",
        UI_SCREEN_POS_NONE,
        ui_screen_home_change_value,
        ui_screen_home_get_value,
        NULL
    },
    {
        UI_SCREEN_RGBLIGHT_MODE,
        "RGB Mode",
        UI_SCREEN_POS_DOT,
        ui_screen_rgblight_mode_change_value,
        ui_screen_rgblight_mode_get_value,
        ui_screen_rgblight_mode_get_pos
    },
    {
        UI_SCREEN_RGBLIGHT_HUE,
        "Hue",
        UI_SCREEN_POS_ARC,
        ui_screen_rgblight_hue_change_value,
        ui_screen_rgblight_hue_get_value,
        ui_screen_rgblight_hue_get_pos
    },
    {
        UI_SCREEN_RGBLIGHT_SAT,
        "Saturation",
        UI_SCREEN_POS_ARC,
        ui_screen_rgblight_sat_change_value,
        ui_screen_rgblight_sat_get_value,
        ui_screen_rgblight_sat_get_pos
    },
    {
        UI_SCREEN_RGBLIGHT_VAL,
        "Value",
        UI_SCREEN_POS_ARC,
        ui_screen_rgblight_val_change_value,
        ui_screen_rgblight_val_get_value,
        ui_screen_rgblight_val_get_pos
    },
};

painter_device_t ui_display;
uint16_t ui_display_width;
uint16_t ui_display_height;
float ui_pos_width;
painter_font_handle_t ui_font;
uint8_t ui_screen_index = UI_SCREEN_HOME;
bool ui_screen_is_active = false;
const UiScreen *ui_screen = &ui_screens[UI_SCREEN_HOME];

void ui_draw_centered_arc(float r_min, float r_max, float angle_start, float angle_end, uint8_t hue, uint8_t sat, uint8_t val) {
    const float cx = 0.5 * ui_display_width;
    const float cy = 0.5 * ui_display_height;

    for (uint16_t x = 0; x < ui_display_width; x++) {
        const float xx = cx - x;

        for (uint16_t y = 0; y < ui_display_height; y++) {
            const float yy = cy - y;
            const float r = sqrt(xx * xx + yy * yy);
            const float theta = atan2(yy, xx);
            if (r >= r_min && r <= r_max && theta >= angle_start && theta <= angle_end) {
                qp_setpixel(ui_display, x, y, hue, sat, val);
            }
        }
    }
}

void ui_init(painter_device_t display) {
    uint16_t offset_x, offset_y;
    painter_rotation_t rotation;
    ui_display = display;
    qp_get_geometry(ui_display, &ui_display_width, &ui_display_height, &rotation, &offset_x, &offset_y);
    ui_pos_width = UI_POS_WIDTH_PCT * ui_display_width;
    ui_font = qp_load_font_mem(font_source_sans_pro_18);
    ui_render_screen();
}

void ui_render_screen(void) {
    const char *label = ui_screen->label;
    const char *value = ui_screen->get_value();
    const uint16_t label_width = qp_textwidth(ui_font, label);
    const uint16_t value_width = qp_textwidth(ui_font, value);
    const uint16_t line_height = ui_font->line_height;
    const uint16_t label_y = 0.5 * (ui_display_height - (2 + UI_LINE_SPACING) * line_height);
    const uint16_t value_y = label_y + (1 + UI_LINE_SPACING) * line_height;
    const uint16_t label_x = ui_display_width - (label_width >> 1);
    const uint16_t value_x = ui_display_width - (value_width >> 1);
    const uint8_t hue = rgblight_get_hue();
    const uint8_t sat = rgblight_get_sat();
    const uint8_t val = rgblight_get_val();

    qp_clear(ui_display);
    qp_drawtext(ui_display, label_x, label_y, ui_font, label);
    qp_drawtext(ui_display, value_x, value_y, ui_font, value);

    if (ui_screen->pos_type == UI_SCREEN_POS_ARC) {
        const float angle = ui_screen->get_pos() * M_PI;
        const float r_min = 0.5 * ui_display_width - ui_pos_width;
        const float r_max = ui_display_width;
        ui_draw_centered_arc(r_min, r_max, 0, angle, hue, sat, val);
    } else if (ui_screen->pos_type == UI_SCREEN_POS_DOT) {
        const float angle = ui_screen->get_pos() * M_PI;
        const float arc_r = 0.5 * (ui_display_width - ui_pos_width);
        const float dot_r = 0.5 * ui_pos_width;
        const float x = arc_r * cos(angle);
        const float y = arc_r * sin(angle);
        qp_circle(ui_display, x, y, dot_r, hue, sat, val, true);
    }

    qp_flush(ui_display);
}

void ui_register_press(void) {
    ui_screen_is_active = !ui_screen_is_active;
    ui_render_screen();
}

void ui_register_rotate(bool clockwise) {
    if (ui_screen_is_active) {
        ui_screen->change_value(clockwise);
    } else {
        if (clockwise) {
            ui_screen_index = ui_screen_index >= (UI_NUM_SCREENS - 1) ? 0 : (ui_screen_index + 1);
        } else {
            ui_screen_index = ui_screen_index == 0 ? (UI_NUM_SCREENS - 1) : (ui_screen_index - 1);
        }

        ui_screen = &ui_screens[ui_screen_index];
    }

    ui_render_screen();
}

void ui_screen_home_change_value(bool inc) {
}

const char* ui_screen_home_get_value(void) {
    return "";
}

void ui_screen_rgblight_mode_change_value(bool inc) {
    if (inc) {
        rgblight_step();
    } else {
        rgblight_step_reverse();
    }
}

float ui_screen_rgblight_mode_get_pos(void) {
    uint8_t mode = rgblight_get_mode() - 1;
    if (mode < 0) mode = 0;
    if (mode > RGBLIGHT_NAME_NUM_ANIMATIONS - 2) mode = 0;
    return mode / (1.0 * (RGBLIGHT_NAME_NUM_ANIMATIONS - 1));
}

const char* ui_screen_rgblight_mode_get_value(void) {
    return rgblight_get_mode_name(rgblight_get_mode());
}

void ui_screen_rgblight_hue_change_value(bool inc) {
    if (inc) {
        rgblight_increase_hue();
    } else {
        rgblight_decrease_hue();
    }
}

float ui_screen_rgblight_hue_get_pos(void) {
    return ((float) rgblight_get_hue()) / 255.0f;
}

const char* ui_screen_rgblight_hue_get_value(void) {
    static char str[16];
    snprintf(str, 16, "%d", rgblight_get_hue());
    return str;
}

void ui_screen_rgblight_sat_change_value(bool inc) {
    if (inc) {
        rgblight_increase_sat();
    } else {
        rgblight_decrease_sat();
    }
}

float ui_screen_rgblight_sat_get_pos(void) {
    return ((float) rgblight_get_sat()) / 255.0f;
}

const char* ui_screen_rgblight_sat_get_value(void) {
    static char str[16];
    snprintf(str, 16, "%d", rgblight_get_sat());
    return str;
}

void ui_screen_rgblight_val_change_value(bool inc) {
    if (inc) {
        rgblight_increase_val();
    } else {
        rgblight_decrease_val();
    }
}

float ui_screen_rgblight_val_get_pos(void) {
    return ((float) rgblight_get_val()) / 255.0f;
}

const char* ui_screen_rgblight_val_get_value(void) {
    static char str[16];
    snprintf(str, 16, "%d", rgblight_get_val());
    return str;
}
