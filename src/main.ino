#include <Servo.h>

#define SERVO_PIN PA7

#define SerialMon Serial

Servo servo;

void setup()
{
    SerialMon.begin(115200);
    delay(100);
    while (!SerialMon)
    {
        ;
    }
    servo.attach(SERVO_PIN);
}

void loop()
{
    servo.write(35);
    delay(250);
    servo.write(173);
    delay(250);
    servo.write(20);
    delay(2000);
}