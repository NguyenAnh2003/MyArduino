// C++ code
//
int led[5] = {9, 10, 11, 12, 13};

void setup()
{
  for(int i = 0; i<=sizeof(led); i++)
  {
    pinMode(led[i], OUTPUT);
  }
}

void loop()
{
  long rand = random(9, 14);
  digitalWrite(rand, HIGH);
  delay(500);
  digitalWrite(rand, LOW);
}

