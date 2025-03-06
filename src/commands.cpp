#include "commands.h"

void checkSerialCommands(Storage &storage) {
  if (Serial.available() > 0) {
    // reads the whole last line and erases blank spaces
    String command = Serial.readStringUntil('\n');
    command.trim();

    if (command.startsWith("S=")) {
      // refreshes SSID
      String newSSID = command.substring(2);
      storage.setSSID(newSSID);
      Serial.print("New SSID: ");
      Serial.println(newSSID);
    } 
    else if (command.startsWith("P=")) {
      // refreshes password
      String newPass = command.substring(2);
      storage.setPassword(newPass);
      Serial.print("New password: ");
      Serial.println(newPass);
    } 
    else if (command.startsWith("B=")) {
      // refreshes broker IP
      String newBroker = command.substring(2);
      storage.setBrokerIP(newBroker);
      Serial.print("New broker IP: ");
      Serial.println(newBroker);
    } 
    else if (command.equalsIgnoreCase("show")) {
      // shows actual configuration
      Serial.print("SSID: ");
      Serial.println(storage.getSSID());
      Serial.print("Password: ");
      Serial.println(storage.getPassword());
      Serial.print("Broker IP: ");
      Serial.println(storage.getBrokerIP());
    } 
    else {
      Serial.println("Comando desconocido");
      Serial.println("Use:");
      Serial.println("  S=<value> for SSID");
      Serial.println("  P=<value> for password");
      Serial.println("  B=<value> for broker IP");
      Serial.println("  show new configuration");
    }
  }
}