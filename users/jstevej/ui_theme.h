#pragma once

#include QMK_KEYBOARD_H
#include "ui_state.h"

typedef struct ui_theme_t {
    const char *name;
    void (*init)(ui_state_t *state);
    void (*render)(ui_state_t *state);
} ui_theme_t;
