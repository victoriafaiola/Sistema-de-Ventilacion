#include <Arduino.h>
#include "setup.h"
#include "sensor.h"
#include "oled.h"
#include "relay.h"
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
    setupMQTT();            // Inicialize mqtt  
}

//--Local variables
uint8_t var_count;
Config config;


//--Startup function
void App_setup(void){
    Serial.begin(SERIAL_BAUDRATE);

    //--Init wifi
    config.ssid="Emiliano";
    config.ssid_pass="acuna1998";
    config.ap_ssid=config.device;
    config.ap_pass="12345678";
    wifi_init(WIFI_AP_STA);

    //--Presentation
    Serial.println("\r\nCátedra de Electrónica II UTN-FRRO");
    Serial.println("Connection and maintain WiFi network");
}