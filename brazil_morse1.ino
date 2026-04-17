#define VALVE_PIN A1

void setup() {
  pinMode(VALVE_PIN, OUTPUT);
}

void loop() {

  //B
  digitalWrite(VALVE_PIN, HIGH);
  delay(1500);
  digitalWrite(VALVE_PIN, LOW);
  delay(1000);
   digitalWrite(VALVE_PIN, HIGH);
  delay(200);
  digitalWrite(VALVE_PIN, LOW);
  delay(1000);
   digitalWrite(VALVE_PIN, HIGH);
  delay(200);
  digitalWrite(VALVE_PIN, LOW);
  delay(1000);
   digitalWrite(VALVE_PIN, HIGH);
  delay(200);
  digitalWrite(VALVE_PIN, LOW);
  delay(4000);
  //R
   digitalWrite(VALVE_PIN, HIGH);
  delay(200);
  digitalWrite(VALVE_PIN, LOW);
  delay(1000);
   digitalWrite(VALVE_PIN, HIGH);
  delay(1500);
  digitalWrite(VALVE_PIN, LOW);
  delay(1000);
  digitalWrite(VALVE_PIN, HIGH);
  delay(200);
  digitalWrite(VALVE_PIN, LOW);
  delay(4000);

// A
  digitalWrite(VALVE_PIN, HIGH);
  delay(200);
  digitalWrite(VALVE_PIN, LOW);
  delay(1000);
  digitalWrite(VALVE_PIN, HIGH);
  delay(1500);
  digitalWrite(VALVE_PIN, LOW);
  delay(4000);

 //Z
  digitalWrite(VALVE_PIN, HIGH);
  delay(1500);
  digitalWrite(VALVE_PIN, LOW);
  delay(1000);
  digitalWrite(VALVE_PIN, HIGH);
  delay(1500);
  digitalWrite(VALVE_PIN, LOW);
  delay(1000);
  digitalWrite(VALVE_PIN, HIGH);
  delay(200);
  digitalWrite(VALVE_PIN, LOW);
  delay(1000);
  digitalWrite(VALVE_PIN, HIGH);
  delay(200);
  digitalWrite(VALVE_PIN, LOW);
  delay(4000);
//I
digitalWrite(VALVE_PIN, HIGH);
  delay(200);
  digitalWrite(VALVE_PIN, LOW);
  delay(1000);
  digitalWrite(VALVE_PIN, HIGH);
  delay(200);
  digitalWrite(VALVE_PIN, LOW);
  delay(4000);

  //L
  digitalWrite(VALVE_PIN, HIGH);
  delay(200);
  digitalWrite(VALVE_PIN, LOW);
  delay(1000);
  digitalWrite(VALVE_PIN, HIGH);
  delay(1500);
  digitalWrite(VALVE_PIN, LOW);
  delay(1000);
  digitalWrite(VALVE_PIN, HIGH);
  delay(200);
  digitalWrite(VALVE_PIN, LOW);
  delay(1000);
  digitalWrite(VALVE_PIN, HIGH);
  delay(200);
  digitalWrite(VALVE_PIN, LOW);
  delay(4000);
}