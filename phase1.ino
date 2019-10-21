int sensorPin=A0;

int sensorValue = 0;
void setup()
{
  pinMode(5,INPUT);
  Serial.begin(9600);
}
void loop()
{
sensorValue = analogRead(sensorPin);
  if(digitalRead(5)==HIGH)
  {
    Serial.println(sensorValue);
    delay(1000);
  }
}