int rLedPin = 12;
int bLedPin = 13;
int btn1Pin = 2;
int btn2Pin = 3;

void setup() {
  pinMode(rLedPin, OUTPUT);
  pinMode(bLedPin, OUTPUT);
  pinMode(btn1Pin, INPUT);
  pinMode(btn2Pin, INPUT);
}

void loop() {
  if (digitalRead(btn1Pin) == LOW) {
    digitalWrite(bLedPin, HIGH);
  } else {
    digitalWrite(bLedPin, LOW);
  }

  if (digitalRead(btn2Pin) == LOW) {
    digitalWrite(rLedPin, HIGH);
  } else {
    digitalWrite(rLedPin, LOW);
  }
}
