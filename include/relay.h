#ifndef RELAY_H
#define RELAY_H

#include <Arduino.h>

//Relay pin 
#define RELAY_PIN         13

// Inicilize relay
void initRelay();

// Control functions
void controlRelay(float temperature, float humidity);
bool mostrarEstado();

#endif