#include "storage.h"

Storage::Storage() {
  // Empty constructor, initializacion will take place in begin()
}

void Storage::begin() {
  // opnes the name space "config" in reading & writing mode
  preferences.begin("config", false);
}

String Storage::getSSID() {
  return preferences.getString("ssid", "Emiliano");
}

String Storage::getPassword() {
  return preferences.getString("pass", "acuna1998");
}

String Storage::getBrokerIP() {
  return preferences.getString("broker", "192.168.1.5");
}

void Storage::setSSID(const String &ssid) {
  preferences.putString("ssid", ssid);
}

void Storage::setPassword(const String &password) {
  preferences.putString("pass", password);
}

void Storage::setBrokerIP(const String &ip) {
  preferences.putString("broker", ip);
}

void Storage::end() {
  preferences.end();
}