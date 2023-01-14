// C++ code
// no need to if else
// INPUT pinMode
const int button = 10;
boolean buttonState = false;
const int led = 13;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}

void loop()
{
  buttonState = digitalRead(button);
  digitalWrite(led, buttonState);
}