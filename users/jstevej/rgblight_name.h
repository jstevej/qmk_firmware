#include QMK_KEYBOARD_H

#pragma once

#if RGBLIGHT_ENABLE
void dprintf_rgblight_mode(void);
void rgblight_get_mode_name(uint8_t mode, size_t bufsize, char *buf);
#endif
