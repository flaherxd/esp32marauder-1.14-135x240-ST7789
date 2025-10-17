// User_Setup_ST7789_114.h
// Configuration for 1.14" 135x240 ST7789 display used with ESP32 Marauder (Cheap Yellow Display)
// Place this file in the TFT_eSPI folder and select it in User_Setup_Select.h

#ifndef USER_SETUP_ST7789_114_H
#define USER_SETUP_ST7789_114_H

#define ST7789_DRIVER
#define TFT_WIDTH  135
#define TFT_HEIGHT 240

// SPI pins (change only if you wired different pins)
#define TFT_MOSI 23
#define TFT_SCLK 18
#define TFT_CS   5
#define TFT_DC   2
#define TFT_RST  4
#define TFT_BL   -1   // Set to -1 if BLK is tied to 3.3V

// Fonts and features
#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
#define LOAD_GFXFF

#endif // USER_SETUP_ST7789_114_H
