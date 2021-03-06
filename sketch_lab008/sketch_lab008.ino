int rLedPin = 12;
int bLedPin = 13;
int btn1Pin = 2;
int btn2Pin = 3;
int waitTime = 500;
int buzzerPin = 5;

void setup() {
  pinMode(rLedPin, OUTPUT);
  pinMode(bLedPin, OUTPUT);
  pinMode(btn1Pin, INPUT);
  pinMode(btn2Pin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  if (digitalRead(btn1Pin) == LOW) {
    digitalWrite(bLedPin, HIGH);
    tone(buzzerPin, 500, 50);
    delay(waitTime);
    tone(buzzerPin, 1000, 100);
  } else {
    digitalWrite(bLedPin, LOW);
  }

  if (digitalRead(btn2Pin) == LOW) {
    digitalWrite(rLedPin, HIGH);
    tone(buzzerPin, 500, 50);
    delay(waitTime);
    tone(buzzerPin, 1000, 100);
  } else {
    digitalWrite(rLedPin, LOW);
  }
}
