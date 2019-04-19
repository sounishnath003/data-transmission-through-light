#include<SoftwareSerial.h>
SoftwareSerial mySerial(6, 7) ;

int x ;
void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600) ;
  Serial.println("printing...Serial..") ;

  mySerial.begin(9600) ;
  mySerial.println("printing mySerial...");
}

void loop() {
  // put your main code here, to run repeatedly:
  if (mySerial.available()) {
    Serial.write(mySerial.read());
  }

  if (Serial.available()) {
    mySerial.write(Serial.read());
  }
}
