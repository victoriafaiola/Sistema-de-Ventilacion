#include "setup.h"

//--Local variables
uint8_t var_count;
Config config;
extern Storage storage;  // Reference to the global instance defined in app.cpp

// System settings
void setupSystem() {
    Serial.begin(SERIAL_BAUDRATE);    // Inicialize comunication
    Serial.println("Start");
    initSensor();           // Inicialize DHT11
    initDisplay();          // Inicialize display OLED
    oled88_welcome();
    initRelay();            // Inicialize relay 
    setupMQTT();            // Inicialize mqtt  


    storage.begin();
    String config_ssid         = storage.getSSID();
    String config_password     = storage.getPassword();
    String config_brokerIP     = storage.getBrokerIP();
    storage.end();

    // Prints the config to verify if it has been loaded succesfully
    Serial.print("SSID: "); Serial.println(config_ssid);
    Serial.print("Password: "); Serial.println(config_password);
    Serial.print("Broker IP: "); Serial.println(config_brokerIP);

    //--Init wifi
    wifi_init(WIFI_AP_STA);
    reconnectMQTT();

    //--Presentation
    Serial.println("\r\nCátedra de Electrónica II UTN-FRRO");
    Serial.println("Connection and maintain WiFi network");
}



