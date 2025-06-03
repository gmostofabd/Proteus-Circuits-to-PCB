#include <SPI.h>


void setup() {
  // put your setup code here, to run once:
  SPI.begin();
  pinMode(10,OUTPUT);

   
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(10,LOW);
  SPI.transfer(0x3F);
  SPI.transfer(0x06);
  SPI.transfer(0x5B);
  SPI.transfer(0x4F);
  SPI.transfer(0x6D);
  SPI.transfer(0x7D);
  SPI.transfer(0x07);
  SPI.transfer(0x7F);
  digitalWrite(10,HIGH);
  delay(3000);
}
