/* 

Ks0009 keyestudio Photo Interrupter Module

_________________________________
|  SETUP                          | 
|Sensor pin  ::    Particle pin   |
|   +        ::        3.3v       |
|   -        ::        GND        |
|   S        ::        D0         |
|   led        ::      D4         |
|   -        ::        GND        |
|_________________________________|


SPECIFICATIONS:

detects presence between the two brackets
can be used as a button

src: https://wiki.keyestudio.com/Ks0009_keyestudio_Photo_Interrupter_Module
*/

#include <math.h>
// photo interrupter module
 
#define Led D4 
#define buttonpin D0

int val ;// define numeric variables val
void setup ()
{
  pinMode (Led, OUTPUT) ;// define LED as output interface
  pinMode (buttonpin, INPUT) ;// define the photo interrupter sensor output interface   
}
void loop ()
{
  val = digitalRead (buttonpin) ;// digital interface will be assigned a value of 3 to read val
  if (val == HIGH) // When the light sensor detects a signal is interrupted, LED flashes
  {
    digitalWrite (Led, HIGH);
  }
  else
  {
    digitalWrite (Led, LOW);
  }
}
