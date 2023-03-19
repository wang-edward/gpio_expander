#include <Arduino.h>
#include <Wire.h>
#include "CAT9555.hpp"



CAT9555 cat000 = CAT9555(0b00100000);
// CAT9555 cat001 = CAT9555(0b00100001);
// CAT9555 cat010 = CAT9555(0b00100010);

// CAT9555 cat010 = CAT9555(0b01000000);


void setup() {
  Serial.begin(9600);

Serial.println(cat9555.address);
  Serial.println(cat000.address);
  // Serial.println(cat001.address);
  // Serial.println(cat010.address);


  Serial.println("1");

  Wire.begin();

  Serial.println("2");
  
  cat000.begin();
  Serial.println("3");

  // cat001.begin();
  
  Serial.println("4");
  // cat010.begin();
  

}


void loop() {

  Serial.println("bro");
  
  // delay(300);


  // Serial.println(cat9555.address);
  // Serial.println(cat000.address);
  // Serial.println(cat001.address);


	uint32_t port0 = cat000.read_8_Register(INPUT_PORT0);
	uint32_t port1 = cat000.read_8_Register(INPUT_PORT1);
  
  // uint32_t port3 = cat001.read_8_Register(INPUT_PORT0);
  // uint32_t port4 = cat001.read_8_Register(INPUT_PORT1);

  // uint32_t port5 = cat010.read_8_Register(INPUT_PORT0);
  // uint32_t port6 = cat010.read_8_Register(INPUT_PORT1);

  Serial.print("port0: ");Serial.println(port0,BIN);
  Serial.print("port1: ");Serial.println(port1,BIN);
  // Serial.print("port3: ");Serial.println(port3,BIN);
  // Serial.print("port4: ");Serial.println(port4,BIN);
  // Serial.print("port5: ");Serial.println(port5,BIN);
  // Serial.print("port6: ");Serial.println(port6,BIN);

  // delay(10);

	// uint32_t port1 = cat9555.read_16_Register(INPUT_PORT1);


  
  // Serial.println(":ASDASD");
  Serial.println("\n\n");

  // for (int i=0;i<16;i++) {
  //   Serial.print(i); Serial.print(":  ");
  //   Serial.println(cat9555.digitalRead(i));
  // // (cat9555.digitalRead(i));

  // }

  // Serial.println("\n\n\n\n");
}