/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/IoT_Instructor/Documents/jarvis/Stepper/src/Stepper.ino"
/*
 * Project Stepper
 * Description: Test of Stepper Motor
 * Author: Brian Rashap 
 * Date: 11-May-2020
 */

#include <Stepper.h>

void setup();
void loop();
#line 10 "c:/Users/IoT_Instructor/Documents/jarvis/Stepper/src/Stepper.ino"
const int stepsPerRevolution = 200;  // change this to fit the number of steps per revolution
// for your motor

// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution,D5,D6,D7,D8);

int stepCount = 0;         // number of steps the motor has taken

void setup() {
  // initialize the serial port:
  Serial.begin(9600);
  while(!Serial);
}

void loop() {
  // step one step:
  myStepper.step(1);
  Serial.printf("steps: %i \n",stepCount);
  stepCount++;
  delay(50);
}