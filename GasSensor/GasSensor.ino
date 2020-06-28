int gasSensor = A0;
int buzzer = 7;

void setup() {
  pinMode(gasSensor, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int gasValue = analogRead(gasSensor);
  Serial.println(gasValue);
  
  if(gasValue > 200){
    digitalWrite(buzzer, HIGH); 
    delay(1000);  
  }else{
    digitalWrite(buzzer, LOW);  
  }
                                 
}
