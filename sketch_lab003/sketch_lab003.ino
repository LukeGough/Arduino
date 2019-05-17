// pin for Blue LED
int blueLedPin = 13;
int redLedPin = 12;

// number of milliseconds the LED will be on for
int onTime = 500;

// number of milliseconds the LED will be off for
int offTime = 500;

void setup() {
  // setup Blue LED as the output pin
  pinMode (blueLedPin, OUTPUT);
  pinMode (redLedPin, OUTPUT);
}

void loop() {
  // tun on Blue LED, wait onTime, Turn off Blue LED, wait offTime
  digitalWrite(blueLedPin, HIGH);
  digitalWrite(redLedPin, LOW);
  delay(onTime);
  digitalWrite(blueLedPin, LOW);
  digitalWrite(redLedPin, HIGH);
  delay(offTime);

}
