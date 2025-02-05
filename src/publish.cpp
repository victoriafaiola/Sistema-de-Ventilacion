#include "publish.h"


void publishTemperature(float temperature) {
    String payload = String(temperature);
    mqttClient.publish("smartvent/temperature", payload.c_str());
}


void publishHumidity(float humidity) {
    String payload = String(humidity);
    mqttClient.publish("smartvent/humidity", payload.c_str());
}


void publishRelayState(bool state) {
    String payload = state ? "ON" : "OFF";
    mqttClient.publish("smartvent/relay", payload.c_str());
}
