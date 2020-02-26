/* 

Ks0025 keyestudio Digital Tilt Sensor

_________________________________
|  SETUP                          | 
|Sensor pin  ::    Particle pin   |
|   +        ::        3.3v       |
|   -        ::        GND        |
|   S        ::        D0         |
|   led      ::        D4         |
|   gnd      ::        gnd        |
|_________________________________|


SPECIFICATIONS:

detects orientation or inclination
1 rotation axis (resistance determine by physical ball)
embedded led
can be used as a digital button (use same code as digital button)

src: https://wiki.keyestudio.com/Ks0025_keyestudio_Digital_Tilt_Sensor
*/

#define ledPin D4                // Connect LED to pin 13
#define switcher D0                 // Connect Tilt sensor to Pin3
 
void setup()
{
  pinMode(ledPin, OUTPUT);      // Set digital pin 13 to output mode
  pinMode(switcher, INPUT);       // Set digital pin 3 to input mode
}
void loop()
{
     
   if(digitalRead(switcher)==HIGH) //Read sensor value
     { 
        digitalWrite(ledPin, HIGH);   // Turn on LED when the sensor is tilted
     }
   else
     {
        digitalWrite(ledPin, LOW);    // Turn off LED when the sensor is not triggered
     }
}