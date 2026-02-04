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
    for (int angle = 0;angle<=180;angle+=10){
        myServo.write(angle);
        Serial.print("Angle: ");
        Serial.println(angle);
        delay(500);
}
    // rotates back from 180 to 0
    for (int angle = 180;angle>=0;angle-=10) {
        myServo.write(angle);
        Serial.print("Angle: ");
        Serial.println(angle);
        delay(500);
    }
}