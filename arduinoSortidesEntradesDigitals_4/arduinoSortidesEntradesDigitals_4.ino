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

  
void setup()
{
   pinMode(ledPin0, OUTPUT);      // sets the digital pin as output
   pinMode(ledPin1, OUTPUT);      // sets the digital pin as output
   pinMode(ledPin2, OUTPUT);      // sets the digital pin as output
   pinMode(ledPin3, OUTPUT);      // sets the digital pin as output
   
}

void loop()
{
   digitalWrite(ledPin0, HIGH);   // sets the LED on
   digitalWrite(ledPin1, HIGH);    // sets the LED off
   digitalWrite(ledPin2, HIGH);   // sets the LED on
   digitalWrite(ledPin3, HIGH);   // sets the LED on  
   delay(1000);   
   digitalWrite(ledPin0, HIGH);   // sets the LED on
   digitalWrite(ledPin1, HIGH);    // sets the LED off
   digitalWrite(ledPin2, HIGH);   // sets the LED on
   digitalWrite(ledPin3, LOW);   // sets the LED on
   delay(1000);
   digitalWrite(ledPin0, HIGH);   // sets the LED on
   digitalWrite(ledPin1, HIGH);    // sets the LED off
   digitalWrite(ledPin2, LOW);   // sets the LED on
   digitalWrite(ledPin3, HIGH);   // sets the LED on
   delay(1000);
   digitalWrite(ledPin0, HIGH);   // sets the LED on
   digitalWrite(ledPin1, HIGH);    // sets the LED off
   digitalWrite(ledPin2, LOW);   // sets the LED on
   digitalWrite(ledPin3, LOW);   // sets the LED on
   delay(1000);
   digitalWrite(ledPin0, HIGH);   // sets the LED on
   digitalWrite(ledPin1, LOW);    // sets the LED off
   digitalWrite(ledPin2, HIGH);   // sets the LED on
   digitalWrite(ledPin3, HIGH);   // sets the LED on
   delay(1000);
   digitalWrite(ledPin0, HIGH);   // sets the LED on
   digitalWrite(ledPin1, LOW);    // sets the LED off
   digitalWrite(ledPin2, HIGH);   // sets the LED on
   digitalWrite(ledPin3, LOW);   // sets the LED on
   delay(1000);
   digitalWrite(ledPin0, HIGH);   // sets the LED on
   digitalWrite(ledPin1, LOW);    // sets the LED off
   digitalWrite(ledPin2, LOW);   // sets the LED on
   digitalWrite(ledPin3, HIGH);   // sets the LED on
   delay(1000);
   digitalWrite(ledPin0, HIGH);   // sets the LED on
   digitalWrite(ledPin1, LOW);    // sets the LED off
   digitalWrite(ledPin2, LOW);   // sets the LED on
   digitalWrite(ledPin3, LOW);   // sets the LED on
   delay(1000);
   digitalWrite(ledPin0, LOW);   // sets the LED on
   digitalWrite(ledPin1, HIGH);    // sets the LED off
   digitalWrite(ledPin2, HIGH);   // sets the LED on
   digitalWrite(ledPin3, HIGH);   // sets the LED on
   delay(1000);
   digitalWrite(ledPin0, LOW);   // sets the LED on
   digitalWrite(ledPin1, HIGH);    // sets the LED off
   digitalWrite(ledPin2, HIGH);   // sets the LED on
   digitalWrite(ledPin3, LOW);   // sets the LED on
   delay(1000);
   digitalWrite(ledPin0, LOW);   // sets the LED on
   digitalWrite(ledPin1, HIGH);    // sets the LED off
   digitalWrite(ledPin2, LOW);   // sets the LED on
   digitalWrite(ledPin3, HIGH);   // sets the LED on
   delay(1000);
   digitalWrite(ledPin0, LOW);   // sets the LED on
   digitalWrite(ledPin1, HIGH);    // sets the LED off
   digitalWrite(ledPin2, LOW);   // sets the LED on
   digitalWrite(ledPin3, LOW);   // sets the LED on
   delay(1000);
   digitalWrite(ledPin0, LOW);   // sets the LED on
   digitalWrite(ledPin1, LOW);    // sets the LED off
   digitalWrite(ledPin2, HIGH);   // sets the LED on
   digitalWrite(ledPin3, HIGH);   // sets the LED on
   delay(1000);
   digitalWrite(ledPin0, LOW);   // sets the LED on
   digitalWrite(ledPin1, LOW);    // sets the LED off
   digitalWrite(ledPin2, HIGH);   // sets the LED on
   digitalWrite(ledPin3, LOW);   // sets the LED on
   delay(1000);
   digitalWrite(ledPin0, LOW);   // sets the LED on
   digitalWrite(ledPin1, LOW);    // sets the LED off
   digitalWrite(ledPin2, LOW);   // sets the LED on
   digitalWrite(ledPin3, HIGH);   // sets the LED on
   delay(1000);
   digitalWrite(ledPin0, LOW);   // sets the LED on
   digitalWrite(ledPin1, LOW);    // sets the LED off
   digitalWrite(ledPin2, LOW);   // sets the LED on
   digitalWrite(ledPin3, LOW);   // sets the LED on
   delay(1000);
}
