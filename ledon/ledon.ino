void setup()
{
  pinMode(11, OUTPUT);
}

void loop()
{
   analogWrite(11, 0);
  delay(1000); // Wait for 1000 millisecond(s)
  analogWrite(11, 1000);
  delay(1000); // Wait for 1000 millisecond(s)
  analogWrite(11, 100);
  delay(1000); // Wait for 1000 millisecond(s)
  analogWrite(11, 500);
  delay(1000); // Wait for 1000 millisecond(s)
  analogWrite(11, 1023);
  delay(1000); // Wait for 1000 millisecond(s)
}
