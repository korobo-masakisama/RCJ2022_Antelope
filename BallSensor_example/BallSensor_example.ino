#include "BallSensor.h"
#define BALL_CATCH_OUTPUT 26

BallSensor BS;

void setup() {
  Serial.begin(9600);
  pinMode(BALL_CATCH_OUTPUT, OUTPUT);
}

void loop() {
  bool bs = false;
  digitalWrite(BALL_CATCH_OUTPUT, 1);
  bs = BS.getHold();
  Serial.print("ボールセンサ: ");  Serial.println(bs);
}
