/* 

Ks0033 keyestudio Analog Temperature Sensor
_________________________________
|  SETUP                          | 
|Sensor pin  ::    Particle pin   |
|   +        ::        3.3v       |
|   -        ::        GND        |
|   S        ::        A0         |
|_________________________________|


SPECIFICATIONS:

analog temperature sensor
Temperature range: ~-55c to ~315c
value is initially analog (voltage ratio) / can be converted to celsius through math

src: https://wiki.keyestudio.com/Ks0033_keyestudio_Analog_Temperature_Sensor
*/

#include <math.h>

#define sensorPin A0

void setup() 
{Serial.begin(9600);
}
// the loop routine runs over and over again forever:
void loop() 
{
  int val = analogRead(sensorPin);
  Serial.print("analog value: ");
  Serial.print(val);
  Serial.print("|| temp in celsius: ");
  Serial.println(Thermister(val));
  delay(1000);
  
 }



double Thermister(int RawADC) {
double Temp;
Temp = 10240000 / RawADC - 1000;
Temp = log(Temp);
Temp = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * Temp * Temp ))* Temp );
Temp = Temp - 273.15; // Convert Kelvin to Celcius
Temp -= 10; // value correction
return Temp;
}
