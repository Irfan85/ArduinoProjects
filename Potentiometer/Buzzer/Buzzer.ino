const int buzzer = 9;
const int potentiometer = A0;

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(potentiometer, INPUT);
  Serial.begin(9600);
}

void loop() {
  int pMeterValue = analogRead(potentiometer);
  int timeDelta = map(pMeterValue, 0, 1024, 100, 1000);
  Serial.println(timeDelta);

  analogWrite(buzzer, 100);
  delay(timeDelta);
  analogWrite(buzzer, 0);
  delay(timeDelta);
}
