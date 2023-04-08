#include <Arduino.h>
#include <Wire.h>
#include "CAT9555.hpp"



CAT9555 cat0 = CAT9555(0b00100000);
CAT9555 cat1 = CAT9555(0b00100001);
CAT9555 cat2 = CAT9555(0b00100010);

void setup() {
  Serial.begin(9600);
  Wire.begin();
  
  cat0.begin();
  cat1.begin();
  cat2.begin();
}


void loop() {
	uint32_t c0port0 = cat0.read_8_Register(INPUT_PORT0);
	uint32_t c0port1 = cat0.read_8_Register(INPUT_PORT1);
  
	uint32_t c1port0 = cat1.read_8_Register(INPUT_PORT0);
	uint32_t c1port1 = cat1.read_8_Register(INPUT_PORT1);

	uint32_t c2port0 = cat2.read_8_Register(INPUT_PORT0);
	uint32_t c2port1 = cat2.read_8_Register(INPUT_PORT1);

  Serial.print("cat0: "); Serial.print(c0port0,BIN); Serial.println(c0port1,BIN);
  Serial.print("cat1: "); Serial.print(c1port0,BIN); Serial.println(c1port1,BIN);
  Serial.print("cat2: "); Serial.print(c2port0,BIN); Serial.println(c2port1,BIN);

  Serial.println("\n\n");
  delay(1000);
}