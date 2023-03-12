#include QMK_KEYBOARD_H

#ifdef RGBLIGHT_ENABLE

#include "rgblight_name.h"

// This code is based on keyboards/dmqdesign/spin/keymaps/gorbachev/keymaps.c.

#define NUM_ANIMATIONS 43

static const char *animation_names[NUM_ANIMATIONS] = {
    "unknown",
    "static",
    "breathing 1",
    "breathing 2",
    "breathing 3",
    "breathing 4",
    "rainbow mood 1",
    "rainbow mood 2",
    "rainbow mood 3",
    "rainbow swirl 1",
    "rainbow swirl 2",
    "rainbow swirl 3",
    "rainbow swirl 4",
    "rainbow swirl 5",
    "rainbow swirl 6",
    "snake 1",
    "snake 2",
    "snake 3",
    "snake 4",
    "snake 5",
    "snake 6",
    "knight 1",
    "knight 2",
    "knight 3",
    "christmas",
    "static gradient 1",
    "static gradient 2",
    "static gradient 3",
    "static gradient 4",
    "static gradient 5",
    "static gradient 4",
    "static gradient 7",
    "static gradient 8",
    "static gradient 9",
    "static gradient 10",
    "rgb test",
    "alternating",
    "twinkle 1",
    "twinkle 2",
    "twinkle 3",
    "twinkle 4",
    "twinkle 5",
    "twinkle 6"
};

void dprintf_rgblight_mode(void) {
    uint8_t mode = rgblight_get_mode();
    if (mode >= NUM_ANIMATIONS) mode = 0;
    dprintf("rgblight: %s\n", animation_names[mode]);
}

void rgblight_get_mode_name(uint8_t mode, size_t bufsize, char *buf) {
    snprintf(buf, bufsize, "%-25s", animation_names[mode]);
}
#endif
