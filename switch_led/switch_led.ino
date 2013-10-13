int ledPin = 13;
int switchPin = 8;
boolean lastBtn = LOW;
boolean ledOn = false;

void setup()
{
  pinMode(switchPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  if (digitalRead(switchPin) == HIGH && lastBtn == LOW)
  {
    ledOn = !ledOn;
    lastBtn = HIGH;
  } else {
    lastBtn = digitalRead(switchPin);
  }
  
  digitalWrite(ledPin, ledOn);
}
