#include QMK_KEYBOARD_H
#include <qp.h>
#include "my_layers.h"
#include "rgblight_name.h"
#include "ui_state.h"
#include "ui_theme.h"

LV_FONT_DECLARE(dseg7_classic_mini_bold_italic_54);
LV_FONT_DECLARE(dseg14_classic_mini_bold_italic_28);

LV_IMG_DECLARE(ui_theme_casio_off);
LV_IMG_DECLARE(ui_theme_casio_on_change_mode);
LV_IMG_DECLARE(ui_theme_casio_on_change_value);
LV_IMG_DECLARE(ui_theme_casio_on_layer_lnum);
LV_IMG_DECLARE(ui_theme_casio_on_layer_lsym);
LV_IMG_DECLARE(ui_theme_casio_on_layer_base);
LV_IMG_DECLARE(ui_theme_casio_on_layer_rsym);
LV_IMG_DECLARE(ui_theme_casio_on_layer_rnav);
LV_IMG_DECLARE(ui_theme_casio_on_layer_capsw);
LV_IMG_DECLARE(ui_theme_casio_on_mode_home);
LV_IMG_DECLARE(ui_theme_casio_on_mode_mode);
LV_IMG_DECLARE(ui_theme_casio_on_mode_hue);
LV_IMG_DECLARE(ui_theme_casio_on_mode_sat);
LV_IMG_DECLARE(ui_theme_casio_on_mode_val);
LV_IMG_DECLARE(ui_theme_casio_on_units_pct);
LV_IMG_DECLARE(ui_theme_casio_on_units_wpm);
LV_IMG_DECLARE(ui_theme_casio_on_units_256);

void ui_theme_casio_init(ui_state_t *state);
void ui_theme_casio_render(ui_state_t *state);
void ui_theme_casio_set_value_num(uint16_t num);
void ui_theme_casio_set_value_text(const char *text);

#define UI_THEME_CASIO_TEXT_COLOR 0x3d4d3d
#define UI_THEME_CASIO_SHADOW_COLOR 0x9eac9e
#define UI_THEME_CASIO_VALUE_NUM_MIN 0
#define UI_THEME_CASIO_VALUE_NUM_MAX 999
#define UI_THEME_CASIO_VALUE_TEXT_LENGTH 8

lv_obj_t *ui_theme_casio_label_num;
lv_obj_t *ui_theme_casio_label_num_shadow;
lv_obj_t *ui_theme_casio_label_text;
lv_obj_t *ui_theme_casio_label_text_shadow;

lv_obj_t *ui_theme_casio_image_off;
lv_obj_t *ui_theme_casio_image_on_change_mode;
lv_obj_t *ui_theme_casio_image_on_change_value;
lv_obj_t *ui_theme_casio_image_on_layer_lnum;
lv_obj_t *ui_theme_casio_image_on_layer_lsym;
lv_obj_t *ui_theme_casio_image_on_layer_base;
lv_obj_t *ui_theme_casio_image_on_layer_rsym;
lv_obj_t *ui_theme_casio_image_on_layer_rnav;
lv_obj_t *ui_theme_casio_image_on_layer_capsw;
lv_obj_t *ui_theme_casio_image_on_mode_home;
lv_obj_t *ui_theme_casio_image_on_mode_mode;
lv_obj_t *ui_theme_casio_image_on_mode_hue;
lv_obj_t *ui_theme_casio_image_on_mode_sat;
lv_obj_t *ui_theme_casio_image_on_mode_val;
lv_obj_t *ui_theme_casio_image_on_units_pct;
lv_obj_t *ui_theme_casio_image_on_units_wpm;
lv_obj_t *ui_theme_casio_image_on_units_256;

lv_obj_t *ui_theme_casio_image_on_mode_curr = NULL;
lv_obj_t *ui_theme_casio_image_on_layer_curr = NULL;
lv_obj_t *ui_theme_casio_image_on_units_curr = NULL;

ui_theme_t ui_theme = {
    "Casio",
    ui_theme_casio_init,
    ui_theme_casio_render
};

static char ui_theme_casio_tmp_str[UI_THEME_CASIO_VALUE_TEXT_LENGTH + 1];

