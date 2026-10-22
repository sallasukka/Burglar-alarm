//burglar alarm that uses PIR sensor, RGB led and Piezo 

const int switchPin = 2;
const int pirPin = 3;
const int rLedPin = 6;
const int bLedPin = 5;
const int gLedPin = 4;
const int piezoPin = 12;
int switchState = 0;

//pins 
void setup()
{  
  pinMode(switchPin, INPUT_PULLUP);
  pinMode(pirPin, INPUT);
  pinMode(piezoPin, OUTPUT); 
  pinMode(rLedPin, OUTPUT); 
  pinMode(bLedPin, OUTPUT); 
  pinMode(gLedPin, OUTPUT); 
}
 
//reads pir-sensor
void loop()
{
  switchState = digitalRead(switchPin);
  int pir = digitalRead(pirPin); 
//if there's movement
  if (switchState == HIGH)
  {
    if (pir == HIGH)
    {
    //rgb red
	digitalWrite(rLedPin, HIGH);
    digitalWrite(gLedPin, LOW);
  	digitalWrite(bLedPin, LOW);
    //piezo hälyttää
	tone(piezoPin, 500); 
    }
//if there's no movement; rgb green + piezo silent
  	else 
  	{
    digitalWrite(gLedPin, HIGH);
    digitalWrite(bLedPin, LOW);
    digitalWrite(rLedPin, LOW);
    noTone(piezoPin);
  	}
  }
//slide switch OFF; rgb blue + piezo silent
    else 
    {
    digitalWrite(bLedPin, HIGH);
    digitalWrite(gLedPin, LOW);
  	digitalWrite(rLedPin, LOW);
    noTone(piezoPin);
    }
  }
