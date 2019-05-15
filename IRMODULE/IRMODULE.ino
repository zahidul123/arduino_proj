/*this programm is show ir module work
 * it work by distance
 * some example is remote
 */

int ledpin = 13;
int sensopin = 7;
int statusin = HIGH;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin, OUTPUT);
  pinMode(sensopin, INPUT);
 // digitalWrite(sensopin,LOW);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  statusin=digitalRead(sensopin);
   if(statusin==1){
         Serial.println("OBSTACLE!!, OBSTACLE!!");
         digitalWrite(ledpin,LOW);
   }else {
         Serial.println("clear");
         digitalWrite(ledpin, HIGH);
         delay(100);
     }

 /*if(digitalRead(sensopin) == HIGH) {
    digitalWrite(ledpin, HIGH);
    Serial.println("it is on");
    delay(600);
  }
  if (digitalRead(sensopin) == LOW) {
    digitalWrite(ledpin, LOW);
    Serial.println("it is off");
    delay(600);
  }
*/

}
