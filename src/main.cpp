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

void setup(){
  App_setup();
}

void loop(){
  App_loop();
}