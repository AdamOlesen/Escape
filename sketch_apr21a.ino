#include <SoftwareSerial.h>
#include <Servo.h>

SoftwareSerial radio(A3, -1); // RX, TX

Servo servo1;
Servo servo2;

int posOpen1 = 89;   // justér efter din mekanik
int posClosed1 = 1;

int posOpen2 = 91;   // justér efter din mekanik
int posClosed2 = 179;

void setup() {
  Serial.begin(9600);
  radio.begin(19200);

  servo1.attach(5);  // servo 1 på pin 5
  servo2.attach(6);  // servo 2 på pin 6

  // start lukket
  servo1.write(posClosed1);
  servo2.write(posClosed2);
}

void loop() {
  if (radio.available()) {
    String message = radio.readStringUntil('\n');
    message.trim(); // fjerner \r og mellemrum

    Serial.print("Modtaget: ");
    Serial.println(message);

    if (message == "open") {
      Serial.println("Åbner dør 🚪");

      // bevæg servoer til åben position
      servo1.write(posOpen1);
      servo2.write(posOpen2);

      delay(5000); // døren er åben i 5 sek

      // luk igen
      servo1.write(posClosed1);
      servo2.write(posClosed2);

      Serial.println("Lukker dør");
    }
  }
}