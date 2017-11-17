int pinLed[10] = {2,3,4,5,6,7,8,9,10,11};
void setup() {
  // put your setup code here, to run once:
  for(int i=0; i<11;i++)
  {
  pinMode(pinLed[i], OUTPUT);
  digitalWrite(pinLed[i], LOW);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  int r = rand()%150-40;
  int t = rand()%1500;
  for(int i=0; i<11; i++)
  {
    digitalWrite(pinLed[i], HIGH);
  }
  delay(100);
  for(int i=0; i<11; i++)
  {
    digitalWrite(pinLed[i], LOW);
  }
  delay(r);
  for(int i=0; i<11; i++)
  {
    digitalWrite(pinLed[i], HIGH);
  }
  delay(100);
  for(int i=0; i<11; i++)
  {
    digitalWrite(pinLed[i], LOW);
  }
  delay(t);
}
