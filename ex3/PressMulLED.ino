// C++ code
// blinking multiple LED using for loop
#define delayTime 50
#define ButtonPin 5
void setup()
{
  for(int i = 2; i<=4; i++)
  {
  	pinMode(i, OUTPUT);
  }
  pinMode(ButtonPin, INPUT);
}

void checkPressed(){
  if(digitalRead(ButtonPin) == HIGH) {
  	turnOn();
  }
  else {
  	turnOff();
  }
}

void turnOn() {
  for(int i = 2; i<=4; i++)
  {
    digitalWrite(i, HIGH);
    delay(500);
  }
}

void turnOff() {
  for(int i = 4; i>=2; i--)
  {
    digitalWrite(i, LOW);
    delay(500);
  }
}

void loop()
{ 
  checkPressed();
}

