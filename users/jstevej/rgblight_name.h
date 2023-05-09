#include QMK_KEYBOARD_H

#pragma once

#if RGBLIGHT_ENABLE
#define RGBLIGHT_NAME_NUM_ANIMATIONS 43

void dprintf_rgblight_mode(void);
const char* rgblight_get_mode_name(uint8_t mode);
#endif
