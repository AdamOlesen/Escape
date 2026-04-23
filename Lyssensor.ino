#include <SoftwareSerial.h>

SoftwareSerial mySerial(-1, A3); // RX, TX

int light_sensor = A1;

void setup() {
  Serial.begin(9600);      // til debug i Serial Monitor
  mySerial.begin(19200);      // EasyRadio
}

void loop() {
  int raw_light = analogRead(light_sensor);
  int light = map(raw_light, 0, 1023, 0, 100);

  Serial.println(light);

  if (light > 70) {
    mySerial.println("open"); // send via EasyRadio
    Serial.println("Open er sendt");
  }

  delay(1000);
}