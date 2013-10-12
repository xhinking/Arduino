const int led1 = 3;
const int led2 = 4;
const int led3 = 5;

const int switchPin = 2;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
 
  pinMode(switchPin, INPUT);
}

void loop() {
  int switchState;
 
  switchState = digitalRead(switchPin);
 
  if(switchState == HIGH) {
    digitalWrite(led1, LOW);
  
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
  
    delay(250);
  
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
  
    delay(150);
  } else {
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  
    digitalWrite(led1, HIGH);
  }
}
