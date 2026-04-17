#define LED_PIN A0
#define LANG 1500
#define KORT 200
#define PAUSE 1000
#define MELLEMRUM 4000



void setup() {
  pinMode(LED_PIN,OUTPUT);

}

void loop() {

  //U
  digitalWrite(LED_PIN, HIGH);
  delay(KORT);
  digitalWrite(LED_PIN, LOW);
  delay(PAUSE);
  digitalWrite(LED_PIN, HIGH);
  delay(KORT);
  digitalWrite(LED_PIN, LOW);
  delay(PAUSE);
  digitalWrite(LED_PIN, HIGH);
  delay(LANG);
  digitalWrite(LED_PIN, LOW);
  delay(PAUSE);
  digitalWrite(LED_PIN,HIGH);
  delay(MELLEMRUM);
  digitalWrite(LED_PIN, LOW);
  delay(PAUSE);
//S
digitalWrite(LED_PIN, HIGH);
  delay(KORT);
  digitalWrite(LED_PIN, LOW);
  delay(PAUSE);
  digitalWrite(LED_PIN, HIGH);
  delay(KORT);
  digitalWrite(LED_PIN, LOW);
  delay(PAUSE);
  digitalWrite(LED_PIN, HIGH);
  delay(KORT);
  digitalWrite(LED_PIN, LOW);
  delay(PAUSE);
  digitalWrite(LED_PIN,HIGH);
  delay(MELLEMRUM);
  digitalWrite(LED_PIN, LOW);
  delay(PAUSE);
//A
  digitalWrite(LED_PIN, HIGH);
  delay(KORT);
  digitalWrite(LED_PIN, LOW);
  delay(PAUSE);
  digitalWrite(LED_PIN, HIGH);
  delay(LANG);
  digitalWrite(LED_PIN, LOW);
  delay(PAUSE);
  digitalWrite(LED_PIN,HIGH);
  delay(MELLEMRUM);
  digitalWrite(LED_PIN, LOW);
  delay(PAUSE);
};
