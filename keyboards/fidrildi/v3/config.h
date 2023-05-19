// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// Debounce reduces chatter (unintended double-presses), set to 0 if debouncing not needed
// #define DEBOUNCE 5

// -------------------------------------------------------------------------------------------------
// Display (GC9A01)
// -------------------------------------------------------------------------------------------------

#define LCD_WIDTH 240 // custom
#define LCD_HEIGHT 240 // custom
#define LCD_CS_PIN GP9 // custom
#define LCD_DC_PIN GP12 // custom
#define LCD_RST_PIN GP7 // custom
#define LCD_SPI_DIVISOR 4 // custom
#define LCD_SPI_MODE 0 // custom

#define QUANTUM_PAINTER_DEBUG

// -------------------------------------------------------------------------------------------------
// RGB Lights
// -------------------------------------------------------------------------------------------------

#define RGB_DI_PIN GP25
#define RGBLED_NUM 40

// -------------------------------------------------------------------------------------------------
// SPI
// -------------------------------------------------------------------------------------------------

#define SPI_DRIVER SPID1
#define SPI_SCK_PIN GP14
#define SPI_MOSI_PIN GP15
#define SPI_MISO_PIN GP8
