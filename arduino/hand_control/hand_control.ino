#include<Servo.h>
Servo sg90;
int val = 0;
int pos = 0;
void setup() {
  sg90.attach(4);
}

void loop() {
  int val = analogRead(A0);
  int pos = map(val, 0, 1023, 0, 180);
  sg90.write(pos);
  delay(10);
}
