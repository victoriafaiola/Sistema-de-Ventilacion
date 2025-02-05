#include "sensor.h"
#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>

#define DHT_PIN 15
#define DHT_TYPE DHT11

DHT dht(DHT_PIN, DHT_TYPE);

// Inicialize DHT11
void initSensor() {
    Serial.println("Init sensor");
    dht.begin();
}

// Read temperature
float readTemperature() {
    return dht.readTemperature();
}

// Read humidity
float readHumidity() {
    return dht.readHumidity();
}
