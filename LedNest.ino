#include <Time.h>
float onTime = 0;
float outTime = 0;
float Time = 0;
boolean temp = 0;
const int sensor = 3;
const int led = 5;

void setup() {
  pinMode(sensor, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  boolean check = digitalRead(sensor);

  if(check == 1 && temp == 0) {
    onTime = millis();
    temp = 1;
  }
  else if(check == 0 && temp == 1) {
    outTime = millis();
    Time = ((onTime - outTime) / 100) + 10;
    Serial.println(Time);
    temp = 0;
  }
      delay(10);
}
