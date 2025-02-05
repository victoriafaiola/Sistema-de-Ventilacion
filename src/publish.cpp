#include "publish.h"


void publishTemperature(float temperature) {
    String payload = String(temperature);
    //bool publish_state=0;
    //publish_state=mqttClient.publish("smartvent/temperature", payload.c_str());
    if (mqttClient.publish("smartvent/temperature", payload.c_str())){
        Serial.println("Publish successfull");
    }else{
        Serial.println("Publish not successfull");
    }
}

void publishHumidity(float humidity) {
    String payload = String(humidity);
    mqttClient.publish("smartvent/humidity", payload.c_str());
}


void publishRelayState(bool state) {
    String payload = state ? "ON" : "OFF";
    mqttClient.publish("smartvent/relay", payload.c_str());
}
