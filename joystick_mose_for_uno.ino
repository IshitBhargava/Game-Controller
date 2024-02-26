#include <Mouse.h>

const int xAxisPin = A0;
const int yAxisPin = A1;
const int buttonPin1 = 8;
const int buttonPin2 = 2;
const int potPin = A2; // Analog pin for the potentiometer

void setup() {
  Serial.begin(2000000);
  pinMode(buttonPin1, INPUT_PULLUP); // Set pin 8 as input with pull-up resistor
  pinMode(buttonPin2, INPUT_PULLUP); // Set pin 2 as input with pull-up resistor
  pinMode(9, OUTPUT);
  //Mouse.begin();
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
}

void loop() {
  // Read joystick, buttons, and potentiometer values
  int xAxisValue = analogRead(xAxisPin);
  int yAxisValue = analogRead(yAxisPin);
  int buttonState1 = digitalRead(buttonPin1);
  int buttonState2 = digitalRead(buttonPin2);
  int potValue = analogRead(potPin);

  // Send data over serial
  Serial.print(xAxisValue);
  Serial.print(",");
  Serial.print(yAxisValue);
  Serial.print(",");
  Serial.print(buttonState1);
  Serial.print(",");
  Serial.print(buttonState2);
  Serial.print(",");
  Serial.println(potValue);

  if(potValue <341){
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
  } else if(potValue >682){
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
  } else {
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
  }

  //delay(100); // Adjust delay as needed
}