#pragma once

#include QMK_KEYBOARD_H
#include "my_layers.h"

typedef enum {
    UI_MODE_HOME,
    UI_MODE_RGBLIGHT_MODE,
    UI_MODE_RGBLIGHT_HUE,
    UI_MODE_RGBLIGHT_SAT,
    UI_MODE_RGBLIGHT_VAL,
    UI_NUM_MODES
} mode_index_t;

typedef struct ui_mode_t {
    uint8_t index;
    const char *name;
    void (*change_value)(bool inc);
} ui_mode_t;

typedef struct ui_state_t {
    bool is_navigating;
    bool prev_is_navigating;

    mode_index_t mode_index;
    mode_index_t prev_mode_index;
    const ui_mode_t *mode;

    my_layer_t layer;
    my_layer_t prev_layer;

    bool is_caps_word_on;
    bool prev_is_caps_word_on;

    uint8_t wpm;
    uint8_t prev_wpm;

    uint16_t render_timer;
    uint16_t nav_timer;
    bool changed;
    bool value_changed;

    bool first_render;
} ui_state_t;
