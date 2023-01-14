

#include <Servo.h>

Servo myServo;

const int servoPin = 9;
const int potPin = A0;

int angle = 0;
int reading = 0;

void setup()
{
  myServo.attach(servoPin);
}

void loop()
{
  reading = analogRead(potPin);
  angle = map(reading, 0, 1023, 0, 180);
  myServo.write(angle);
  delay(1);
}