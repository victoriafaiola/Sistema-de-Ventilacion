#ifndef CONFIG_H
#define CONFIG_H

#include <Arduino.h>

// Pins
const int DHT_PIN = 15;         // Pin GPIO
const int OLED_RESET_PIN = -1; // Reset OLED, -1 if is not necesary

// DHT settings
#define DHT_TYPE DHT11          // Sensor type

//--Software constants
#define SERIAL_BAUDRATE             19200

//--Structures
struct Config {
  const char* device;
  const char* ssid;
  const char* ssid_pass;
  const char* ap_ssid;
  const char* ap_pass;
};

#endif
