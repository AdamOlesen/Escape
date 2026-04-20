// Analog pins
const int rotary1 = A0;
const int rotary2 = A1;
const int rotary3 = A2;
const int rotary4 = A3;

// HER SÆTTER I DEN RIGTIGE KODE
int correctCode[4] = { 3, 1, 6, 2 };

void setup() {
  Serial.begin(9600);
}

int readRotary(int pin) {
  int value = analogRead(pin);

  // Del 0-1023 op i 6 intervaller
  int number = map(value, 0, 1023, 1, 6);

  // Sørg for at den altid er mellem 1 og 6
  number = constrain(number, 1, 6);

  return number;
}

void loop() {
  int code[4];

  code[0] = readRotary(rotary1);
  code[1] = readRotary(rotary2);
  code[2] = readRotary(rotary3);
  code[3] = readRotary(rotary4);

  // Print koden
  Serial.print("Kode: ");
  Serial.print(code[0]);
  Serial.print("-");
  Serial.print(code[1]);
  Serial.print("-");
  Serial.print(code[2]);
  Serial.print("-");
  Serial.print(code[3]);

  // Tjek om den er korrekt
  bool correct = true;

  for (int i = 0; i < 4; i++) {
    if (code[i] != correctCode[i]) {
      correct = false;
    }
  }

  if (correct) {
    Serial.println("  -> TRUE");
  } else {
    Serial.println("  -> FALSE");
  }

  delay(500);  // lille pause
}