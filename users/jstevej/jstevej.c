#include QMK_KEYBOARD_H

#include "rgblight_name.h"
#include "print_info.h"

#if QUANTUM_PAINTER_ENABLE
#include <qp.h>
#endif

#define JSTEVEJ_KEYMAP_VERSION 2

#define UI_ENABLE 0 // QUANTUM_PAINTER_ENABLE

#if QUANTUM_PAINTER_ENABLE
painter_device_t display;
#endif

#if UI_ENABLE
#include "ui.h"
#endif

#define BSPC_LEFT 0

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

#if BSPC_LEFT
#define SP_RSYM LT(LY_RSYM, KC_SPC)
#define BS_LSYM LT(LY_LSYM, KC_BSPC)
#else
#define BS_RSYM LT(LY_RSYM, KC_BSPC)
#define SP_LSYM LT(LY_LSYM, KC_SPC)
#endif
#define TB_RNAV LT(LY_RNAV, KC_TAB)
#define EN_LNUM LT(LY_LNUM, KC_ENT)

#define UC_DEG UC(0x00B0) // degree symbol (doesn't seem to work on mac)

#define MK_DEG LSA(KC_8) // macro for option-shift-8, the degree symbol on mac

enum custom_keycodes {
    CK_INFO = SAFE_RANGE,
    CK_RGBM,
    CK_SHRG,
    CK_OSRS
};

const uint16_t PROGMEM esc_combo[] = { KC_S, KC_D, COMBO_END };
const uint16_t PROGMEM capsw_combo[] = { KC_K, KC_L, COMBO_END };
const uint16_t PROGMEM numl_combo[] = { KC_D, KC_F, COMBO_END };
const uint16_t PROGMEM base_combo[] = { KC_5, KC_6, COMBO_END };
const uint16_t PROGMEM osrs_combo[] = { KC_A, KC_S, COMBO_END };

enum combos {
    CM_SD_ESC,
    CM_KL_CAPSW,
    CM_DF_NUML,
    CM_56_BASE,
    CM_AS_OSRS
};

combo_t key_combos[COMBO_COUNT] = {
    [CM_SD_ESC] = COMBO(esc_combo, KC_ESC),
    [CM_KL_CAPSW] = COMBO(capsw_combo, CW_TOGG),
    [CM_DF_NUML] = COMBO(numl_combo, TO(LY_LNUM)),
    [CM_56_BASE] = COMBO(base_combo, TO(LY_BASE)),
    [CM_AS_OSRS] = COMBO(osrs_combo, CK_OSRS)
};

