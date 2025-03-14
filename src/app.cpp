#include "app.h"
#include "sensor.h"
#include "oled.h"
#include "relay.h"
#include "wificonnection.h"
#include "publish.h"
#include "mqtt.h"
#include "commands.h"
#include "storage.h"

//--Local variables
bool wifi_state;
float temperature=0;
float humidity=0;

Storage storage;

// Principal function
void runApp() {
    temperature = readTemperature();                        // read temperature
    humidity = readHumidity();                              // read humidity
    if (isnan(temperature) || isnan(humidity)) {
        Serial.println("Error al leer del sensor DHT!");
    }
    showData(temperature, humidity);                       // Show measure in display OLED
    controlRelay(temperature, humidity);                   // Control the relay
    delay(2000);                                           // Wait 2 seconds to update
    publishTemperature(temperature);
    publishHumidity(humidity);
    publishRelayState(showState());
    wifi_state=wifi_loop();
    checkSerialCommands(storage);                         // checks if there are new commands coming from the serial port

}
