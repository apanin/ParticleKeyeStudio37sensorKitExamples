/* 

Ks0036 keyestudio Flame Sensor
_________________________________
|  SETUP                          | 
|Sensor pin  ::    Particle pin   |
|   +        ::        3.3v       |
|   -        ::        GND        |
|   D0        ::        D0        |
|_________________________________|


SPECIFICATIONS:

digital signal
integrated LED 
detect fire or other lights with wavelength stands at 760nm ~ 1100nm.
Detection Range: 20cm (4.8V) ~ 100cm (1V)
35 degrees

src: https://wiki.keyestudio.com/Ks0036_keyestudio_Flame_Sensor
*/

#define flamePin D0
#define ledPin D4
int State = 0;         // variable for reading status
void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);      
  // initialize the pushbutton pin as an input:
  pinMode(flamePin, INPUT);     
}
void loop(){
  // read the state of the value:
State = digitalRead(flamePin);
  if (State == HIGH) {     
    digitalWrite(ledPin, LOW);  
  } 
  else {
    digitalWrite(ledPin, HIGH); 
  }
}