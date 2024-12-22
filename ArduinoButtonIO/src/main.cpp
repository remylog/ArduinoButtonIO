#include <Arduino.h>

const int buttonPin_1 = 2;    // ボタン 1
const int buttonPin_2 = 3;    // ボタン 2
const int buttonPin_3 = 4;    // ボタン 3
const int buttonPin_4 = 5;    // ボタン 4
const int buttonPin_5 = 6;    // ボタン 5

const int setPin_FET_1 = 7;    // FET 1
const int setPin_FET_2 = 8;   // FET 2
const int setPin_FET_3 = 9;   // FET 3
const int setPin_FET_4 = 10;   // FET 4
const int setPin_FET_5 = 11;   // FET 5
const int setPin_FET_6 = 12;   // FET 6

const int resetPin = 13;    // リセットピン

const int setPin_LED_1 = A0;   // LED 1
const int setPin_LED_2 = A1;   // LED 2
const int setPin_LED_3 = A2;   // LED 3
const int setPin_LED_4 = A3;   // LED 4
const int setPin_LED_5 = A4;   // LED 5
const int setPin_LED_6 = A5;   // LED 6


void setup() {
  Serial.begin(9600);

  pinMode(resetPin, OUTPUT);

  pinMode(buttonPin_1, INPUT);
  pinMode(buttonPin_2, INPUT);
  pinMode(buttonPin_3, INPUT);
  pinMode(buttonPin_4, INPUT);
  pinMode(buttonPin_5, INPUT);

  pinMode(setPin_FET_1, OUTPUT);
  pinMode(setPin_FET_2, OUTPUT);
  pinMode(setPin_FET_3, OUTPUT);
  pinMode(setPin_FET_4, OUTPUT);
  pinMode(setPin_FET_5, OUTPUT);
  pinMode(setPin_FET_6, OUTPUT);

  pinMode(setPin_LED_1, OUTPUT);
  pinMode(setPin_LED_2, OUTPUT);
  pinMode(setPin_LED_3, OUTPUT);
  pinMode(setPin_LED_4, OUTPUT);
  pinMode(setPin_LED_5, OUTPUT);
  pinMode(setPin_LED_6, OUTPUT);

}

void loop() {
  int buttonState_1 = digitalRead(buttonPin_1); // ボタンの状態を読み取る
  int buttonState_2 = digitalRead(buttonPin_2); // ボタンの状態を読み取る
  int buttonState_3 = digitalRead(buttonPin_3); // ボタンの状態を読み取る
  int buttonState_4 = digitalRead(buttonPin_4); // ボタンの状態を読み取る
  int buttonState_5 = digitalRead(buttonPin_5); // ボタンの状態を読み取る
  
  if (buttonState_1 == HIGH) {
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

  else if (buttonState_2 == HIGH) {
    Serial.println("Button 2 pressed");

    digitalWrite(resetPin, HIGH);
    Serial.println("Reset pin HIGH");

    delay(1000);
    digitalWrite(resetPin, LOW);
    digitalWrite(setPin_LED_2, LOW);
    Serial.println("Reset pin LOW and LED 2 LOW");

    delay(100);
    digitalWrite(setPin_LED_2, HIGH);
    digitalWrite(setPin_FET_2, HIGH);
    Serial.println("LED 2 HIGH and FET 2 HIGH");

    delay(5000);
    digitalWrite(setPin_FET_2, LOW);
    Serial.println("FET 2 LOW");
  }

  else if (buttonState_3 == HIGH) {
    Serial.println("Button 3 pressed");

    digitalWrite(resetPin, HIGH);
    Serial.println("Reset pin HIGH");

    delay(1000);
    digitalWrite(resetPin, LOW);
    digitalWrite(setPin_LED_3, LOW);
    Serial.println("Reset pin LOW and LED 3 LOW");

    delay(100);
    digitalWrite(setPin_LED_3, HIGH);
    digitalWrite(setPin_FET_3, HIGH);
    Serial.println("LED 3 HIGH and FET 3 HIGH");

    delay(5000);
    digitalWrite(setPin_FET_3, LOW);
    Serial.println("FET 3 LOW");
  }

  else if (buttonState_4 == HIGH) {
    Serial.println("Button 4 pressed");

    digitalWrite(resetPin, HIGH);
    Serial.println("Reset pin HIGH");

    delay(1000);
    digitalWrite(resetPin, LOW);
    digitalWrite(setPin_LED_4, LOW);
    Serial.println("Reset pin LOW and LED 4 LOW");

    delay(100);
    digitalWrite(setPin_LED_4, HIGH);
    digitalWrite(setPin_FET_4, HIGH);
    Serial.println("LED 4 HIGH and FET 4 HIGH");

    delay(5000);
    digitalWrite(setPin_FET_4, LOW);
    Serial.println("FET 4 LOW");
  }

  else if (buttonState_5 == HIGH) {
    Serial.println("Button 5 pressed");

    digitalWrite(resetPin, HIGH);
    Serial.println("Reset pin HIGH");

    delay(1000);
    digitalWrite(resetPin, LOW);
    digitalWrite(setPin_LED_5, LOW);
    Serial.println("Reset pin LOW and LED 5 LOW");

    delay(100);
    digitalWrite(setPin_LED_5, HIGH);
    digitalWrite(setPin_FET_5, HIGH);
    Serial.println("LED 1 HIGH and FET 1 HIGH");

    delay(5000);
    digitalWrite(setPin_FET_5, LOW);
    Serial.println("FET 5 LOW");
  }
  else {
    Serial.println("Button 1 not pressed");
  }
  delay(100);
}
