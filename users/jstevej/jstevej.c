#include QMK_KEYBOARD_H

#include "rgblight_name.h"
#include "print_info.h"

#define JSTEVEJ_KEYMAP_VERSION 1

enum layers {
    LY_BASE,
    LY_LSYM,
    LY_RSYM,
    LY_LNUM,
    LY_RNAV,
};

#define LSFT_Z LSFT_T(KC_Z)
#define LALT_X LALT_T(KC_X)
#define LCTL_V LCTL_T(KC_V)
#define LGUI_B LGUI_T(KC_B)
#define RSFT_QU LSFT_T(KC_QUES)
#define RALT_DO RALT_T(KC_DOT)
#define RCTL_M RCTL_T(KC_M)
#define RGUI_N RGUI_T(KC_N)

#define SP_RSYM LT(LY_RSYM, KC_SPC)
#define TB_RNAV LT(LY_RNAV, KC_TAB)
#define EN_LNUM LT(LY_LNUM, KC_ENT)
#define BS_LSYM LT(LY_LSYM, KC_BSPC)

#define UC_DEG UC(0x00B0) // degree symb

const uint16_t PROGMEM esc_combo[] = { KC_S, KC_D, COMBO_END };
const uint16_t PROGMEM capsw_combo[] = { KC_K, KC_L, COMBO_END };

enum combos {
    CM_SD_ESC,
    CM_KL_CAPSW,
};

combo_t key_combos[COMBO_COUNT] = {
    [CM_SD_ESC] = COMBO(esc_combo, KC_ESC),
    [CM_KL_CAPSW] = COMBO(capsw_combo, CW_TOGG)
};

#ifdef KEYBOARD_planck_rev6_drop
#define XXX KC_NO
#define LAYOUT_jstevej( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, \
                   k30, k31, k32, k33 \
    ) LAYOUT_ortho_4x12( \
    k00, k01, k02, k03, k04, XXX, XXX, k05, k06, k07, k08, k09, \
    k10, k11, k12, k13, k14, XXX, XXX, k15, k16, k17, k18, k19, \
    k20, k21, k22, k23, k24, XXX, XXX, k25, k26, k27, k28, k29, \
    XXX, XXX, XXX, k30, k31, XXX, XXX, k32, k33, XXX, XXX, XXX \
    )
#else
#define LAYOUT_jstevej LAYOUT_split_3x5_2
#endif

enum custom_keycodes {
    CK_INFO = SAFE_RANGE,
    CK_RGBM,
    CK_SHRG
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // TODO: swap space and backspace? more consistent for lnum
    [LY_BASE] = LAYOUT_jstevej(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
        LSFT_Z,  LALT_X,  KC_C,    LCTL_V,  LGUI_B,      RGUI_N,  RCTL_M,  KC_COMM, RALT_DO, RSFT_QU,
                                   SP_RSYM, TB_RNAV,     EN_LNUM, BS_LSYM
    ),
    [LY_LSYM] = LAYOUT_jstevej(
        KC_MINS, KC_EXLM, KC_AMPR, KC_PIPE, KC_PLUS,     RGB_HUI, RGB_VAD, RGB_VAI, CK_RGBM, XXXXXXX,
        KC_CIRC, KC_LPRN, KC_QUOT, KC_RPRN, KC_EQL,      CK_SHRG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_ASTR, KC_LT,   KC_GRV,  KC_GT,   KC_SLSH,     XXXXXXX, XXXXXXX, CK_INFO, DB_TOGG, EE_CLR,
                                   KC_BSPC, XXXXXXX,     QK_BOOT, XXXXXXX
    ),
    [LY_RSYM] = LAYOUT_jstevej(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     KC_PERC, KC_TILD, KC_HASH, KC_AT,   KC_UNDS,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     UC_DEG,  KC_LCBR, KC_DQUO, KC_RCBR, KC_DLR,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     KC_BSLS, KC_LBRC, KC_COMM, KC_RBRC, KC_QUES,
                                   XXXXXXX, XXXXXXX,     XXXXXXX,  KC_SPC
    ),
    [LY_LNUM] = LAYOUT_jstevej(
        KC_PMNS, KC_P7,   KC_P8,   KC_P9,   KC_PPLS,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_P0,   KC_4,    KC_P5,   KC_P6,   KC_DOT,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_PAST, KC_P1,   KC_P2,   KC_P3,   KC_PSLS,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                   KC_BSPC, KC_ENT,      XXXXXXX, XXXXXXX
    ),
    [LY_RNAV] = LAYOUT_jstevej(
        KC_F12,  KC_F7,   KC_F8,   KC_F9,   XXXXXXX,     KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, XXXXXXX,
        KC_F10,  KC_F4,   KC_F5,   KC_F6,   XXXXXXX,     KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX,
        KC_F11,  KC_F1,   KC_F2,   KC_F3,   XXXXXXX,     KC_END,  KC_PGDN, KC_PGUP, KC_HOME, KC_MENU,
                                   XXXXXXX, XXXXXXX,     KC_TAB,  XXXXXXX
    ),
};

bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        case KC_A ... KC_Z:
            add_weak_mods(MOD_BIT(KC_LSFT));
            return true;
        case KC_1 ... KC_0:
        case KC_P1 ... KC_P0:
        case KC_BSPC:
        case KC_DEL:
        case KC_MINS:
        case KC_UNDS:
            return true;
        default:
            break;
    }

    return false;
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LSFT_Z:
        case RSFT_QU:
            return 140;
        case LALT_X:
        case LCTL_V:
        case LGUI_B:
        case RALT_DO:
        case RCTL_M:
        case RGUI_N:
            return 300;
        case SP_RSYM:
        case TB_RNAV:
        case EN_LNUM:
        case BS_LSYM:
            return 200;
        default:
            break;
    }

    return 200;
}

//void i2c_init(void) {
//    static bool is_initialized = false;
//
//    if (!is_initialized) {
//        is_initialized = true;
//
//        palSetLineMode(I2C1_SCL_PIN, PAL_MODE_INPUT);
//        palSetLineMode(I2C1_SDA_PIN, PAL_MODE_INPUT);
//
//        chThdSleepMilliseconds(10);
//
//        palSetLineMode(I2C1_SCL_PIN, PAL_MODE_ALTERNATE_I2C | PAL_RP_PAD_SLEWFAST | PAL_RP_PAD_DRIVE4);
//        palSetLineMode(I2C1_SDA_PIN, PAL_MODE_ALTERNATE_I2C | PAL_RP_PAD_SLEWFAST | PAL_RP_PAD_DRIVE4);
//    }
//}

void keyboard_post_init_user(void) {
    debug_enable = true;
    //debug_matrix = true;
    debug_keyboard = true;
    debug_mouse = true;
}

//void pointing_device_init_user(void) {
//    dprintf("pointing device initialized\n");
//}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case CK_INFO:
            if (record->event.pressed) {
                print_info(JSTEVEJ_KEYMAP_VERSION);
            }
            return false;

        case CK_RGBM:
            if (record->event.pressed) {
#if RGBLIGHT_ENABLE
                rgblight_step();
                dprintf_rgblight_mode();
#else
                dprintf("rgblight not enabled\n");
#endif
            }
            return false;

        case CK_SHRG:
            if (record->event.pressed) {
                send_unicode_string("¯\\_(ツ)_/¯"); // idea from users/curry
            }
            return false;

        default:
            break;
    }

    return true;
}
