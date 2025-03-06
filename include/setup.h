#ifndef SETUP_H
#define SETUP_H

#include <Arduino.h>
#include "sensor.h"
#include "oled.h"
#include "relay.h"
#include "wificonnection.h"
#include "publish.h"
#include "mqtt.h"
#include "commands.h"
#include "storage.h"

//--Prototypes
// Inicialize system
void setupSystem();

#endif