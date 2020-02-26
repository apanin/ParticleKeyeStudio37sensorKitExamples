/* 

Ks0022 keyestudio LM35 Linear Temperature Sensor
_________________________________
|  SETUP                          | 
|Sensor pin  ::    Particle pin   |
|   +        ::        3.3v       |
|   -        ::        GND        |
|   S        ::        A0         |
|_________________________________|


SPECIFICATIONS:

analog sensor
0 to 100 degrees celcius

src: https://wiki.keyestudio.com/Ks0022_keyestudio_LM35_Linear_Temperature_Sensor
*/

#define sensorPin A0
int data = 0;

void setup()
{
    Serial.begin(9600);//Set Baud Rate to 9600 bps
    pinMode(sensorPin, OUTPUT);
}
 void loop()
{   
    data=(330 * analogRead(sensorPin)) /4095;
    Serial.print("Temp: "); //Display the temperature on Serial monitor
    Serial.print(data);
    Serial.println("C");
    delay(1000);
}
