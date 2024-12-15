#include <Stepper.h> 

const int steps  = 2048; 

Stepper myStepper = Stepper (steps, 8, 10, 9, 11); 
void setup() { 
}
void loop() {
  myStepper.setSpeed(10); 
  myStepper.step(steps); 
  delay(4000); 
  myStepper.setSpeed(10); 
  myStepper.step(-steps); 
  delay(4000); 
}