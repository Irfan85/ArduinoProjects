const int m1I1 = 7;
const int m1I2 = 8;
const int m1Pwm = 9;

void setup() {
  pinMode(m1I1, OUTPUT);
  pinMode(m1I2, OUTPUT);
  pinMode(m1Pwm ,OUTPUT);
}

void loop() {
  digitalWrite(m1I1, HIGH);
  digitalWrite(m1I2, LOW);
  analogWrite(m1Pwm, 100); // Half Speed

  delay(2000);

  digitalWrite(m1I1, LOW);
  digitalWrite(m1I2, LOW);
  analogWrite(m1Pwm, 100);

  delay(1000);
  
  digitalWrite(m1I1, LOW);
  digitalWrite(m1I2, HIGH);
  analogWrite(m1Pwm, 100); 
  
  delay(2000);
}
