#include<Servo.h>

const int potentiometer = A0;
Servo myServo;

void setup() {
  myServo.attach(9);
  pinMode(potentiometer, INPUT);
  Serial.begin(9600);
}

void loop() {
  int pMeterValue = analogRead(potentiometer);
  int angle = map(pMeterValue, 0, 1023, 0, 180);
  myServo.write(angle);

  Serial.println(angle);
  delay(500);
}
