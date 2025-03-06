#include "setup.h"

//--Local variables
uint8_t var_count;
Config config;
extern Storage storage;  // Reference to the global instance defined in app.cpp

// System settings
void setupSystem() {
    Serial.begin(19200);    // Inicialize comunication
    Serial.println("Start");
    initSensor();           // Inicialize DHT11
    initDisplay();          // Inicialize display OLED
    oled88_welcome();
    initRelay();            // Inicialize relay 
    setupMQTT();            // Inicialize mqtt  

    Serial.begin(SERIAL_BAUDRATE);

    storage.begin();
    String ssid         = storage.getSSID();
    String password     = storage.getPassword();
    String brokerIP     = storage.getBrokerIP();
    
    // Prints the config to verify if it has been loaded succesfully
    Serial.print("SSID: "); Serial.println(ssid);
    Serial.print("Password: "); Serial.println(password);
    Serial.print("Broker IP: "); Serial.println(brokerIP);

    //--Init wifi
    config.ssid="Emiliano";
    config.ssid_pass="acuna1998";
    config.ap_ssid=config.device;
    config.ap_pass="12345678";
    wifi_init(WIFI_AP_STA);
    reconnectMQTT();

    //--Presentation
    Serial.println("\r\nCátedra de Electrónica II UTN-FRRO");
    Serial.println("Connection and maintain WiFi network");
}



