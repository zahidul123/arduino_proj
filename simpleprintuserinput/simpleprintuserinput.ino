
String readString;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("serial delimit test 1.0");

}

void loop() {
  // put your main code here, to run repeatedly:
   if (Serial.available())  {
    char c = Serial.read();  //gets one byte from serial buffer
    if (c == ' ') {
      //do stuff
      Serial.println(readString); //prints string to serial port out
      readString=""; //clears variable for new input      
     }  
    else {   
      if((c>='A'&& c<='Z')|| (c>='a'&& c<='z')) {
      readString += c; //makes the string readString
      }
    }
  }
}
