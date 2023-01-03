// C++ code
//
const int ledPin = 13;
const int button = 7;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(button, INPUT);
}

void loop()
{
  if(digitalRead(button) == HIGH) {
  	digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
  }
}