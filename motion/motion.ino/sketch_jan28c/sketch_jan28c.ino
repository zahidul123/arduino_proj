
int ledpin=13;
int sensorpin=2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
  pinMode(sensorpin, INPUT);
 digitalWrite(sensorpin,LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
  //i rmodule 

while(digitalRead(sensorpin)==HIGH){
digitalWrite(ledpin, HIGH);
Serial.println("it is on");
delay(600);
}
if(digitalRead(sensorpin)==LOW){
digitalWrite(ledpin,LOW);
Serial.println("it is off");
delay(600);
}
}
