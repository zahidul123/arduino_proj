const int ledPin= 13;
const int inputPin= 2;

void setup(){
pinMode(ledPin, OUTPUT);
pinMode(inputPin, INPUT);
}

void loop(){
 Serial.begin (9600);
 

if (digitalRead(inputPin) == HIGH)
{
digitalWrite(ledPin, HIGH);
delay(100);
digitalWrite(ledPin, LOW);
}
else
{
digitalWrite(ledPin, LOW);
}
}
