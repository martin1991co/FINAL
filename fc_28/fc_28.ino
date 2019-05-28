const int sensorPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop()
{
  int a = 0;
  delay(1000);
  int humedad = analogRead(sensorPin);
  a = map(humedad, 0, 1023, 100, 0);
  Serial.println(a);

}
