// ESP32-S3-WROOM-N16 + E22(0)-xxxM - DIY
// Full GPIO configuration template for Meshtastic.
//
// You can override any of the GPIO aliases below from platformio.ini using:
//   build_flags = ... -D GPIO_ALIAS_XX=<pin>
//
// Notes:
// - Strapping pins: 0, 3, 45, 46 (use carefully at boot).
// - Native USB pins: 19, 20 (normally avoid for peripherals).
// - GPIO22-25 do not exist on ESP32-S3.
// - GPIO26-37 are usually unavailable on WROOM modules.

#pragma once

// -----------------------------------------------------------------------------
// User-overridable GPIO aliases (0..48)
// -----------------------------------------------------------------------------
#ifndef GPIO_ALIAS_00
#define GPIO_ALIAS_00 0
#endif
#ifndef GPIO_ALIAS_01
#define GPIO_ALIAS_01 1
#endif
#ifndef GPIO_ALIAS_02
#define GPIO_ALIAS_02 2
#endif
#ifndef GPIO_ALIAS_03
#define GPIO_ALIAS_03 3
#endif
#ifndef GPIO_ALIAS_04
#define GPIO_ALIAS_04 4
#endif
#ifndef GPIO_ALIAS_05
#define GPIO_ALIAS_05 5
#endif
#ifndef GPIO_ALIAS_06
#define GPIO_ALIAS_06 6
#endif
#ifndef GPIO_ALIAS_07
#define GPIO_ALIAS_07 7
#endif
#ifndef GPIO_ALIAS_08
#define GPIO_ALIAS_08 8
#endif
#ifndef GPIO_ALIAS_09
#define GPIO_ALIAS_09 9
#endif
#ifndef GPIO_ALIAS_10
#define GPIO_ALIAS_10 10
#endif
#ifndef GPIO_ALIAS_11
#define GPIO_ALIAS_11 11
#endif
#ifndef GPIO_ALIAS_12
#define GPIO_ALIAS_12 12
#endif
#ifndef GPIO_ALIAS_13
#define GPIO_ALIAS_13 13
#endif
#ifndef GPIO_ALIAS_14
#define GPIO_ALIAS_14 14
#endif
#ifndef GPIO_ALIAS_15
#define GPIO_ALIAS_15 15
#endif
#ifndef GPIO_ALIAS_16
#define GPIO_ALIAS_16 16
#endif
#ifndef GPIO_ALIAS_17
#define GPIO_ALIAS_17 17
#endif
#ifndef GPIO_ALIAS_18
#define GPIO_ALIAS_18 18
#endif
#ifndef GPIO_ALIAS_19
#define GPIO_ALIAS_19 19
#endif
#ifndef GPIO_ALIAS_20
#define GPIO_ALIAS_20 20
#endif
#ifndef GPIO_ALIAS_21
#define GPIO_ALIAS_21 21
#endif
#ifndef GPIO_ALIAS_22
#define GPIO_ALIAS_22 22
#endif
#ifndef GPIO_ALIAS_23
#define GPIO_ALIAS_23 23
#endif
#ifndef GPIO_ALIAS_24
#define GPIO_ALIAS_24 24
#endif
#ifndef GPIO_ALIAS_25
#define GPIO_ALIAS_25 25
#endif
#ifndef GPIO_ALIAS_26
#define GPIO_ALIAS_26 26
#endif
#ifndef GPIO_ALIAS_27
#define GPIO_ALIAS_27 27
#endif
#ifndef GPIO_ALIAS_28
#define GPIO_ALIAS_28 28
#endif
#ifndef GPIO_ALIAS_29
#define GPIO_ALIAS_29 29
#endif
#ifndef GPIO_ALIAS_30
#define GPIO_ALIAS_30 30
#endif
#ifndef GPIO_ALIAS_31
#define GPIO_ALIAS_31 31
#endif
#ifndef GPIO_ALIAS_32
#define GPIO_ALIAS_32 32
#endif
#ifndef GPIO_ALIAS_33
#define GPIO_ALIAS_33 33
#endif
#ifndef GPIO_ALIAS_34
#define GPIO_ALIAS_34 34
#endif
#ifndef GPIO_ALIAS_35
#define GPIO_ALIAS_35 35
#endif
#ifndef GPIO_ALIAS_36
#define GPIO_ALIAS_36 36
#endif
#ifndef GPIO_ALIAS_37
#define GPIO_ALIAS_37 37
#endif
#ifndef GPIO_ALIAS_38
#define GPIO_ALIAS_38 38
#endif
#ifndef GPIO_ALIAS_39
#define GPIO_ALIAS_39 39
#endif
#ifndef GPIO_ALIAS_40
#define GPIO_ALIAS_40 40
#endif
#ifndef GPIO_ALIAS_41
#define GPIO_ALIAS_41 41
#endif
#ifndef GPIO_ALIAS_42
#define GPIO_ALIAS_42 42
#endif
#ifndef GPIO_ALIAS_43
#define GPIO_ALIAS_43 43
#endif
#ifndef GPIO_ALIAS_44
#define GPIO_ALIAS_44 44
#endif
#ifndef GPIO_ALIAS_45
#define GPIO_ALIAS_45 45
#endif
#ifndef GPIO_ALIAS_46
#define GPIO_ALIAS_46 46
#endif
#ifndef GPIO_ALIAS_47
#define GPIO_ALIAS_47 47
#endif
#ifndef GPIO_ALIAS_48
#define GPIO_ALIAS_48 48
#endif

