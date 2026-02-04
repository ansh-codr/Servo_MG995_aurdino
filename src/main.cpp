#include <Arduino.h>
#include <Servo.h>
Servo myServo;
void setup() {
// write your initialization code here
    Serial.begin(9600);
    myServo.attach( 9);
    Serial.println("Servo initiate");
}

void loop() {
    myServo.write(0);
    delay(500);
    myServo.write(90);
    delay(500);
    myServo.write(120);
    delay(500);
    myServo.write(180);
    delay(500);
}
// write your code here
}