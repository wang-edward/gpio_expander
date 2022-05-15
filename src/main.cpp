#include <Arduino.h>
#include <Wire.h>
#include "CAT9555.hpp"

void setup() {
  Wire.begin();
  Serial.begin(9600);
  cat9555.begin();
}


void loop() {
  delay(500);

  for (int i=0;i<16;i++) {
    Serial.print(i); Serial.print(":  ");
    // Serial.println(cat9555.digitalRead(i));
  (cat9555.digitalRead(i));

  }

  // Serial.println("\n\n\n\n");
}