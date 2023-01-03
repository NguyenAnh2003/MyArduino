// C++ code
// blinking multiple LED using for loop


void setup()
{
  for(int i = 2; i<=4; i++)
  {
  	pinMode(i, OUTPUT);
  }
}

void loop()
{ 
  for(int i = 2; i<=4; i++)
  {
    customBlinking(i);
  }
}

void customBlinking(int i) {
  digitalWrite(i, HIGH);
  delay(1000);
  digitalWrite(i, LOW);
  delay(1000);
}