int ldr = A0;

void setup() {
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(ldr);
  Serial.println(value);
  delay(500);
}
