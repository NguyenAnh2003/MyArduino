// mutiple tasks with millis

// C++ code
// time
unsigned long time;
unsigned long prevtime1;
unsigned long prevtime2;
const long interval1 = 1000;
const long interval2 = 5000;

// state
boolean status = false;
int led2State = LOW;
int led3State = LOW;


// led 
const int led3 = 13;
const int led2 = 12;
const int led1 = 11;
// btn
const int button = 10;



void setup()
{	
  PinModeLed(11, 13);
  pinMode(button, INPUT_PULLUP);
}

void PinModeLed(int start, int end){
	for(int i = start; i<=end; i++)
    {
    	pinMode(i, OUTPUT);
    }
}

void loop()
{	
  // init current time
  time = millis();
  if(time - prevtime1 >= interval1)
  {	
    led2State = !led2State;
  	digitalWrite(led2, led2State);
    
    prevtime1 = time;
  }
  
  if(time - prevtime2 >= interval2)
  {	
    led3State = !led3State;
  	digitalWrite(led3, led3State);
    
    prevtime2 = time;
  }
  
  proButton();
}

void proButton() {
	status = digitalRead(button);
  	digitalWrite(led1, status);
}

