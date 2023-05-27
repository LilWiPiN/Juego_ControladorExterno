#include "stdio.h"

int buttonUPstate = 0;
int buttonLEFTstate = 0;
int buttonDOWNstate = 0;
int buttonRIGHTstate = 0;

int buttonBstate = 0;
int buttonNstate = 0;
int buttonMstate = 0;

int buttonSTARTstate = 0;

void setup() {
  Serial.begin(115200);

  pinMode(13, INPUT);
  pinMode(12, INPUT);
  pinMode(11, INPUT);
  pinMode(10, INPUT);
  
  pinMode(9, INPUT);
  pinMode(8, INPUT);
  pinMode(7, INPUT);
  
  pinMode(6, INPUT);
}

void loop() {
  buttonUPstate = digitalRead(13);
  buttonLEFTstate = digitalRead(12);
  buttonDOWNstate = digitalRead(11);
  buttonRIGHTstate = digitalRead(10);
  
  buttonBstate = digitalRead(9);
  buttonNstate = digitalRead(8);
  buttonMstate = digitalRead(7);
  
  buttonSTARTstate = digitalRead(6);

  Serial.write(0xff);
  Serial.write(buttonUPstate);
  Serial.write(0x0d);
  Serial.write(0x0a);

  Serial.write(0xff);
  Serial.write(buttonLEFTstate);
  Serial.write(0x0d);
  Serial.write(0x0a);

  Serial.write(0xff);
  Serial.write(buttonDOWNstate);
  Serial.write(0x0d);
  Serial.write(0x0a);

  Serial.write(0xff);
  Serial.write(buttonRIGHTstate);
  Serial.write(0x0d);
  Serial.write(0x0a);

  Serial.write(0xff);
  Serial.write(buttonBstate);
  Serial.write(0x0d);
  Serial.write(0x0a);

  Serial.write(0xff);
  Serial.write(buttonNstate);
  Serial.write(0x0d);
  Serial.write(0x0a);

  Serial.write(0xff);
  Serial.write(buttonMstate);
  Serial.write(0x0d);
  Serial.write(0x0a);

  Serial.write(0xff);
  Serial.write(buttonSTARTstate);
  Serial.write(0x0d);
  Serial.write(0x0a);
  delay(200);
}
