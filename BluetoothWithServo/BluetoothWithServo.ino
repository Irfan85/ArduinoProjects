#include<Servo.h>

Servo myServo;
int servoState = 0;
char data = 0;

void setup() {
  myServo.attach(9);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available() > 0){
    data = Serial.read();
    moveServo(data);
    Serial.println(data);
  }
}

void moveServo(int direction){
  if (servoState < 180 && servoState > 0){
    if(direction == '1'){
      servoState += 30;
      myServo.write(servoState);
    }else if(direction == '0'){
      servoState -= 30;
      myServo.write(servoState);
    }
  }else if(servoState == 0){
    if(direction == '1'){
      servoState += 30;
      myServo.write(servoState);
    }
  }else if(servoState == 180){
    if(direction == '0'){
      servoState -= 30;
      myServo.write(servoState);
    }
  }
}
