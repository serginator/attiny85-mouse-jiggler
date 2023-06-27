#include <DigiMouse.h>

unsigned int seconds = 0;

// Delay in seconds before mouse moves again
const int MOUSE_DELAY_IN_SECONDS = 30;

void setup() {
  // Set pin 0 as input
  pinMode(0, INPUT);

  // Initialize DigiMouse
  DigiMouse.begin();
}

// Turn off the LED
void ledOff(){
  digitalWrite(1, LOW);
}

// Turn on the LED
void ledOn(){
  digitalWrite(1, HIGH);
}

void loop() {
  if (digitalRead(0) == HIGH) { // If the capacitive touch sensor is pressed
    if (seconds == 0) { // If the timer is reset, move the mouse
      ledOn();
      DigiMouse.moveX(2);
      DigiMouse.delay(500);
      ledOff();
      DigiMouse.moveX(-2);
      DigiMouse.delay(500);
    }
    delay(1000); // Delay for 1 second
    seconds++; // Increment the timer
    if (seconds == MOUSE_DELAY_IN_SECONDS) { // If the timer reaches the delay, reset the timer
      seconds = 0;
    }
  } else { // If the capacitive touch sensor is not pressed, reset the timer
    seconds = 0;
  }
}
