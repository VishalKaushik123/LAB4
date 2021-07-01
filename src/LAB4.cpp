/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/Vishal/Documents/CTDProjects/LAB4/src/LAB4.ino"
/*
 * Project LAB4
 * Description:
 * Author:
 * Date:
 */
void setup();
void loop();
#line 7 "c:/Users/Vishal/Documents/CTDProjects/LAB4/src/LAB4.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
bool value;
// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  pinMode(D6, OUTPUT);  // initalizes D5 (the LED) as input
  pinMode(D7, INPUT);  // initalizes D6 (the button) as input
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  value = digitalRead(D7);
  if (value == true) {
    digitalWrite(D6, HIGH);
  } else {
    digitalWrite(D6, LOW);
  }

}