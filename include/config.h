#ifndef CONFIG_H
#define CONFIG_H

#include <Arduino.h>

// Pins
const int DHT_PIN = 15;         // Pin GPIO 
const int OLED_RESET_PIN = -1; // Reset OLED, -1 if is not necesary

// DHT settings
#define DHT_TYPE DHT11          // Sensor type

//--Structures
struct Config {
  String ssid;
  String ssid_pass;
  uint8_t irr_hour;
  uint8_t irr_minute;
  uint8_t irr_time;
};

#endif 