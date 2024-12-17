#include <Servo.h>
Servo servoA; //creates a servo object using the Servo library
Servo servoB;

const int X = A0, Y = A1;

void setup() {
  //assigns servos to pin on arduino
  servoA.attach(2);
  servoB.attach(3);

  //set modes of pins for joystick
  pinMode(X,INPUT);
  pinMode(Y,INPUT);

  //establish serial link
  Serial.begin(9600);
}

void loop() {
//move servoA if joystick moves in X direction
Serial.print("X: ");
Serial.print(analogRead(X)/6);
servoA.write((X)/6);

//move servoB if joystick moves in Y direction
Serial.print("Y: ");
Serial.print(analogRead((Y)/6));
servoB.write((Y)/6);

delay(10);

}
