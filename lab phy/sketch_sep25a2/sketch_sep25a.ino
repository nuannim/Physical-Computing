void setup() {
  pinMode(13, OUTPUT);    // sets the digital pin 13 as output
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH); // sets the digital pin 13 on
  digitalWrite(12, LOW);
  digitalWrite(8, LOW);
  delay(1000);            // waits for a second
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  digitalWrite(8, HIGH);  // sets the digital pin 13 off
  delay(1000);            // waits for a second
}