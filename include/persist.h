#ifndef PERSIST_H
#define PERSIST_H

#include <Preferences.h>
#include "config.h"
#include "functions.h"

//--Variables default values
#define DEFAULT_IRR_HOUR    22
#define DEFAULT_IRR_MINUTE  00
#define DEFAULT_IRR_TIME    10
#define WIFI_SSID        "Emiliano"
#define WIFI_PASSWORD   "acuna1998"

void save_config(uint8_t name);
void load_config(void);

#endif
