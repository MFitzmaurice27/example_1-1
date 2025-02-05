#include "mbed.h"
#include "arm_book_lib.h"


#define DUTY_MIN 0.025
#define DUTY_MAX 0.125
#define PERIOD 0.02

#define CONTINUOUS_MIN_STOP .075
#define CONTINUOUS_FULL_SPEED_CW .065
#define CONTINUOUS_FULL_SPEED_CCW .085
#define PERIOD 0.02

PwmOut servo(PE_11);
PwmOut servo_continuous(PE_9);

int main() 
{
    servo.period(PERIOD);
    servo.write(DUTY_MIN);

    servo_continuous.period(PERIOD);

    while (true) {
        servo.write(DUTY_MIN);
        delay(3000);
        servo.write(DUTY_MAX);
        delay(3000);

        servo_continuous.write(CONTINUOUS_MIN_STOP);



    }
}
