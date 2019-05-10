#include <SoftSerial.h>
#define RX 0
#define TX 1
//#include "SoftwareSerial.h"
SoftSerial bluetooth(TX, RX);

void setup() {
  bluetooth.begin(9600);
  pinMode(RX, INPUT);
  pinMode(RX, OUTPUT);
  //  pinMode(pinLED, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  bluetooth.write("8");
  byte BluetoothData;
  if (bluetooth.available() > 0) {
    BluetoothData = bluetooth.read();
    switch (BluetoothData) {
      case '1':
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        break;
      case '2':
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        break;
      case '3':
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
        break;
      case '4':
        digitalWrite(3, HIGH);
        digitalWrite(2, LOW);
        break;
      case '5':
        digitalWrite(5, HIGH);
        digitalWrite(4, LOW);
        break;
    }
  }
  delay(100);
}
