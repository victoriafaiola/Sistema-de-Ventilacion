#include "app.h"
#include "sensor.h"
#include "oled.h"
#include "relay.h"
#include "functions.h"
#include "persist.h"
#include "wificonnection.h"
#include "publish.h"
#include "mqtt.h"

float temperature=0;
float humidity=0;

// Principal function
void runApp() {
    temperature = readTemperature(); // read temperature
    humidity = readHumidity();       // read humidity
    if (isnan(temperature) || isnan(humidity)) {
        Serial.println("Error al leer del sensor DHT!");
    }
    showData(temperature, humidity);   // Show measure in display OLED
    controlRelay(temperature, humidity);   // Control the relay
    showState();                           // Show relay state
    delay(2000);                           // Wait 2 seconds to update
    handleWiFiConnection();                // wifi connection
    publishTemperature(temperature);
    publishHumidity(humidity);
    publishRelayState(showState);

}