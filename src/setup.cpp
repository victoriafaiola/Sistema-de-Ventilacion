
#include "setup.h"



//--Local variables
uint8_t var_count;
Config config;

// System settings
void setupSystem() {
    Serial.begin(19200);    // Inicialize comunication
    initSensor();           // Inicialize DHT11
    initDisplay();          // Inicialize display OLED
    oled88_welcome();
    initRelay();            // Inicialize relay 
    setupMQTT();            // Inicialize mqtt  

    Serial.begin(SERIAL_BAUDRATE);

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



