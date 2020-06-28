const int potentiometer = A0;
const int led = 9;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int pMeterValue = analogRead(potentiometer);
  int output = map(pMeterValue, 0, 1023, 0, 255);
  analogWrite(led, output);
  //delay(500);
  //analogWrite(led, 0);
  //delay(500);
  
  Serial.println(output);
}
