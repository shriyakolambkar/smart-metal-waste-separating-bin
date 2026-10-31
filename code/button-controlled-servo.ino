#include <Servo.h>

int button1 = 4;
int press1 = 0;
int servoPin1 = 9;

Servo servo1;

void setup() {
  servo1.attach(servoPin1);
  pinMode(button1, INPUT_PULLUP);
}

void loop() {
  press1 = digitalRead(button1);

  if (press1 == LOW) {
    servo1.write(160);
  }
  else {
    servo1.write(20);
  }
}
