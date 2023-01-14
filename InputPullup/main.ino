// C++ code
// input pullup default = 1 
const int button = 10;
boolean buttonState = false;
const int led = 13;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop()
{
  buttonState = digitalRead(button);
  digitalWrite(led, buttonState);
}