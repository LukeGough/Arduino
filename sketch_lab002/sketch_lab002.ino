// pin for Blue LED
int blueLedPin = 13;
int redLedPin = 12;

// number of milliseconds the LED will be on for
int onTime = 250;

// number of milliseconds the LED will be off for
int offTime = 125;

void setup() {
  // setup Blue LED as the output pin
  pinMode (blueLedPin, OUTPUT);
  pinMode (redLedPin, OUTPUT);
}

void loop() {
  // tun on Blue LED, wait onTime, Turn off Blue LED, wait offTime
  digitalWrite(blueLedPin, HIGH);
  digitalWrite(redLedPin, HIGH);
  delay(onTime);
  digitalWrite(blueLedPin, LOW);
  digitalWrite(redLedPin, LOW);
  delay(offTime);

}
