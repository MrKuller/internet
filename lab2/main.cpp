#include <Arduino.h>

const int red = 7;
const int ye = 5;
const int green = 3;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(ye, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  digitalWrite(green, HIGH);
  delay(3000);
  digitalWrite(green, LOW);
  
  for (int i = 0; i < 3; i++){
    digitalWrite(ye, HIGH);
    delay(500);
    digitalWrite(ye, LOW);
    delay(500);
  }

  digitalWrite(red, HIGH);
  delay(3000);
  digitalWrite(red, LOW);
  
  for (int i = 0; i < 3; i++){
    digitalWrite(ye, HIGH);
    delay(500);
    digitalWrite(ye, LOW);
    delay(500);
  }
}