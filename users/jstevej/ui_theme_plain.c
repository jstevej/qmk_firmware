#include QMK_KEYBOARD_H
#include <qp.h>
#include "my_layers.h"
#include "rgblight_name.h"
#include "ui_state.h"
#include "ui_theme.h"

void ui_theme_plain_init(ui_state_t *state);
void ui_theme_plain_render(ui_state_t *state);

#define TMP_STR_SIZE 512

lv_obj_t *ui_theme_plain_label;

ui_theme_t ui_theme = {
    "Plain",
    ui_theme_plain_init,
    ui_theme_plain_render
};

void ui_theme_plain_init(ui_state_t *state) {
    lv_obj_set_style_bg_color(lv_scr_act(), lv_color_hex(0x000055), LV_PART_MAIN);
    ui_theme_plain_label = lv_label_create(lv_scr_act());
    lv_obj_set_style_text_color(lv_scr_act(), lv_color_hex(0xffffff), LV_PART_MAIN);
    //lv_obj_set_style_text_font(lv_scr_act(), &lv_font_montserrat_18, LV_PART_MAIN);
    lv_obj_align(ui_theme_plain_label, LV_ALIGN_CENTER, 0, 0);
}

void ui_theme_plain_render(ui_state_t *state) {
    static char tmp_str[TMP_STR_SIZE + 1];
    int n = 0;

    n += snprintf(&tmp_str[n], TMP_STR_SIZE - n, "Mode: %s\n", state->mode->name);
    n += snprintf(&tmp_str[n], TMP_STR_SIZE - n, "Layer: %d\n    %s\n", state->layer, my_layers_get_name(state->layer));
    n += snprintf(&tmp_str[n], TMP_STR_SIZE - n, "Caps Word: %s\n", is_caps_word_on() ? "On" : "Off");

    if (state->mode_index == UI_MODE_HOME) {
        n += snprintf(&tmp_str[n], TMP_STR_SIZE - n, "Value: %d wpm\n\n", get_current_wpm());
    } else if (state->mode_index == UI_MODE_RGBLIGHT_MODE) {
        n += snprintf(&tmp_str[n], TMP_STR_SIZE - n, "Value: %d\n", rgblight_get_mode());
        n += snprintf(&tmp_str[n], TMP_STR_SIZE - n, "    %s\n", rgblight_get_mode_name(rgblight_get_mode()));
    } else if (state->mode_index == UI_MODE_RGBLIGHT_HUE) {
        n += snprintf(&tmp_str[n], TMP_STR_SIZE - n, "Value: %d /256\n\n", rgblight_get_hue());
    } else if (state->mode_index == UI_MODE_RGBLIGHT_SAT) {
        n += snprintf(&tmp_str[n], TMP_STR_SIZE - n, "Value: %d /256\n\n", rgblight_get_sat());
    } else if (state->mode_index == UI_MODE_RGBLIGHT_VAL) {
        n += snprintf(&tmp_str[n], TMP_STR_SIZE - n, "Value: %d /256\n\n", rgblight_get_val());
    }

    n += snprintf(&tmp_str[n], TMP_STR_SIZE - n, "%s", state->is_navigating ? "< >" : "^v");

    lv_label_set_text(ui_theme_plain_label, tmp_str);
}
