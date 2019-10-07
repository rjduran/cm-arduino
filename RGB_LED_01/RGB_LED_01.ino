// RGB LED 01
// RJ Duran
// Fade up and and down with Red color

int redPin = 11;    // set pin for red LED
int greenPin = 10;  // set pin for green LED
int bluePin = 9;    // set pin for blue LED

int val;
int delta = 10;
void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}
void loop()
{
  // RED
  // Ramp Up
  for (val = 0; val < 255; val++) {
    analogWrite(redPin, val);
    delay(delta);
    Serial.println(val, DEC);
  }
  // Ramp Down
  for (val = 255; val > 0; val--) {
    analogWrite(redPin, val);
    delay(delta);
    Serial.println(val, DEC);
  }
  delay(2 * delta);
}