void ui_theme_casio_init(ui_state_t *state) {
    //lv_obj_set_style_bg_color(lv_scr_act(), lv_color_hex(0xff0000), LV_PART_MAIN);

    ui_theme_casio_image_off = lv_img_create(lv_scr_act());
    lv_img_set_src(ui_theme_casio_image_off, &ui_theme_casio_off);
    //lv_obj_align(ui_theme_casio_image_off, LV_ALIGN_CENTER, 0, 0);
    //lv_obj_set_size(ui_theme_casio_image_off, 240, 240);

    lv_obj_set_pos(ui_theme_casio_image_off, 0, 0);
    //lv_obj_set_size(ui_theme_casio_image, 240, 240);
    //lv_obj_add_flag(ui_theme_casio_image, LV_OBJ_FLAG_HIDDEN);

    ui_theme_casio_image_on_change_mode = lv_img_create(lv_scr_act());
    lv_img_set_src(ui_theme_casio_image_on_change_mode, &ui_theme_casio_on_change_mode);
    lv_obj_set_pos(ui_theme_casio_image_on_change_mode, 2, 110);
    lv_obj_add_flag(ui_theme_casio_image_on_change_mode, LV_OBJ_FLAG_HIDDEN);

    ui_theme_casio_image_on_change_value = lv_img_create(lv_scr_act());
    lv_img_set_src(ui_theme_casio_image_on_change_value, &ui_theme_casio_on_change_value);
    lv_obj_set_pos(ui_theme_casio_image_on_change_value, 39, 123);
    lv_obj_add_flag(ui_theme_casio_image_on_change_value, LV_OBJ_FLAG_HIDDEN);

    ui_theme_casio_image_on_layer_lnum = lv_img_create(lv_scr_act());
    lv_img_set_src(ui_theme_casio_image_on_layer_lnum, &ui_theme_casio_on_layer_lnum);
    lv_obj_set_pos(ui_theme_casio_image_on_layer_lnum, 73, 59);
    lv_obj_add_flag(ui_theme_casio_image_on_layer_lnum, LV_OBJ_FLAG_HIDDEN);

    ui_theme_casio_image_on_layer_lsym = lv_img_create(lv_scr_act());
    lv_img_set_src(ui_theme_casio_image_on_layer_lsym, &ui_theme_casio_on_layer_lsym);
    lv_obj_set_pos(ui_theme_casio_image_on_layer_lsym, 95, 59);
    lv_obj_add_flag(ui_theme_casio_image_on_layer_lsym, LV_OBJ_FLAG_HIDDEN);

    ui_theme_casio_image_on_layer_base = lv_img_create(lv_scr_act());
    lv_img_set_src(ui_theme_casio_image_on_layer_base, &ui_theme_casio_on_layer_base);
    lv_obj_set_pos(ui_theme_casio_image_on_layer_base, 119, 59);
    lv_obj_add_flag(ui_theme_casio_image_on_layer_base, LV_OBJ_FLAG_HIDDEN);

    ui_theme_casio_image_on_layer_rsym = lv_img_create(lv_scr_act());
    lv_img_set_src(ui_theme_casio_image_on_layer_rsym, &ui_theme_casio_on_layer_rsym);
    lv_obj_set_pos(ui_theme_casio_image_on_layer_rsym, 146, 59);
    lv_obj_add_flag(ui_theme_casio_image_on_layer_rsym, LV_OBJ_FLAG_HIDDEN);

    ui_theme_casio_image_on_layer_rnav = lv_img_create(lv_scr_act());
    lv_img_set_src(ui_theme_casio_image_on_layer_rnav, &ui_theme_casio_on_layer_rnav);
    lv_obj_set_pos(ui_theme_casio_image_on_layer_rnav, 166, 59);
    lv_obj_add_flag(ui_theme_casio_image_on_layer_rnav, LV_OBJ_FLAG_HIDDEN);

    ui_theme_casio_image_on_layer_capsw = lv_img_create(lv_scr_act());
    lv_img_set_src(ui_theme_casio_image_on_layer_capsw, &ui_theme_casio_on_layer_capsw);
    lv_obj_set_pos(ui_theme_casio_image_on_layer_capsw, 196, 59);
    lv_obj_add_flag(ui_theme_casio_image_on_layer_capsw, LV_OBJ_FLAG_HIDDEN);

    ui_theme_casio_image_on_mode_home = lv_img_create(lv_scr_act());
    lv_img_set_src(ui_theme_casio_image_on_mode_home, &ui_theme_casio_on_mode_home);
    lv_obj_set_pos(ui_theme_casio_image_on_mode_home, 27, 77);
    lv_obj_add_flag(ui_theme_casio_image_on_mode_home, LV_OBJ_FLAG_HIDDEN);

    ui_theme_casio_image_on_mode_mode = lv_img_create(lv_scr_act());
    lv_img_set_src(ui_theme_casio_image_on_mode_mode, &ui_theme_casio_on_mode_mode);
    lv_obj_set_pos(ui_theme_casio_image_on_mode_mode, 17, 67);
    lv_obj_add_flag(ui_theme_casio_image_on_mode_mode, LV_OBJ_FLAG_HIDDEN);

    ui_theme_casio_image_on_mode_hue = lv_img_create(lv_scr_act());
    lv_img_set_src(ui_theme_casio_image_on_mode_hue, &ui_theme_casio_on_mode_hue);
    lv_obj_set_pos(ui_theme_casio_image_on_mode_hue, 35, 67);
    lv_obj_add_flag(ui_theme_casio_image_on_mode_hue, LV_OBJ_FLAG_HIDDEN);

    ui_theme_casio_image_on_mode_sat = lv_img_create(lv_scr_act());
    lv_img_set_src(ui_theme_casio_image_on_mode_sat, &ui_theme_casio_on_mode_sat);
    lv_obj_set_pos(ui_theme_casio_image_on_mode_sat, 35, 85);
    lv_obj_add_flag(ui_theme_casio_image_on_mode_sat, LV_OBJ_FLAG_HIDDEN);

    ui_theme_casio_image_on_mode_val = lv_img_create(lv_scr_act());
    lv_img_set_src(ui_theme_casio_image_on_mode_val, &ui_theme_casio_on_mode_val);
    lv_obj_set_pos(ui_theme_casio_image_on_mode_val, 17, 85);
    lv_obj_add_flag(ui_theme_casio_image_on_mode_val, LV_OBJ_FLAG_HIDDEN);

    ui_theme_casio_image_on_units_pct = lv_img_create(lv_scr_act());
    lv_img_set_src(ui_theme_casio_image_on_units_pct, &ui_theme_casio_on_units_pct);
    lv_obj_set_pos(ui_theme_casio_image_on_units_pct, 194, 106);
    lv_obj_add_flag(ui_theme_casio_image_on_units_pct, LV_OBJ_FLAG_HIDDEN);

    ui_theme_casio_image_on_units_wpm = lv_img_create(lv_scr_act());
    lv_img_set_src(ui_theme_casio_image_on_units_wpm, &ui_theme_casio_on_units_wpm);
    lv_obj_set_pos(ui_theme_casio_image_on_units_wpm, 191, 126);
    lv_obj_add_flag(ui_theme_casio_image_on_units_wpm, LV_OBJ_FLAG_HIDDEN);

    ui_theme_casio_image_on_units_256 = lv_img_create(lv_scr_act());
    lv_img_set_src(ui_theme_casio_image_on_units_256, &ui_theme_casio_on_units_256);
    lv_obj_set_pos(ui_theme_casio_image_on_units_256, 188, 148);
    lv_obj_add_flag(ui_theme_casio_image_on_units_256, LV_OBJ_FLAG_HIDDEN);

    ui_theme_casio_label_num_shadow = lv_label_create(lv_scr_act());
    lv_obj_set_style_text_color(ui_theme_casio_label_num_shadow, lv_color_hex(UI_THEME_CASIO_SHADOW_COLOR), LV_PART_MAIN);
    lv_obj_set_style_text_font(ui_theme_casio_label_num_shadow, &dseg7_classic_mini_bold_italic_54, LV_PART_MAIN);
    lv_obj_set_pos(ui_theme_casio_label_num_shadow, 57, 106);
    lv_label_set_text(ui_theme_casio_label_num_shadow, "888");

    ui_theme_casio_label_num = lv_label_create(lv_scr_act());
    lv_obj_set_style_text_color(ui_theme_casio_label_num, lv_color_hex(UI_THEME_CASIO_TEXT_COLOR), LV_PART_MAIN);
    lv_obj_set_style_text_font(ui_theme_casio_label_num, &dseg7_classic_mini_bold_italic_54, LV_PART_MAIN);
    lv_obj_set_pos(ui_theme_casio_label_num, 57, 106);
    lv_label_set_text(ui_theme_casio_label_num, "");

    ui_theme_casio_label_text_shadow = lv_label_create(lv_scr_act());
    lv_obj_set_style_text_color(ui_theme_casio_label_text_shadow, lv_color_hex(UI_THEME_CASIO_SHADOW_COLOR), LV_PART_MAIN);
    lv_obj_set_style_text_font(ui_theme_casio_label_text_shadow, &dseg14_classic_mini_bold_italic_28, LV_PART_MAIN);
    lv_obj_set_pos(ui_theme_casio_label_text_shadow, 30, 168);
    lv_label_set_text(ui_theme_casio_label_text_shadow, "~~~~~~~~");

    ui_theme_casio_label_text = lv_label_create(lv_scr_act());
    lv_obj_set_style_text_color(ui_theme_casio_label_text, lv_color_hex(UI_THEME_CASIO_TEXT_COLOR), LV_PART_MAIN);
    lv_obj_set_style_text_font(ui_theme_casio_label_text, &dseg14_classic_mini_bold_italic_28, LV_PART_MAIN);
    lv_obj_set_pos(ui_theme_casio_label_text, 30, 168);
    lv_label_set_text(ui_theme_casio_label_text, "");
}

