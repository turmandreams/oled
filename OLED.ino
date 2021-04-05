#include <Wire.h>
#include "OLED.h"

OLED display(D4, D5);

void setup() {

  pinMode(D2, OUTPUT);
  digitalWrite(D2, LOW); // turn D2 low to reset OLED
  delay(50);
  digitalWrite(D2, HIGH); // while OLED is running, must set D2 in high
  Serial.begin(115200);
  
  // Initialize display
  display.begin();
  // Test message
  display.print("Turman 3D Printer !!");
  display.on();
  
}

void loop() {
  
}
