#include "relay.h"

#include <Arduino.h>

// Inicilize relay
void initRelay() {
    pinMode(RELAY_PIN, OUTPUT);  
    digitalWrite(RELAY_PIN, LOW); // Relay off in the beggining
}

// Conditional state
void controlRelay(float temperature, float humidity) {
    if (temperature > 25.0 || humidity > 60.0) {
        digitalWrite(RELAY_PIN, HIGH);  //Relay on if temperature > 25°C or la humidity > 60%
    } else {
        digitalWrite(RELAY_PIN, LOW);   //Relay off if the conditions are lower
    }
}

// Show relay state
bool mostrarEstado() {
    return digitalRead(RELAY_PIN) == HIGH;  // True if relay on, false if relay off
}
