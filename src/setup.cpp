#include <Arduino.h>
#include "setup.h"
#include "sensor.h"
#include "oled.h"

// System settings
void setupSystem() {
    Serial.begin(19200);    // Inicialize comunication
    initSensor();           // Inicialize DHT11
    initDisplay();          // Inicialize display OLED
    oled88_bienvenida();
    
}