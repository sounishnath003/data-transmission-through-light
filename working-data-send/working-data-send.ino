#include<SoftwareSerial.h>
SoftwareSerial mySerial(6, 7);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

String string;

void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available() != 0) {
    int val = Serial.read() ;
    string = char(val);
    mySerial.print(string);
    Serial.print(string);
  }

  while (mySerial.available() != 0) {
    int val = mySerial.read() ;
    string = char(val);
    Serial.print(string);
    mySerial.print(string);
  }

}
