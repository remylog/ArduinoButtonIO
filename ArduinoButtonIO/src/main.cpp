#include <Arduino.h>

const int resetPin = 13;    // リセットピン

const int buttonPin_1 = 2;    // ボタン 1
const int buttonPin_2 = 3;    // ボタン 2
const int buttonPin_3 = 4;    // ボタン 3
const int buttonPin_4 = 5;    // ボタン 4

const int setPin_FET_1 = 9;    // FET 1
const int setPin_FET_2 = 10;   // FET 2
const int setPin_FET_3 = 11;   // FET 3
const int setPin_FET_4 = 12;   // FET 4

const int setPin_LED_1 = A0;   // LED 1
const int setPin_LED_2 = A1;   // LED 2
const int setPin_LED_3 = A2;   // LED 3
const int setPin_LED_4 = A3;   // LED 4

const int setpin_RY_1 = 8;    // リレー 1

void setup() {
  Serial.begin(9600);

  pinMode(resetPin, OUTPUT);

  pinMode(buttonPin_1, INPUT);

  pinMode(setPin_FET_1, OUTPUT);
  pinMode(setPin_LED_1, OUTPUT);

  pinMode(setpin_RY_1, OUTPUT);

  delay(3000);
  digitalWrite(setpin_RY_1, HIGH);
}

void loop() {
  int buttonState = digitalRead(buttonPin_1); // ボタンの状態を読み取る
  
  if (buttonState == HIGH) {
    Serial.println("Button 1 pressed");

    digitalWrite(resetPin, HIGH);
    Serial.println("Reset pin HIGH");

    delay(1000);
    digitalWrite(resetPin, LOW);
    digitalWrite(setPin_LED_1, LOW);
    Serial.println("Reset pin LOW and LED 1 LOW");

    delay(100);
    digitalWrite(setPin_LED_1, HIGH);
    digitalWrite(setPin_FET_1, HIGH);
    Serial.println("LED 1 HIGH and FET 1 HIGH");

    delay(5000);
    digitalWrite(setPin_FET_1, LOW);
    Serial.println("FET 1 LOW");
  }
  else {
    Serial.println("Button 1 not pressed");
  }
  delay(100);
}
