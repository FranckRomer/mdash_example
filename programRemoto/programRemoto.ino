// Minimal Arduino sketch for mdash.net
//
// - Install mDash library:
//   - Select "Sketch" &rarr; "Include Library" &rarr; "Manage Libraries"
//   - In the search field, type "mDash" and press Enter
//   - Click on "Install" to install the library
// - Select "Tools" → "Board" → "ESP32 Dev Module"
// - Select "Tools" → "Partitioning Scheme" → "Minimal SPIFFS"
// - Select "Tools" → "Port" → your serial port
// - Click on "Upload" button to build and flash the firmware
//
// See https://mdash.net/docs/ for the full IoT product reference impementation

#define MDASH_APP_NAME "MinimalApp"
#include <mDash.h>

#include <WiFi.h>

//const char* ssid = "RED ACCESA";
//const char* password = "037E32E7";
#define WIFI_NETWORK "RED ACCESA"
#define WIFI_PASSWORD "037E32E7"
#define DEVICE_PASSWORD "lqMndS91xeHXjS6xtoIVJCQ"

void setup() {
  Serial.begin(115200);
  WiFi.begin(WIFI_NETWORK, WIFI_PASSWORD);
  mDashBegin(DEVICE_PASSWORD);
}

void loop() {
  delay(100);
}
