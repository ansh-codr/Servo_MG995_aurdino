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
    myServo.write(10);
    delay(500);
// write your code here
}