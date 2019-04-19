#include<SoftwareSerial.h>
SoftwareSerial mySerial(6, 7) ;
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
    String x = String(20);
    x = mySerial.read();
    Serial.println(x);
  }
  if (Serial.available()) {
    String y;
    y = mySerial.read();
    Serial.println(y);
  }
}
