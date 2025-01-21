#ifndef SENSOR_H
#define SENSOR_H

#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>
#include "config.h"

// Inicilize sensor DHT11
void initSensor();

// Read temperature in Celsius
float readTemperature();

// Read humidity in percent
float readHumidity();

#endif