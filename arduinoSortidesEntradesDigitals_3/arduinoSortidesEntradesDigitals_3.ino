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
   digitalWrite(ledPin0, LOW);   // sets the LED on
   delay(30);   
   digitalWrite(ledPin1, LOW);   // sets the LED on
   delay(30);
   digitalWrite(ledPin0, HIGH);    // sets the LED off
   delay(30);
   digitalWrite(ledPin2, LOW);   // sets the LED on
   delay(30);
   digitalWrite(ledPin1, HIGH);    // sets the LED off
   delay(30);
   digitalWrite(ledPin3, LOW);   // sets the LED on
   delay(50);
   digitalWrite(ledPin2, HIGH);    // sets the LED off
   delay(30);
   digitalWrite(ledPin4, LOW);   // sets the LED on
   delay(30);
   digitalWrite(ledPin3, HIGH);    // sets the LED off
   delay(30);
   digitalWrite(ledPin5, LOW);   // sets the LED on
   delay(30);
   digitalWrite(ledPin4, HIGH);    // sets the LED off
   delay(30);
   digitalWrite(ledPin6, LOW);   // sets the LED on
   delay(30);
   digitalWrite(ledPin5, HIGH);    // sets the LED off
   delay(30);
   digitalWrite(ledPin7, LOW);   // sets the LED on
   delay(30);
   digitalWrite(ledPin6, HIGH);    // sets the LED off
   delay(30);
   digitalWrite(ledPin7, HIGH);    // sets the LED off
   delay(30);                  // waits for a second
   digitalWrite(ledPin6, LOW);   // sets the LED on
    delay(30);                  // waits for a second
   digitalWrite(ledPin7, HIGH);    // sets the LED off
    delay(30);                  // waits for a second
   digitalWrite(ledPin5, LOW);   // sets the LED on
    delay(30);                  // waits for a second
   digitalWrite(ledPin6, HIGH);    // sets the LED off
    delay(30);                  // waits for a second
   digitalWrite(ledPin4, LOW);   // sets the LED on
    delay(30);                  // waits for a second
   digitalWrite(ledPin5, HIGH);    // sets the LED off
    delay(30);                  // waits for a second
   digitalWrite(ledPin3, LOW);   // sets the LED on
    delay(30);                  // waits for a second
   digitalWrite(ledPin4, HIGH);    // sets the LED off
    delay(30);                  // waits for a second
   digitalWrite(ledPin2, LOW);   // sets the LED on
    delay(30);                  // waits for a second
   digitalWrite(ledPin3, HIGH);    // sets the LED off
    delay(30);                  // waits for a second
   digitalWrite(ledPin1, LOW);   // sets the LED on
    delay(30);                  // waits for a second
   digitalWrite(ledPin2, HIGH);    // sets the LED off
    delay(30);                  // waits for a second
   digitalWrite(ledPin0, LOW);   // sets the LED on
    delay(30);                  // waits for a second
   digitalWrite(ledPin1, HIGH);    // sets the LED off
    delay(30);                  // waits for a second
}
