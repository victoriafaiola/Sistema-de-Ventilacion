#ifndef PUBLISH_H
#define PUBLISH_H

#include "mqtt.h"

void publishTemperature(float temperature);
void publishHumidity(float humidity);
void publishRelayState(bool state);

#endif 