void ui_theme_casio_render(ui_state_t *state) {
    if (state->first_render || state->is_navigating != state->prev_is_navigating) {
        if (state->is_navigating) {
            lv_obj_add_flag(ui_theme_casio_image_on_change_value, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(ui_theme_casio_image_on_change_mode, LV_OBJ_FLAG_HIDDEN);
        } else {
            lv_obj_add_flag(ui_theme_casio_image_on_change_mode, LV_OBJ_FLAG_HIDDEN);

            if (state->mode_index == UI_MODE_HOME) {
                lv_obj_add_flag(ui_theme_casio_image_on_change_value, LV_OBJ_FLAG_HIDDEN);
            } else {
                lv_obj_clear_flag(ui_theme_casio_image_on_change_value, LV_OBJ_FLAG_HIDDEN);
            }
        }
    }

    if (state->first_render || state->mode_index != state->prev_mode_index || state->value_changed) {
        if (ui_theme_casio_image_on_mode_curr != NULL) {
            lv_obj_add_flag(ui_theme_casio_image_on_mode_curr, LV_OBJ_FLAG_HIDDEN);
            ui_theme_casio_image_on_mode_curr = NULL;
        }

        if (ui_theme_casio_image_on_units_curr != NULL) {
            lv_obj_add_flag(ui_theme_casio_image_on_units_curr, LV_OBJ_FLAG_HIDDEN);
            ui_theme_casio_image_on_units_curr = NULL;
        }

        if (state->mode_index == UI_MODE_HOME) {
            ui_theme_casio_image_on_mode_curr = ui_theme_casio_image_on_mode_home;
            lv_obj_clear_flag(ui_theme_casio_image_on_mode_curr, LV_OBJ_FLAG_HIDDEN);

            ui_theme_casio_set_value_num(state->wpm);
            ui_theme_casio_set_value_text("");

            ui_theme_casio_image_on_units_curr = ui_theme_casio_image_on_units_wpm;
            lv_obj_clear_flag(ui_theme_casio_image_on_units_curr, LV_OBJ_FLAG_HIDDEN);
        } else if (state->mode_index == UI_MODE_RGBLIGHT_MODE) {
            ui_theme_casio_image_on_mode_curr = ui_theme_casio_image_on_mode_mode;
            lv_obj_clear_flag(ui_theme_casio_image_on_mode_curr, LV_OBJ_FLAG_HIDDEN);

            ui_theme_casio_set_value_num(rgblight_get_mode());
            ui_theme_casio_set_value_text(rgblight_get_mode_name_short(rgblight_get_mode()));
        } else if (state->mode_index == UI_MODE_RGBLIGHT_HUE) {
            ui_theme_casio_image_on_mode_curr = ui_theme_casio_image_on_mode_hue;
            lv_obj_clear_flag(ui_theme_casio_image_on_mode_curr, LV_OBJ_FLAG_HIDDEN);

            ui_theme_casio_set_value_num(rgblight_get_hue());
            ui_theme_casio_set_value_text("");

            ui_theme_casio_image_on_units_curr = ui_theme_casio_image_on_units_256;
            lv_obj_clear_flag(ui_theme_casio_image_on_units_curr, LV_OBJ_FLAG_HIDDEN);
        } else if (state->mode_index == UI_MODE_RGBLIGHT_SAT) {
            ui_theme_casio_image_on_mode_curr = ui_theme_casio_image_on_mode_sat;
            lv_obj_clear_flag(ui_theme_casio_image_on_mode_curr, LV_OBJ_FLAG_HIDDEN);

            ui_theme_casio_set_value_num(rgblight_get_sat());
            ui_theme_casio_set_value_text("");

            ui_theme_casio_image_on_units_curr = ui_theme_casio_image_on_units_256;
            lv_obj_clear_flag(ui_theme_casio_image_on_units_curr, LV_OBJ_FLAG_HIDDEN);
        } else if (state->mode_index == UI_MODE_RGBLIGHT_VAL) {
            ui_theme_casio_image_on_mode_curr = ui_theme_casio_image_on_mode_val;
            lv_obj_clear_flag(ui_theme_casio_image_on_mode_curr, LV_OBJ_FLAG_HIDDEN);

            ui_theme_casio_set_value_num(rgblight_get_val());
            ui_theme_casio_set_value_text("");

            ui_theme_casio_image_on_units_curr = ui_theme_casio_image_on_units_256;
            lv_obj_clear_flag(ui_theme_casio_image_on_units_curr, LV_OBJ_FLAG_HIDDEN);
        }
    } else if (state->mode_index == UI_MODE_HOME && (state->wpm != state->prev_wpm)) {
        ui_theme_casio_set_value_num(state->wpm);
    }

    if (state->first_render || state->layer != state->prev_layer) {
        if (ui_theme_casio_image_on_layer_curr != NULL) {
            lv_obj_add_flag(ui_theme_casio_image_on_layer_curr, LV_OBJ_FLAG_HIDDEN);
            ui_theme_casio_image_on_layer_curr = NULL;
        }

        if (state->layer == LY_BASE) {
            ui_theme_casio_image_on_layer_curr = ui_theme_casio_image_on_layer_base;
            lv_obj_clear_flag(ui_theme_casio_image_on_layer_curr, LV_OBJ_FLAG_HIDDEN);
        } else if (state->layer == LY_LSYM) {
            ui_theme_casio_image_on_layer_curr = ui_theme_casio_image_on_layer_lsym;
            lv_obj_clear_flag(ui_theme_casio_image_on_layer_curr, LV_OBJ_FLAG_HIDDEN);
        } else if (state->layer == LY_RSYM) {
            ui_theme_casio_image_on_layer_curr = ui_theme_casio_image_on_layer_rsym;
            lv_obj_clear_flag(ui_theme_casio_image_on_layer_curr, LV_OBJ_FLAG_HIDDEN);
        } else if (state->layer == LY_LNUM) {
            ui_theme_casio_image_on_layer_curr = ui_theme_casio_image_on_layer_lnum;
            lv_obj_clear_flag(ui_theme_casio_image_on_layer_curr, LV_OBJ_FLAG_HIDDEN);
        } else if (state->layer == LY_RNAV) {
            ui_theme_casio_image_on_layer_curr = ui_theme_casio_image_on_layer_rnav;
            lv_obj_clear_flag(ui_theme_casio_image_on_layer_curr, LV_OBJ_FLAG_HIDDEN);
        }
    }

    if (state->first_render || state->is_caps_word_on != state->prev_is_caps_word_on) {
        if (state->is_caps_word_on) {
            lv_obj_clear_flag(ui_theme_casio_image_on_layer_capsw, LV_OBJ_FLAG_HIDDEN);
        } else {
            lv_obj_add_flag(ui_theme_casio_image_on_layer_capsw, LV_OBJ_FLAG_HIDDEN);
        }
    }
}

void ui_theme_casio_set_value_num(uint16_t num) {
    if (num < UI_THEME_CASIO_VALUE_NUM_MIN) num = UI_THEME_CASIO_VALUE_NUM_MIN;
    if (num > UI_THEME_CASIO_VALUE_NUM_MAX) num = UI_THEME_CASIO_VALUE_NUM_MAX;

    snprintf(ui_theme_casio_tmp_str, 4, "%3d", num);

    for (int i = 0; i < 4; i++) {
        if (ui_theme_casio_tmp_str[i] == 0) break;
        if (ui_theme_casio_tmp_str[i] == ' ') ui_theme_casio_tmp_str[i] = '!';
    }

    lv_label_set_text(ui_theme_casio_label_num, ui_theme_casio_tmp_str);
}

void ui_theme_casio_set_value_text(const char *text) {
    if (text == NULL) {
        lv_label_set_text(ui_theme_casio_label_text, "");
        return;
    }

    snprintf(ui_theme_casio_tmp_str, UI_THEME_CASIO_VALUE_TEXT_LENGTH + 1, "%8s", text);

    for (int i = 0; i < UI_THEME_CASIO_VALUE_TEXT_LENGTH; i++) {
        if (ui_theme_casio_tmp_str[i] == 0) break;
        if (ui_theme_casio_tmp_str[i] == ' ') ui_theme_casio_tmp_str[i] = '!';
    }

    lv_label_set_text(ui_theme_casio_label_text, ui_theme_casio_tmp_str);
}
