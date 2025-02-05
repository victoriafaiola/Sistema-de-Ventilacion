#include <Arduino.h>
#include "setup.h"
#include "app.h"

// Settings
void setup() {
    setupSystem();
    App_setup();
}

// Principal function
void loop() {
    runApp();
    App_loop();
}
