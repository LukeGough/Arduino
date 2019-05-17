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
  //Display Red
  digitalWrite(RGBRedPin, HIGH);
  delay(waitTime);
  digitalWrite(RGBRedPin, LOW);


  // Display Green
  digitalWrite(RGBGreenPin, HIGH);
  delay(waitTime);
  digitalWrite(RGBGreenPin, LOW);

  // Display Blue
  digitalWrite(RGBBluePin, HIGH);
  delay(waitTime);
  digitalWrite(RGBBluePin, LOW);

  // Display Magenta (Red + Blue)
  digitalWrite(RGBRedPin, HIGH);
  digitalWrite(RGBBluePin, HIGH);
  delay(waitTime);
  digitalWrite(RGBRedPin, LOW);
  digitalWrite(RGBBluePin, LOW);

  // Display Yellow (Red + Green)
  digitalWrite(RGBRedPin, HIGH);
  digitalWrite(RGBGreenPin, HIGH);
  delay(waitTime);
  digitalWrite(RGBRedPin, LOW);
  digitalWrite(RGBGreenPin, LOW);

  // Display Cyan (Green + Blue)
  digitalWrite(RGBGreenPin, HIGH);
  digitalWrite(RGBBluePin, HIGH);
  delay(waitTime);
  digitalWrite(RGBGreenPin, LOW);
  digitalWrite(RGBBluePin, LOW);

  // Display White (Red + Green + Blue)
  digitalWrite(RGBRedPin, HIGH);
  digitalWrite(RGBGreenPin, HIGH);
  digitalWrite(RGBBluePin, HIGH);
  delay(waitTime);
  digitalWrite(RGBRedPin, LOW);
  digitalWrite(RGBGreenPin, LOW);
  digitalWrite(RGBBluePin, LOW);
}
