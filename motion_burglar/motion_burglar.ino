void setup() {
  // put your setup code here, to run once:
  pinMode(5,INPUT);
  pinMode(12,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(5)==HIGH){
   // tone(12,400);
   // delay(300);
  //  noTone(12);
  //  delay(300);
  // tone(12, 400);
  // delay(300);
  digitalWrite(12,HIGH);
  delay(1000);
  }else{
   // noTone(12);
   digitalWrite(12,LOW);
   delay(500);
  }

}
