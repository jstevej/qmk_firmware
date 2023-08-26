#include QMK_KEYBOARD_H

#ifdef RGBLIGHT_ENABLE

#include "rgblight_name.h"

// This code is based on keyboards/dmqdesign/spin/keymaps/gorbachev/keymaps.c.

static const char *animation_names[RGBLIGHT_NAME_NUM_ANIMATIONS] = {
    "Unknown",
    "Static",
    "Breathing 1",
    "Breathing 2",
    "Breathing 3",
    "Breathing 4",
    "Rainbow Mood 1",
    "Rainbow Mood 2",
    "Rainbow Mood 3",
    "Rainbow Swirl 1",
    "Rainbow Swirl 2",
    "Rainbow Swirl 3",
    "Rainbow Swirl 4",
    "Rainbow Swirl 5",
    "Rainbow Swirl 6",
    "Snake 1",
    "Snake 2",
    "Snake 3",
    "Snake 4",
    "Snake 5",
    "Snake 6",
    "Knight 1",
    "Knight 2",
    "Knight 3",
    "Christmas",
    "Static Gradient 1",
    "Static Gradient 2",
    "Static Gradient 3",
    "Static Gradient 4",
    "Static Gradient 5",
    "Static Gradient 6",
    "Static Gradient 7",
    "Static Gradient 8",
    "Static Gradient 9",
    "Static Gradient 10",
    "RGB Test",
    "Alternating",
    "Twinkle 1",
    "Twinkle 2",
    "Twinkle 3",
    "Twinkle 4",
    "Twinkle 5",
    "Twinkle 6"
};

static const char *animation_names_short[RGBLIGHT_NAME_NUM_ANIMATIONS] = {
    "Unknown",
    "Static",
    "Breathi1",
    "Breathi2",
    "Breathi3",
    "Breathi4",
    "RnbowMd1",
    "RnbowMd2",
    "RnbowMd3",
    "RnbowSw1",
    "RnbowSw2",
    "RnbowSw3",
    "RnbowSw4",
    "RnbowSw5",
    "RnbowSw6",
    "Snake 1",
    "Snake 2",
    "Snake 3",
    "Snake 4",
    "Snake 5",
    "Snake 6",
    "Knight 1",
    "Knight 2",
    "Knight 3",
    "Christma",
    "StaGrad1",
    "StaGrad2",
    "StaGrad3",
    "StaGrad4",
    "StaGrad5",
    "StaGrad6",
    "StaGrad7",
    "StaGrad8",
    "StaGrad9",
    "StaGra10",
    "RGB Test",
    "Alternat",
    "Twinkle1",
    "Twinkle2",
    "Twinkle3",
    "Twinkle4",
    "Twinkle5",
    "Twinkle6"
};

void dprintf_rgblight_mode(void) {
    uint8_t mode = rgblight_get_mode();
    if (mode >= RGBLIGHT_NAME_NUM_ANIMATIONS) mode = 0;
    dprintf("rgblight: %s\n", animation_names[mode]);
}

const char* rgblight_get_mode_name(uint8_t mode) {
    return animation_names[mode];
}

const char* rgblight_get_mode_name_short(uint8_t mode) {
    return animation_names_short[mode];
}
#endif
