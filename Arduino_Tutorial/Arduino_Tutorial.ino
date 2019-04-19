#include<SoftwareSerial.h>
SoftwareSerial mySerial(6, 7);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

String string;
String var[10] = "" ;

void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available() != 0) {
    int val = Serial.read() ;
   for(int i=0; i<=10;i++){
      var[i] = char(val);
      Serial.print(var);
  }

  while (mySerial.available() != 0) {
    int val = mySerial.read() ;
    for(int i=0; i<=10;i++){
      var[i] = char(val);
      Serial.print(var);
    }
  }

}
