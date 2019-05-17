// pin for Blue LED
int blueLedPin = 13;

// number of milliseconds the LED will be on for
int onTime = 2000;

// number of milliseconds the LED will be off for
int offTime = 500;

void setup() {
  // setup Blue LED as the output pin
  pinMode (blueLedPin, OUTPUT);
}

void loop() {
  // tun on Blue LED, wait onTime, Turn off Blue LED, wait offTime
  digitalWrite(blueLedPin, HIGH);
  delay(onTime);
  digitalWrite(blueLedPin, LOW);
  delay(offTime);
}
