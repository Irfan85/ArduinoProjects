const int led01 = 2;
const int led02 = 4;
const int led03 = 7;
const int led04 = 8;

const int potentiometer = A0;

void setup() {
  pinMode(led01, OUTPUT);
  pinMode(led02, OUTPUT);
  pinMode(led03, OUTPUT);
  pinMode(led04, OUTPUT);
  pinMode(potentiometer, INPUT);
  Serial.begin(9600);
}

void loop() {
  int pMeterValue = analogRead(potentiometer);
  int timeDelta = map(pMeterValue, 0, 1024, 100, 1000);
  Serial.println(timeDelta);

  digitalWrite(led01, HIGH);
  delay(timeDelta);
  digitalWrite(led01, LOW);
  delay(timeDelta);

  digitalWrite(led02, HIGH);
  delay(timeDelta);
  digitalWrite(led02, LOW);
  delay(timeDelta);

  digitalWrite(led03, HIGH);
  delay(timeDelta);
  digitalWrite(led03, LOW);
  delay(timeDelta);

  digitalWrite(led04, HIGH);
  delay(timeDelta);
  digitalWrite(led04, LOW);
  delay(timeDelta);
}
