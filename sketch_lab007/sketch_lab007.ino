int buzzerPin = 5;
int btn1Pin = 2;

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(btn1Pin, INPUT);
}

void loop() {
  if (digitalRead(btn1Pin) == LOW) {
    tone(buzzerPin, 500, 50);
  }
}
