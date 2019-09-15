#include "DigiKeyboard.h"
int buttonState = 0;  
void setup() {
  pinMode(1, INPUT_PULLUP);
  pinMode(2, OUTPUT);
  //pinMode(3, OUTPUT);
  digitalWrite(2, HIGH); 
}
void loop() {
  buttonState = digitalRead(1);
  if (buttonState == HIGH) {hELLO dIGISPARK!
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.println("123456");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
  }
}
