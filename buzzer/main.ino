// C++ code
//
const int buzzer = 11;

void setup()
{
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  analogWrite(buzzer, 255);
  delay(2000);
  analogWrite(buzzer, 120);
  delay(2000);
}