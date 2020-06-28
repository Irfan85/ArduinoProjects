int testPin = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(testPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(testPin,HIGH);
  delay(1000);
  digitalWrite(testPin,LOW);
  delay(1000);
}
