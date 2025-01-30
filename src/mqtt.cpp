#include "mqtt.h"
#include <WiFi.h>

#define MQTT_SERVER "127.0.0.1"
#define MQTT_PORT 1883
#define MQTT_USER "smartvent"
#define MQTT_PASSWORD "smartvent"

WiFiClient espClient;
PubSubClient mqttClient(espClient);

void setupMQTT() {
    mqttClient.setServer(MQTT_SERVER, MQTT_PORT);
    mqttClient.setCallback(mqttCallback);
}

void reconnectMQTT() {
    while (!mqttClient.connected()) {
        if (mqttClient.connect("smartvent", MQTT_USER, MQTT_PASSWORD)) {
            mqttClient.subscribe("smartvent/commands");
        } else {
            delay(5000);
        }
    }
}

void mqttCallback(char* topic, byte* payload, unsigned int length) {
    // Handle incoming MQTT messages here
}
