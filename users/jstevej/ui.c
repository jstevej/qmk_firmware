#include "my_layers.h"
#include "rgblight_name.h"
#include "ui.h"
#include "ui_state.h"
#include "ui_theme.h"

ui_theme_t ui_theme;

#define UI_IDLE_TIMEOUT_MS 30000

void ui_set_mode(mode_index_t mode_index);
void ui_mode_home_change_value(bool inc);
void ui_mode_rgblight_mode_change_value(bool inc);
void ui_mode_rgblight_hue_change_value(bool inc);
void ui_mode_rgblight_sat_change_value(bool inc);
void ui_mode_rgblight_val_change_value(bool inc);

const ui_mode_t ui_modes[UI_NUM_MODES] = {
    {
        UI_MODE_HOME,
        "Home",
        ui_mode_home_change_value
    },
    {
        UI_MODE_RGBLIGHT_MODE,
        "RGB Mode",
        ui_mode_rgblight_mode_change_value
    },
    {
        UI_MODE_RGBLIGHT_HUE,
        "Hue",
        ui_mode_rgblight_hue_change_value
    },
    {
        UI_MODE_RGBLIGHT_SAT,
        "Saturation",
        ui_mode_rgblight_sat_change_value
    },
    {
        UI_MODE_RGBLIGHT_VAL,
        "Value",
        ui_mode_rgblight_val_change_value
    },
};

ui_state_t ui_state;
bool ui_initialized = false;


void ui_init(void) {
    dprintf("ui: ui_init\n");
    ui_state.is_navigating = false;
    ui_state.prev_is_navigating = ui_state.is_navigating;
    ui_state.mode_index = UI_MODE_HOME;
    ui_state.prev_mode_index = ui_state.mode_index;
    ui_state.mode = &ui_modes[UI_MODE_HOME];
    ui_state.layer = LY_BASE;
    ui_state.prev_layer = ui_state.layer;
    ui_state.is_caps_word_on = false;
    ui_state.prev_is_caps_word_on = ui_state.is_caps_word_on;
    ui_state.render_timer = timer_read();
    ui_state.nav_timer = timer_read();

    ui_state.wpm = 0;
    ui_state.prev_wpm = ui_state.wpm;

    ui_state.changed = false;
    ui_state.value_changed = false;
    ui_state.first_render = true;

    ui_theme.init(&ui_state);
    ui_theme.render(&ui_state);
    ui_state.first_render = false;
    ui_initialized = true;
}

void ui_register_press(void) {
    if (!ui_initialized) return;
    ui_state.is_navigating = !ui_state.is_navigating;
    ui_state.nav_timer = timer_read();
    ui_state.changed = true;
}

void ui_register_rotate(bool clockwise) {
    if (!ui_initialized) return;

    if (ui_state.is_navigating) {
        int mode_index = ui_state.mode_index;

        if (clockwise) {
            mode_index++;
            if (mode_index >= UI_NUM_MODES) mode_index = 0;
        } else {
            mode_index--;
            if (mode_index < 0) mode_index = UI_NUM_MODES - 1;
        }

        ui_set_mode(mode_index);
    } else {
        ui_state.mode->change_value(clockwise);
        ui_state.value_changed = true;
    }

    ui_state.nav_timer = timer_read();
    ui_state.changed = true;
}

void ui_update_housekeeping(void) {
    if (!ui_initialized) return;

    ui_state.wpm = get_current_wpm();

    if (ui_state.wpm != ui_state.prev_wpm) {
        ui_state.changed = true;
    }

    for (uint8_t i = LY_NUM_LAYERS - 1; i >= 0; i--) {
        if (layer_state_is(i)) {
            ui_state.layer = i;

            if (ui_state.layer != ui_state.prev_layer) {
                ui_state.changed = true;
            }

            break;
        }
    }

    ui_state.is_caps_word_on = is_caps_word_on();

    if (ui_state.is_caps_word_on != ui_state.prev_is_caps_word_on) {
        ui_state.changed = true;
    }

    if (
        (ui_state.mode_index != UI_MODE_HOME || ui_state.is_navigating) &&
        timer_elapsed(ui_state.nav_timer) >= UI_IDLE_TIMEOUT_MS
    ) {
        ui_set_mode(UI_MODE_HOME);
        ui_state.is_navigating = false;
        ui_state.nav_timer = timer_read();
        ui_state.changed = true;
    } else if (timer_elapsed(ui_state.nav_timer) >= 60000) {
        ui_state.nav_timer = timer_read();
    }

    if (
        (ui_state.changed && timer_elapsed(ui_state.render_timer) >= 100) ||
        timer_elapsed(ui_state.render_timer) > 60000
    ) {
        ui_theme.render(&ui_state);
        ui_state.changed = false;
        ui_state.value_changed = false;
        ui_state.prev_wpm = ui_state.wpm;
        ui_state.prev_is_navigating = ui_state.is_navigating;
        ui_state.prev_mode_index = ui_state.mode_index;
        ui_state.prev_layer = ui_state.layer;
        ui_state.prev_is_caps_word_on = ui_state.is_caps_word_on;
        ui_state.render_timer = timer_read();
    }

}

void ui_set_mode(mode_index_t mode_index) {
    ui_state.mode_index = mode_index;
    ui_state.mode = &ui_modes[mode_index];
}

void ui_update_layer(my_layer_t layer) {
    if (!ui_initialized) return;
    ui_state.layer = layer;
    ui_state.changed = true;
}

void ui_mode_home_change_value(bool inc) {
    if (layer_state_is(LY_BASE)) {
        if (inc) {
            tap_code(KC_KB_VOLUME_UP);
        } else {
            tap_code(KC_KB_VOLUME_DOWN);
        }
    }
}

void ui_mode_rgblight_mode_change_value(bool inc) {
    if (inc) {
        rgblight_step();
    } else {
        rgblight_step_reverse();
    }
}

void ui_mode_rgblight_hue_change_value(bool inc) {
    if (inc) {
        rgblight_increase_hue();
    } else {
        rgblight_decrease_hue();
    }
}

void ui_mode_rgblight_sat_change_value(bool inc) {
    if (inc) {
        rgblight_increase_sat();
    } else {
        rgblight_decrease_sat();
    }
}

void ui_mode_rgblight_val_change_value(bool inc) {
    if (inc) {
        rgblight_increase_val();
    } else {
        rgblight_decrease_val();
    }
}