#ifdef KEYBOARD_planck_rev6_drop
#undef ENCODER_ENABLE
#define ENCODER_ENABLE 0
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [LY_BASE] = LAYOUT_jstevej(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
        LSFT_Z,  LALT_X,  KC_C,    LCTL_V,  LGUI_B,      RGUI_N,  RCTL_M,  KC_COMM, RALT_DO, RSFT_QU,
#if BSPC_LEFT
                                   SP_RSYM, TB_RNAV,     EN_LNUM, BS_LSYM
#else
                                   BS_RSYM, TB_RNAV,     EN_LNUM, SP_LSYM
#endif
    ),
    [LY_LSYM] = LAYOUT_jstevej(
        KC_MINS, KC_EXLM, KC_AMPR, KC_PIPE, KC_PLUS,     RGB_HUI, RGB_VAD, RGB_VAI, CK_RGBM, XXXXXXX,
        KC_CIRC, KC_LPRN, KC_QUOT, KC_RPRN, KC_EQL,      CK_SHRG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_ASTR, KC_LT,   KC_GRV,  KC_GT,   KC_SLSH,     XXXXXXX, XXXXXXX, CK_INFO, DB_TOGG, EE_CLR,
#if BSPC_LEFT
                                   KC_BSPC, KC_DEL,      QK_BOOT, XXXXXXX
#else
                                   KC_SPC,  KC_DEL,      QK_BOOT, XXXXXXX
#endif
    ),
    [LY_RSYM] = LAYOUT_jstevej(
        KC_P,    KC_O,    KC_I,    KC_U,    KC_Y,        KC_PERC, KC_TILD, KC_HASH, KC_AT,   KC_UNDS,
        CK_OSRS, KC_L,    KC_K,    KC_J,    KC_H,        MK_DEG,  KC_LCBR, KC_DQUO, KC_RCBR, KC_DLR,
        XXXXXXX, XXXXXXX, XXXXXXX, KC_M,    KC_N,        KC_BSLS, KC_LBRC, KC_COMM, KC_RBRC, KC_QUES,
#if BSPC_LEFT
                                   KC_BSPC, KC_ENT,      XXXXXXX, KC_SPC
#else
                                   KC_SPC,  KC_ENT,      XXXXXXX, KC_BSPC
#endif
    ),
    [LY_LNUM] = LAYOUT_jstevej(
        KC_MINS, KC_7,    KC_8,    KC_9,    KC_PLUS,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_0,    KC_4,    KC_5,    KC_6,    KC_DOT,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_ASTR, KC_1,    KC_2,    KC_3,    KC_SLSH,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                   KC_BSPC, KC_TAB,      XXXXXXX, XXXXXXX
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

#if ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
#if UI_ENABLE
            ui_register_rotate(true);
#endif
            tap_code(KC_KB_VOLUME_UP);
        } else {
#if UI_ENABLE
            ui_register_rotate(false);
#endif
            tap_code(KC_KB_VOLUME_DOWN);
        }
    }

    return true;
}
#endif

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LSFT_Z:
        case LALT_X:
        case LCTL_V:
        case LGUI_B:
        case RSFT_QU:
        case RALT_DO:
        case RCTL_M:
        case RGUI_N:
            return false;

#if BSPC_LEFT
        case SP_RSYM:
        case BS_LSYM:
#else
        case BS_RSYM:
        case SP_LSYM:
#endif
        case TB_RNAV:
        case EN_LNUM:
            return false;

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
#if BSPC_LEFT
        case SP_RSYM:
        case BS_LSYM:
#else
        case BS_RSYM:
        case SP_LSYM:
#endif
        case TB_RNAV:
        case EN_LNUM:
            return 200;
        default:
            break;
    }

    return 200;
}

#if 0
uint16_t debug_timer = 0;

void housekeeping_task_user(void) {
    if (debug_timer == 0 || timer_elapsed(debug_timer) > 3000) {
        debug_timer = timer_read();
        dprintf("tick\n");
    }
}
#endif

#if 1
#include "source_sans_pro_18.qff.h"
static painter_font_handle_t jstevej_font;
#endif

