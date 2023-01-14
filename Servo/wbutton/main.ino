

#include <Servo.h>

Servo myServo;

const int servoPin = 9;
const int button = 13;

int angle = 0;


void setup()
{
  pinMode(button, INPUT);
  myServo.attach(servoPin);
}

void loop()
{
  while(digitalRead(button) == HIGH && angle < 180) {
  	angle++;
    myServo.write(angle);
  }
}