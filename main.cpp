#include <Arduino.h>

const int red = 3;
const int ye = 5;
const int green = 7;
const int butt = 1;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(ye, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(butt, INPUT_PULLUP);
}

void loop() {
  digitalWrite(red, HIGH);

  if (digitalRead(butt) == LOW){
    delay(50);

    for (int i = 0; i < 3; i++){
      digitalWrite(ye, HIGH);
      delay(500);
      digitalWrite(ye, LOW);
      delay(500);
    }

    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    delay(3000);

    for (int i = 0; i < 3; i++){
      digitalWrite(ye, HIGH);
      delay(500);
      digitalWrite(ye, LOW);
      delay(500);
    }
    digitalWrite(green, LOW);
  }
}