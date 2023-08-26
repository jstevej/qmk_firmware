// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// Debounce reduces chatter (unintended double-presses), set to 0 if debouncing not needed
// #define DEBOUNCE 5

// -------------------------------------------------------------------------------------------------
// Display (GC9A01)
// -------------------------------------------------------------------------------------------------

#define LCD_WIDTH 240 // custom
#define LCD_HEIGHT 240 // custom
#define LCD_CS_PIN GP21 // custom
#define LCD_DC_PIN GP7 // custom
#define LCD_RST_PIN GP16 // custom
#define LCD_SPI_DIVISOR 4 // custom
#define LCD_SPI_MODE 0 // custom

// -------------------------------------------------------------------------------------------------
// I2C
// -------------------------------------------------------------------------------------------------

#define I2C_DRIVER I2CD0
#define I2C0_SDA_PIN GP12
#define I2C0_SCK_PIN GP9

// -------------------------------------------------------------------------------------------------
// RGB Lights
// -------------------------------------------------------------------------------------------------

#define RGB_DI_PIN GP25
#define RGBLED_NUM 40

// -------------------------------------------------------------------------------------------------
// Rotary Encoder
// -------------------------------------------------------------------------------------------------

#define ENCODERS_PAD_A { GP15 }
#define ENCODERS_PAD_B { GP14 }
#define ENCODER_RESOLUTION 4

#define ENCODER_PUSHBUTTON_PIN GP13 // custom

// -------------------------------------------------------------------------------------------------
// SPI
// -------------------------------------------------------------------------------------------------

#define SPI_DRIVER SPID0
#define SPI_SCK_PIN GP6
#define SPI_MOSI_PIN GP23
//#define SPI_MISO_PIN GP16