void keyboard_post_init_user(void) {
    debug_enable = true;
    //debug_matrix = true;
    debug_keyboard = true;
    debug_mouse = true;

#if POINTING_DEVICE_ENABLE
    pointing_device_set_cpi(384);
#endif

#if QUANTUM_PAINTER_ENABLE && 1
#ifdef LCD_BL_PIN
    setPinOutput(LCD_BL_PIN);
    writePinHigh(LCD_BL_PIN);
#endif
    display = qp_gc9a01_make_spi_device(
            LCD_WIDTH,
            LCD_HEIGHT,
            LCD_CS_PIN,
            LCD_DC_PIN,
            LCD_RST_PIN,
            LCD_SPI_DIVISOR,
            LCD_SPI_MODE
    );
    qp_init(display, QP_ROTATION_0);
    qp_power(display, true);
    qp_clear(display);
    qp_flush(display);

    jstevej_font = qp_load_font_mem(font_source_sans_pro_18);

    if (qp_lvgl_attach(display)) {
        dprintf("lvgl attached\n");
    } else {
        dprintf("failed attaching lvgl\n");
    }

    //lv_disp_set_color_format(lv_scr_act(), LV_COLOR_FORMAT_NATIVE);

    lv_obj_set_style_bg_color(lv_scr_act(), lv_color_hex(0x003452), LV_PART_MAIN);
    lv_obj_t *label = lv_label_create(lv_scr_act());
    lv_label_set_text(label, "Hello, World!");
    lv_obj_set_style_text_color(lv_scr_act(), lv_color_hex(0xffffff), LV_PART_MAIN);
    lv_obj_align(label, LV_ALIGN_CENTER, 0, 0);

    static lv_style_t style;
    lv_style_init(&style);
    lv_style_set_bg_color(&style, lv_palette_main(LV_PALETTE_GREEN));
    lv_style_set_arc_color(&style, lv_palette_main(LV_PALETTE_RED));
    lv_style_set_arc_width(&style, 4);
    lv_obj_t *arc = lv_slider_create(lv_scr_act());
    lv_obj_add_style(arc, &style, 0);
    lv_obj_center(arc);

    //qp_rect(display, 0, 0, 119, 119, 85, 255, 255, true);
    //qp_rect(display, 119, 0, 239, 119, 170, 255, 255, true);
    //qp_rect(display, 0, 119, 119, 239, 0, 255, 255, true);
    //qp_rect(display, 119, 119, 239, 239, 0, 0, 0, true);

    //qp_flush(display);
    //if (jstevej_font != NULL) {
    //    dprintf("font loaded\n");
    //    static const char *text = "Hello, World.";
    //    //qp_drawtext_recolor(display, 125, 125, jstevej_font, text, 170, 255, 255, 0, 0, 0);
    //    qp_drawtext(display, 125, 125, jstevej_font, text);
    //} else {
    //    dprintf("font is null\n");
    //}

    //qp_flush(display);
#endif
}

#if POINTING_DEVICE_ENABLE
layer_state_t layer_state_set_user(layer_state_t state) {
    if (layer_state_cmp(state, LY_RNAV)) {
        pointing_device_set_cpi(16); // TODO: make controllable with ui
    } else {
        pointing_device_set_cpi(384); // TODO: make controllable with ui
    }

    return state;
}
#endif

#if ENCODER_ENABLE
static uint8_t encoder_pressed = 0;

void matrix_init_user(void) {
    setPinInputHigh(ENCODER_PUSHBUTTON_PIN);
}

void matrix_scan_user(void) {
    if (readPin(ENCODER_PUSHBUTTON_PIN)) {
        encoder_pressed = false;
    } else {
        if (!encoder_pressed) {
#if UI_ENABLE
            ui_register_press();
#endif
            dprintf("encoder: pressed\n");
        }

        encoder_pressed = true;
    }
}
#endif

#if POINTING_DEVICE_ENABLE
report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
    if (layer_state_is(LY_RNAV)) {
        mouse_report.h = mouse_report.x;
        mouse_report.v = mouse_report.y;
        mouse_report.x = 0;
        mouse_report.y = 0;
    }

    return mouse_report;
}
#endif

typedef enum {
    JSTEVEJ_ONESHOT_INACTIVE,
    JSTEVEJ_ONESHOT_LOADED,
    JSTEVEJ_ONESHOT_TRIGGERED
} jstevej_oneshot_state_t;

static jstevej_oneshot_state_t osrs_state = JSTEVEJ_ONESHOT_INACTIVE;

//void post_process_record_user(uint16_t keycode, keyrecord_t* record) {
//}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    dprintf("process_record_user: %d (%d)\n", keycode, record->event.pressed);

    if (osrs_state == JSTEVEJ_ONESHOT_LOADED && record->event.pressed) {
        osrs_state = JSTEVEJ_ONESHOT_TRIGGERED;
        layer_on(LY_RSYM);
    } else if (osrs_state == JSTEVEJ_ONESHOT_TRIGGERED && !record->event.pressed) {
        osrs_state = JSTEVEJ_ONESHOT_INACTIVE;
        layer_off(LY_RSYM);
    }

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

        case CK_OSRS:
            if (record->event.pressed) {
                osrs_state = JSTEVEJ_ONESHOT_LOADED;
            }
            return false;

        default:
            break;
    }

    return true;
}
