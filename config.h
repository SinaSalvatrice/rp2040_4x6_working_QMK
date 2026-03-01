#pragma once

#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0x0002
#define DEVICE_VER 0x0001
#define MANUFACTURER "Sina"
#define PRODUCT "rp2040_handwired_4x6"
#define SERIAL_NUMBER "SINA-RP2040-4X6-01"

// Encoder Button (active-low gegen GND, mit Pullup)
#define ENCODER_BTN_PIN GP12
#define DYNAMIC_KEYMAP_LAYER_COUNT 5

// WS2812 / RGBLIGHT (QMK aktuell)
#define WS2812_DI_PIN GP13
#define RGBLIGHT_LED_COUNT 10     // Anzahl NeoPixel
#define RGBLIGHT_LIMIT_VAL 80
#define RGBLIGHT_LAYERS
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_STATIC_LIGHT
#define RGBLIGHT_DEFAULT_HUE 149
#define RGBLIGHT_DEFAULT_SAT 255
#define RGBLIGHT_DEFAULT_VAL 80
#ifdef RGBLIGHT_ENABLE
#  define RGBLIGHT_EFFECT_BREATHING
#endif

// RP2040: double-tap reset into UF2 bootloader
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U

// optional, aber oft sinnvoll:
#define RGBLIGHT_SLEEP
#define RGBLIGHT_TIMEOUT 600000  // 10 Minuten (ms)
