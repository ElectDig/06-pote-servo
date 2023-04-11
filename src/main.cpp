/*
 *     Project 06-pote-servo - main.cpp
 *
 *     Austral 2023 - Electronica Digital - EAM
 *
 *     Servo rotates controlled by a potentiometer
 *     When angle changes, print it on serial monitor
 *
 *     ESP32 development board
 *
 */

#include <Arduino.h>

#include <Servo.h>

/*
 *  Constant definitions
 *      Defined in platformio.ini
 *      MY_SERVO    GPIO of data servo
 *      ANAIN       GPIO of ADC input
 *      RANGE       ADC range
 *      SERIAL_BAUD Serial port Baud rate
 */


#define SERVO_TIME  100

Servo servo;            //    New object of type Servo

void
setup(void)
{
    Serial.begin(SERIAL_BAUD);
    servo.attach(MY_SERVO);
    delay(2000);
}

static int last_pos;    

void
loop(void)
{
    int sensorValue, angle;
    int servo_pos;  

    sensorValue = analogRead(ANAIN);
    angle = map( sensorValue, 0, RANGE, 0, 180 );
    servo.write(angle);
    delay(SERVO_TIME);

    servo_pos = servo.read();
    if( last_pos != servo_pos )
    {
        Serial.printf( "angle = %3d, servo position = %3d\n", angle, servo.read() );
        last_pos = servo_pos;
    }

}
