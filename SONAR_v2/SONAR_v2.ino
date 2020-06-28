const int triggerPin = 7;
const int echoPin = 8;
const int buzzer = 4;

int loopDelay = 200;

void setup() {
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);

}

void loop() {
  digitalWrite(buzzer, LOW);

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

    if (distanceInCentimeters < 10 && distanceInCentimeters > 5) {
      digitalWrite(buzzer, HIGH);
      delay(500);
      digitalWrite(buzzer, LOW);

      loopDelay = 300;

      Serial.println("CAUTION");
    } else if (distanceInCentimeters < 5) {
      digitalWrite(buzzer, HIGH);
      delay(30);
      digitalWrite(buzzer, LOW);

      loopDelay = 100;

      Serial.println("WARNING!");
    }else{
      loopDelay = 200;  
    }

    Serial.print(distanceInCentimeters);
    Serial.println(" cm");
  }

  delay(loopDelay);

}
