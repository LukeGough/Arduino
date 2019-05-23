int probRed = 50;
int rLed = 12;
int bLed = 13;
int btn1 = 2;

void setup() {
  pinMode(rLed, OUTPUT);
  pinMode(bLed, OUTPUT);
  pinMode(btn1, INPUT);
  randomSeed(analogRead(0)); // generate series of random numbers
}

void loop() {
  if (digitalRead(btn1) == LOW) {
    if (random(100) < probRed) {
      digitalWrite(rLed, HIGH);
      delay(500);
      digitalWrite(rLed, LOW);
    } else {
      digitalWrite(bLed, HIGH);
      delay(500);
      digitalWrite(bLed, LOW);
    }
  }
}