// -----------------------------------------------------------------------------
// Board feature/pin assignment defaults (override with -D as needed)
// -----------------------------------------------------------------------------

// Battery
#ifndef BATTERY_PIN
#define BATTERY_PIN GPIO_ALIAS_03
#endif
#ifndef ADC_MULTIPLIER
#define ADC_MULTIPLIER 2.0
#endif
#ifndef ADC_CHANNEL
#define ADC_CHANNEL ADC1_GPIO3_CHANNEL
#endif

// Button
#ifndef BUTTON_PIN
#define BUTTON_PIN GPIO_ALIAS_39
#endif

// I2C
#ifndef I2C_SCL
#define I2C_SCL GPIO_ALIAS_02
#endif
#ifndef I2C_SDA
#define I2C_SDA GPIO_ALIAS_42
#endif

// Screen disabled by default
#ifndef HAS_SCREEN
#define HAS_SCREEN 0
#endif

// GPS
#ifndef HAS_GPS
#define HAS_GPS 1
#endif
#ifndef GPS_TX_PIN
#define GPS_TX_PIN GPIO_ALIAS_43
#endif
#ifndef GPS_RX_PIN
#define GPS_RX_PIN GPIO_ALIAS_44
#endif

// LoRa module support
#define USE_SX1262
#define USE_SX1268

#ifndef SX126X_MAX_POWER
#define SX126X_MAX_POWER 22
#endif
#ifndef SX126X_DIO3_TCXO_VOLTAGE
#define SX126X_DIO3_TCXO_VOLTAGE 1.8
#endif

#ifndef SX126X_CS
#define SX126X_CS GPIO_ALIAS_05
#endif
#ifndef SX126X_SCK
#define SX126X_SCK GPIO_ALIAS_06
#endif
#ifndef SX126X_MOSI
#define SX126X_MOSI GPIO_ALIAS_13
#endif
#ifndef SX126X_MISO
#define SX126X_MISO GPIO_ALIAS_04
#endif
#ifndef SX126X_RESET
#define SX126X_RESET GPIO_ALIAS_01
#endif
#ifndef SX126X_BUSY
#define SX126X_BUSY GPIO_ALIAS_48
#endif
#ifndef SX126X_DIO1
#define SX126X_DIO1 GPIO_ALIAS_47
#endif

#ifndef SX126X_TXEN
#define SX126X_TXEN GPIO_ALIAS_10
#endif
#ifndef SX126X_RXEN
#define SX126X_RXEN GPIO_ALIAS_12
#endif

// Compatibility macros used across Meshtastic code
#define LORA_CS SX126X_CS
#define LORA_SCK SX126X_SCK
#define LORA_MOSI SX126X_MOSI
#define LORA_MISO SX126X_MISO
#define LORA_DIO1 SX126X_DIO1
