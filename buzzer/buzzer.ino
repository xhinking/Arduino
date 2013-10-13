int buzzer = 7;

void setup()
{
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  unsigned char i, j;
  while(1)
  {
    for(i=0;i<10;i++)
    {
      digitalWrite(buzzer, HIGH);
      delay(10);
      digitalWrite(buzzer, LOW);
      delay(10);
    }
    for(j=0;j<15;j++)
    {
      digitalWrite(buzzer,HIGH);
      delay(20);
      digitalWrite(buzzer, LOW);
      delay(20);
    }
  }
}
