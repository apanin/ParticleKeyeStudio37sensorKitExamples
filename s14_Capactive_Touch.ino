/* 

Ks0031 keyestudio Capacitive Touch Sensor
_________________________________
|  SETUP                          | 
|Sensor pin  ::    Particle pin   |
|   +        ::        3.3v       |
|   -        ::        GND        |
|   S        ::        D0         |
|   led      ::        D4         |
|   -        ::        GND        |
|_________________________________|


SPECIFICATIONS:

digital button
embedded led
cpacitive touche: can be interrupted by conductive surface (finger, stick...)

src: https://wiki.keyestudio.com/Ks0031_keyestudio_Capacitive_Touch_Sensor
*/

#define ledPin D4
#define KEY D0
 
void setup(){
  pinMode(ledPin, OUTPUT);      // Set ledPin to output mode
  pinMode(KEY, INPUT);       //Set touch sensor pin to input mode
}
 
void loop(){
   if(digitalRead(KEY)==HIGH) {      //Read Touch sensor signal
        digitalWrite(ledPin, HIGH);   // if Touch sensor is HIGH, then turn on
     }
   else{
        digitalWrite(ledPin, LOW);    // if Touch sensor is LOW, then turn off the led
     }
}