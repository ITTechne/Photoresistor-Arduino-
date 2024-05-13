int Photo = A0;

void setup()
{
  pinMode(Photo, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  //Photoresistor values range between 0 and 1023 
  int Value = analogRead(Photo);  
  Serial.println(Value);
  delay(100);
}