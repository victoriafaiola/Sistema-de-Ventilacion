#ifndef WIFICONNECTION_H
#define WIFICONNECTION_H

//--Includes
#include "persist.h"
#include <Wifi.h>

void initWiFi();
bool isWiFiConnected();
void handleWiFiConnection();

#endif 