/*
 * Project LAB4
 * Description:
 * Author:
 * Date:
 */
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
  value = digitalRead(D7); //sets value to true or false based the input of D7 (If its turned on or off)
  if (value == true) { //if button is pressed
    digitalWrite(D6, HIGH); //turn light on
  } else { //if button isn't pressed
    digitalWrite(D6, LOW); //turn light off
  }

}