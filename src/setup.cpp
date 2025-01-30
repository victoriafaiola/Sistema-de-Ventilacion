#include <Arduino.h>
#include "setup.h"
#include "sensor.h"
#include "oled.h"
#include "relay.h"
#include "functions.h"
#include "persist.h"
#include "wificonnection.h"
#include "publish.h"
#include "mqtt.h"

// System settings
void setupSystem() {
    Serial.begin(19200);    // Inicialize comunication
    initSensor();           // Inicialize DHT11
    initDisplay();          // Inicialize display OLED
    oled88_welcome();
    initRelay();            // Inicialize relay    
    initWiFi();             // Inicialize wifi
    setupMQTT();            // Inicialize mqtt
}