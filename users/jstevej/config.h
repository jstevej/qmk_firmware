#pragma once

//#define NO_DEBUG
//#define NO_PRINT
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

// -------------------------------------------------------------------------------------------------
// Mod-tap settings for home row mods
//
// https://docs.qmk.fm/#/mod_tap
// https://docs.qmk.fm/#/tap_hold?id=ignore-mod-tap-interrupt
// https://precondition.github.io/home-row-mods
// -------------------------------------------------------------------------------------------------

#define IGNORE_MOD_TAP_INTERRUPT
//#define TAPPING_TERM 200 // not used; see per-key settings in get_tapping_term
#define TAPPING_TERM_PER_KEY
#define TAPPING_FORCE_HOLD
#define PERMISSIVE_HOLD

// -------------------------------------------------------------------------------------------------
// Combos
// -------------------------------------------------------------------------------------------------

#define COMBO_COUNT 2
//#define COMBO_TERM 50 // default 50 ms

// -------------------------------------------------------------------------------------------------
// RGB lights
// -------------------------------------------------------------------------------------------------

#ifdef RGBLIGHT_ENABLE
    #define RGBLIGHT_LAYERS

    #define RGBLIGHT_HUE_STEP 8
    #define RGBLIGHT_SAT_STEP 8
    #define RGBLIGHT_VAL_STEP 8

    #define RGBLIGHT_DEFAULT_HUE 180

    //#define RGBLIGHT_MODE_ALTERNATING
    //#define RGBLIGHT_MODE_BREATHING 1
    //#define RGBLIGHT_MODE_CHRISTMAS
    //#define RGBLIGHT_MODE_KNIGHT 1
    //#define RGBLIGHT_MODE_RAINBOW_MOOD 1
    //#define RGBLIGHT_MODE_RAINBOW_SWIRL 1
    //#define RGBLIGHT_MODE_SNAKE 1
    //#define RGBLIGHT_MODE_TWINKLE 1

    #define RGBLIGHT_EFFECT_ALTERNATING
    #define RGBLIGHT_EFFECT_BREATHING
    #define RGBLIGHT_EFFECT_CHRISTMAS
    #define RGBLIGHT_EFFECT_KNIGHT
    #define RGBLIGHT_EFFECT_RAINBOW_MOOD
    #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
    #define RGBLIGHT_EFFECT_RGB_TEST
    #define RGBLIGHT_EFFECT_SNAKE
    #define RGBLIGHT_EFFECT_STATIC_GRADIENT
    #define RGBLIGHT_EFFECT_TWINKLE

    //#define RGBLIGHT_EFFECT_BREATHE_CENTER 1.0
    //#define RGBLIGHT_EFFECT_BREATHE_MAX 255
    //#define RGBLIGHT_EFFECT_CHRISTMAS_INTERVAL 40
    //#define RGBLIGHT_EFFECT_CHRISTMAS_STEP 2
    //#define RGBLIGHT_EFFECT_KNIGHT_LED_NUM RGBLED_NUM
    //#define RGBLIGHT_EFFECT_KNIGHT_LENGTH 3
    //#define RGBLIGHT_EFFECT_KNIGHT_OFFSET 0
    //#define RGBLIGHT_EFFECT_RAINBOW_SWIRL_RANGE 255
    //#define RGBLIGHT_EFFECT_SNAKE_LENGTH 4
    //#define RGBLIGHT_EFFECT_TWINKLE_LIFE 200
    //#define RGBLIGHT_EFFECT_TWINKLE_PROBABILITY 1/127
#endif

// -------------------------------------------------------------------------------------------------
// Unicode Support
// -------------------------------------------------------------------------------------------------

#define UNICODE_SELECTED_MODES UNICODE_MODE_MACOS
