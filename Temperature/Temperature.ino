int tempSensor = A0;

void setup() {
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {
  int temp = analogRead(tempSensor);
  float mv = (temp/1024.0)*5000;
  float cel = mv/10;
  float farh = (cel*9)/5;
  Serial.print("TEMPERATURE:");
  Serial.print(cel);
  Serial.println("C");
  delay(500);
}
