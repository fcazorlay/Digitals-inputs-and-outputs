/************************************************************************
**                                                                     **
**                        Descripció programa                          **
**                                                                     **
/***********************************************************************/

//******  Inculdes  *****************************************************


//******  Variables  ****************************************************

//******  Setup  ********************************************************
const int ledPin0 = 5;   // LED connected to digital pin 5
const int ledPin1 = 6;   // LED connected to digital pin 6
const int ledPin2 = 7;   // LED connected to digital pin 7
const int ledPin3 = 8;   // LED connected to digital pin 8
const int ledPin4 = 9;   // LED connected to digital pin 9
const int ledPin5 = 10;  // LED connected to digital pin 10
const int ledPin6 = 11;  // LED connected to digital pin 11
const int ledPin7 = 12;  // LED connected to digital pin 12
  
void setup()
{
   pinMode(ledPin0, OUTPUT);      // sets the digital pin as output
   pinMode(ledPin1, OUTPUT);      // sets the digital pin as output
   pinMode(ledPin2, OUTPUT);      // sets the digital pin as output
   pinMode(ledPin3, OUTPUT);      // sets the digital pin as output
   pinMode(ledPin4, OUTPUT);      // sets the digital pin as output
   pinMode(ledPin5, OUTPUT);      // sets the digital pin as output
   pinMode(ledPin6, OUTPUT);      // sets the digital pin as output
   pinMode(ledPin7, OUTPUT);      // sets the digital pin as output
}

void loop()
{
   digitalWrite(ledPin0, HIGH);   // sets the LED on
   digitalWrite(ledPin1, HIGH);   // sets the LED on
   digitalWrite(ledPin2, HIGH);   // sets the LED on
   digitalWrite(ledPin3, HIGH);   // sets the LED on
   digitalWrite(ledPin4, HIGH);   // sets the LED on
   digitalWrite(ledPin5, HIGH);   // sets the LED on
   digitalWrite(ledPin6, HIGH);   // sets the LED on
   digitalWrite(ledPin7, HIGH);   // sets the LED on
   delay(1000);                  // waits for a second
   digitalWrite(ledPin0, LOW);    // sets the LED off
   digitalWrite(ledPin1, LOW);    // sets the LED off
   digitalWrite(ledPin2, LOW);    // sets the LED off
   digitalWrite(ledPin3, LOW);    // sets the LED off
   digitalWrite(ledPin4, LOW);    // sets the LED off
   digitalWrite(ledPin5, LOW);    // sets the LED off
   digitalWrite(ledPin6, LOW);    // sets the LED off
   digitalWrite(ledPin7, LOW);    // sets the LED off
   delay(1000);                  // waits for a second
}
