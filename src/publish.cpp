#include "publish.h"


void publishTemperature(float temperature) {
    String payload = String(temperature);
    if (mqttClient.publish("smartvent/temperature", payload.c_str())){
        Serial.println("Publish temperature successfull");
    }else{
        Serial.println("Publish temperature not successfull");
    }
}

void publishHumidity(float humidity) {
    String payload = String(humidity);
    if (mqttClient.publish("smartvent/humidity", payload.c_str())){
        Serial.println("Publish humidity successfull");
    }else{
        Serial.println("Publish humidity not successfull");
    }
}


void publishRelayState(bool state) {
    String payload = state ? "ON" : "OFF";
    if (mqttClient.publish("smartvent/relay", payload.c_str())){
        Serial.println("Publish relay successfull");
    }else{
        Serial.println("Publish relay not successfull");
    }
}
