#include <Arduino.h>
#include "setup.h"
#include "app.h"

// Settings
void setup() {
    setupSystem();
}

// Principal function
void loop() {
    runApp(); 
}