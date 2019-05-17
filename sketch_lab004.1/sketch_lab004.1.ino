// pins for RGB LEDs
int RGBRedPin = 9;
int RGBGreenPin = 10;
int RGBBluePin = 11;

// set wait time between colours
int waitTime = 500;

void setup() {
  // setup RGB LEDs as the output pins
  pinMode(RGBRedPin, OUTPUT);
  pinMode(RGBGreenPin, OUTPUT);
  pinMode(RGBBluePin, OUTPUT);
}

void loop() {
  // raising the brightness of the Blue light
  analogWrite(RGBBluePin, 0);
  delay(waitTime);
  analogWrite(RGBBluePin, 25);
  delay(waitTime);
  analogWrite(RGBBluePin, 50);
  delay(waitTime);
  analogWrite(RGBBluePin, 75);
  delay(waitTime);
  analogWrite(RGBBluePin, 100);
  delay(waitTime);
  analogWrite(RGBBluePin, 125);
  delay(waitTime);
  analogWrite(RGBBluePin, 150);
  delay(waitTime);
  analogWrite(RGBBluePin, 175);
  delay(waitTime);
  analogWrite(RGBBluePin, 200);
  delay(waitTime);
  analogWrite(RGBBluePin, 225);
  delay(waitTime);
  analogWrite(RGBBluePin, 250);
  delay(waitTime);
}
