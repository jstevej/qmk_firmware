// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// Debounce reduces chatter (unintended double-presses), set to 0 if debouncing not needed
// #define DEBOUNCE 5

// -------------------------------------------------------------------------------------------------
// Cirque Trackpad
// -------------------------------------------------------------------------------------------------

#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP2
#define I2C1_SCL_PIN GP3
#define CIRQUE_PINNACLE_ADDR 0x2A
//#define CIRQUE_PINNACLE_TIMEOUT 20
//#define CIRQUE_PINNACLE_DEFAULT_SCALE 1024
#define I2C1_CLOCK_SPEED 400000
//#define I2C1_DUTY_CYCLE FAST_DUTY_CYCLE_2

#define POINTING_DEVICE_DEBUG

#define CIRQUE_PINNACLE_DIAMETER_MM 40
#define CIRQUE_PINNACLE_ATTENUATION EXTREG__TRACK_ADCCONFIG__ADC_ATTENUATE_2X
#define CIRQUE_PINNACLE_CURVED_OVERLAY
#define CIRQUE_PINNACLE_POSITION_MODE CIRQUE_PINNACLE_RELATIVE_MODE
#define CIRQUE_PINNACLE_TAP_ENABLE
#define CIRQUE_PINNACLE_SECONDARY_TAP_ENABLE

//#define POINTING_DEVICE_ROTATION_90
//#define POINTING_DEVICE_INVERT_X
//#define POINTING_DEVICE_INVERT_Y
//#define POINTING_DEVICE_GESTURES_SCROLL_ENABLE
//#define POINTING_DEVICE_TASK_THROTTLE_MS 10
//#define POINTING_DEVICE_GESTURES_CURSOR_GLIDE_ENABLE

// -------------------------------------------------------------------------------------------------
// Display (GC9A01)
// -------------------------------------------------------------------------------------------------

#define LCD_WIDTH 240 // custom
#define LCD_HEIGHT 240 // custom
#define LCD_BL_PIN GP20 // custom
#define LCD_CS_PIN GP21 // custom
#define LCD_DC_PIN GP4 // custom
#define LCD_RST_PIN GP5 // custom
#define LCD_SPI_DIVISOR 4 // custom
#define LCD_SPI_MODE 0 // custom

// -------------------------------------------------------------------------------------------------
// Rotary Encoder
// -------------------------------------------------------------------------------------------------

#define ENCODERS_PAD_A { GP6 }
#define ENCODERS_PAD_B { GP7 }
#define ENCODER_RESOLUTION 4

#define ENCODER_PUSHBUTTON_PIN GP8 // custom

// -------------------------------------------------------------------------------------------------
// RGB Lights
// -------------------------------------------------------------------------------------------------

#define RGB_DI_PIN GP25
#define RGBLED_NUM 40

// Override WS2812 timing to match SK6812-SIDE datasheet
// Note: PIO implementation resolution is 50 ns, timing values will be rounded

#define WS2812_TIMING 1250 // datasheet min = 1200
#define WS2812_T0H 350 // datasheet min/std/max = 200/320/400
#define WS2812_T0L (WS2812_TIMING - WS2812_T0H) // datasheet min = 800
#define WS2812_TIH 650 // datasheet min/std/max = 580/640/1000
#define WS2812_TIL (WS2812_TIMING - WS2812_T1H) // datasheet min = 200
#define WS2812_TRST_US 250 // datasheet min = 80
#define WS2812_BYTE_ORDER WS2812_BYTE_ORDER_GRB

//#define WS2812_PIO_USE_PIO0 // default
//#define WS2812_PIO_USE_PIO1

// -------------------------------------------------------------------------------------------------
// SPI
// -------------------------------------------------------------------------------------------------

#define SPI_DRIVER SPID0
#define SPI_SCK_PIN GP22
//#define SPI_SCK_PAL_MODE ?
#define SPI_MOSI_PIN GP23
//#define SPI_MOSI_PAL_MODE ?
#define SPI_MISO_PIN GP20
//#define SPI_MISO_PAL_MODE ?
