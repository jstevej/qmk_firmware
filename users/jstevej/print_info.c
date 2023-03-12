#include QMK_KEYBOARD_H
#include "version.h"

extern bool touchpad_init;

void print_info(uint8_t keymap_ver) {
    dprintf("keyboard info:\n");

    dprintf("MANUFACTURER = %s\n", MANUFACTURER);
    dprintf("QMK_KEYBOARD = %s\n", QMK_KEYBOARD);
    //dprintf("PRODUCT = %s\n", PRODUCT);
    dprintf("BOARD_NAME = %s\n", BOARD_NAME);
#ifdef DEVICE_VER
    dprintf("DEVICE_VER = %04X\n", DEVICE_VER);
#endif
    dprintf("VENDOR_ID:PRODUCT_ID = %04X:%04X\n", VENDOR_ID, PRODUCT_ID);
    dprintf("QMK_VERSION = %s\n", QMK_VERSION);
    dprintf("QMK_BUILDDATE = %s\n", QMK_BUILDDATE);
    dprintf("QMK_KEYMAP = %s (v %d)\n", QMK_KEYMAP, keymap_ver);

#ifdef BOOTMAGIC_ENABLE
    dprintf("BOOTMAGIC_ENABLE = 1\n");
#else
    dprintf("BOOTMAGIC_ENABLE = 0\n");
#endif

#ifdef COMMAND_ENABLE
    dprintf("COMMAND_ENABLE = 1\n");
#else

    dprintf("COMMAND_ENABLE = 0\n");
#endif

#ifdef CONSOLE_ENABLE
    dprintf("CONSOLE_ENABLE = 1\n");
#else
    dprintf("CONSOLE_ENABLE = 0\n");
#endif

#ifdef EXTRAKEY_ENABLE
    dprintf("EXTRAKEY_ENABLE = 1\n");
#else
    dprintf("EXTRAKEY_ENABLE = 0\n");
#endif

#ifdef MOUSEKEY_ENABLE
    dprintf("MOUSEKEY_ENABLE = 1\n");
#else
    dprintf("MOUSEKEY_ENABLE = 0\n");
#endif

#ifdef NKRO_ENABLE
    dprintf("NKRO_ENABLE = 1\n");
#else
    dprintf("NKRO_ENABLE = 0\n");
#endif

#ifdef POINTING_DEVICE_ENABLE
    dprintf("POINTING_DEVICE_ENABLE = 1\n");

    #ifdef POINTING_DEVICE_DRIVER_cirque_pinnacle_i2c
    dprintf("POINTING_DEVICE_DRIVER = cirque_pinnacle_i2c\n");
    #endif

    #ifdef POINTING_DEVICE_DRIVER_cirque_pinnacle_spi
    dprintf("POINTING_DEVICE_DRIVER = cirque_pinnacle_spi\n");
    #endif

    dprintf("touchpad_init = %d\n", touchpad_init);
#else
    dprintf("POINTING_DEVICE_ENABLE = 0\n");
#endif

#if RGBLIGHT_ENABLE
    dprintf("RGBLIGHT_ENABLE = 1\n");
#else
    dprintf("RGBLIGHT_ENABLE = 0\n");
#endif
}
