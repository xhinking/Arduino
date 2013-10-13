int led1 = 1;
int led2 = 2;
int led3 = 3;

void setup(){
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop(){
  unsigned char j; 
  for(j=1;j<=3;j++)
  {
    digitalWrite(j,HIGH); 
    delay(200);
  }
  for(j=1;j<=3;j++)
  {
    digitalWrite(j,LOW); 
    delay(200);
  }
}
