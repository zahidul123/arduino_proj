
float temp;
int tempPin = A2;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  temp = analogRead(tempPin);

temp = temp * 0.48828125;

Serial.print("TEMPRATURE = ");

Serial.print(temp);

Serial.print("*C");

Serial.println();

delay(1000); 

}
