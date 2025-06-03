#include <SPI.h>

unsigned char ssd[16]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F,
                      0x77,0x7C,0x39,0x5E,0x79,0x71};
                      
unsigned char msg1[10]={0x08,0x08,0x76,0x79,0x38,0x38,0x5C,0x08,0x08,0x08};
void setup() {
  // put your setup code here, to run once:
  SPI.begin();
  pinMode(10,OUTPUT);

  
}

void loop() {
  // put your main code here, to run repeatedly:
  /*
 digitalWrite(10,LOW);
 
  for(int i=9;i>=0;i--)
    SPI.transfer(ssd[i]);
  digitalWrite(10,HIGH); 
  delay(5000);

  digitalWrite(10,LOW);
 
  for(int i=15;i>=10;i--)
    SPI.transfer(ssd[i]);
  digitalWrite(10,HIGH); 
  delay(5000);
  */
   for(int i=9;i>=0;i--){
   digitalWrite(10,LOW);
  
  SPI.transfer(msg1[i]);
  delay(1000);
  digitalWrite(10,HIGH); 
   }
}
