
void setup() 
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println(Pouls_Actuel());
  Serial.println(Delais_Du_Programme());
}
