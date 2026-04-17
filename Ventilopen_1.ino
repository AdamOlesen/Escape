const int receiverPin = A2;
const int ledPin = A0;

void setup() {
  pinMode(receiverPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int signal = digitalRead(receiverPin);
  if(signal == HIGH){
    digitalWrite(ledPin, HIGH); // åben vand
  } else {
    digitalWrite(ledPin, LOW);  // luk vand
  }
}