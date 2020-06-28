#include<Servo.h>

const int proximitySensor = 8;
Servo servo01;

void setup() {
  servo01.attach(9);
  pinMode(proximitySensor, INPUT);

  Serial.begin(9600);
}

void loop() {
  int value = digitalRead(proximitySensor);
  Serial.println(value);

  if (value == 0) {
    servo01.write(180);
  } else {
    servo01.write(0);
  }

  delay(500);
}
