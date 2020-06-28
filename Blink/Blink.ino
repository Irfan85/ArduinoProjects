int led1 = 9;
int led2 = 8;
int led3 = 4;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  for(int luminosity = 0; luminosity <= 255; luminosity+=5){
    analogWrite(led1, luminosity);
    delay(30);
  }
  
  for(int luminosity = 255; luminosity >= 0; luminosity-=5){
    analogWrite(led1, luminosity);  
    delay(30);
  }
}
