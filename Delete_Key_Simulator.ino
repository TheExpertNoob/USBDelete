#include "DigiKeyboard.h"

// add delete key definition
#define KEY_DELETE 0x4C

void setup() {
//EMPTY
}

void loop() {
  // generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:
  DigiKeyboard.sendKeyStroke(0);
  
  // Type out this string letter by letter on the computer (assumes US-style
  // keyboard)
  DigiKeyboard.sendKeyStroke(KEY_DELETE);
  
  // It's better to use DigiKeyboard.delay() over the regular Arduino delay()
  // if doing keyboard stuff because it keeps talking to the computer to make
  // sure the computer knows the keyboard is alive and connected
  DigiKeyboard.delay(500);
}
