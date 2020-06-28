const int triggerPin = 7;
const int echoPin = 8;
const int led01 = 10;
const int led02 = 9;
const int led03 = 5;
const int led04 = 4;

void setup() {
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led01, OUTPUT);
  pinMode(led02, OUTPUT);
  pinMode(led03, OUTPUT);
  pinMode(led04, OUTPUT);

  Serial.begin(9600);

}

void loop() {
  digitalWrite(led01, LOW);
  digitalWrite(led02, LOW);
  digitalWrite(led03, LOW);
  digitalWrite(led04, LOW);

  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);

  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);

  float duration = pulseIn(echoPin, HIGH);
  float distanceInCentimeters = (duration / 2) * 0.031;

  if (distanceInCentimeters >= 200 || distanceInCentimeters <= 2) {
    Serial.println("Out of range");
  } else {

    if (distanceInCentimeters >= 3 && distanceInCentimeters <= 6) {
      digitalWrite(led01, HIGH);
      Serial.println("LED-01 ON");
    } else if (distanceInCentimeters >= 9 && distanceInCentimeters <= 11) {
      digitalWrite(led02, HIGH);
      Serial.println("LED-02 ON");
    } else if (distanceInCentimeters >= 14 && distanceInCentimeters <= 16) {
      digitalWrite(led03, HIGH);
      Serial.println("LED-03 ON");
    } else if (distanceInCentimeters >= 18 && distanceInCentimeters <= 21) {
      digitalWrite(led04, HIGH);
      Serial.println("LED-04 ON");
    }
    
    Serial.print(distanceInCentimeters);
    Serial.println(" cm");
  }

  delay(500);

}
