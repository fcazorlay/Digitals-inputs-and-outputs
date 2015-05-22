/**********************************************************************************
**                                                                               **
**                              Dau LED's                                        **
**                                                                               **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int leds4 = 5;    //donem noms als pins
const int leds3 = 6;
const int leds2 = 7;
const int leds1 =8;

int pausa = 2000;

//********** Setup ****************************************************************
void setup()
{
  pinMode(leds4, OUTPUT);  //definim els pins com a sortides
  pinMode(leds3, OUTPUT);
  pinMode(leds2, OUTPUT);
  pinMode(leds1, OUTPUT);
  
  digitalWrite(leds4, LOW);
  digitalWrite(leds3, LOW);
  digitalWrite(leds2, LOW);
  digitalWrite(leds1, LOW);
  
  delay(pausa);
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(leds1, LOW);  
  digitalWrite(leds2, HIGH);  //nombre 2
  
  delay(pausa);
  
  digitalWrite(leds1, HIGH);    digitalWrite(leds2, LOW);  //nombre3
  digitalWrite(leds3, HIGH);
  
  delay(pausa);
  
  digitalWrite(leds1, LOW);    digitalWrite(leds2, HIGH);  //nombre 4
  
  delay(pausa);
  
  digitalWrite(leds1, HIGH);                              // nombre 5
  
  delay(pausa);
  
  digitalWrite(leds1, LOW);    digitalWrite(leds4, HIGH); // nombre 6
  
  delay(pausa);
  
  digitalWrite(leds4, LOW);    digitalWrite(leds3, LOW);  // nombre 1
  digitalWrite(leds2, LOW);    digitalWrite(leds1, HIGH);
  
  delay(pausa);
  
}

