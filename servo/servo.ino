#include <Servo.h>
#define pin 9
Servo servo_9;
void setup() {
  // put your setup code here, to run once:
servo_9.attach(pin);
}

void loop() {
  // put your main code here, to run repeatedly:
servo_9.write(0);
delay(1000);
servo_9.write(90);
delay(1000);
servo_9.write(180);
delay(1000);
}
