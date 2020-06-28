const int proximitySensor = 8;

void setup() {
  pinMode(proximitySensor, INPUT);
  Serial.begin(9600);
}

void loop() {
  int value = digitalRead(proximitySensor);
  Serial.println(value);
  delay(500);
}
