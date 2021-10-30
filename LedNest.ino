int led = 5;
int sensor = 3;
int Brightness = 0;

void setup() {
pinMode(sensor, INPUT);
pinMode(led, OUTPUT);
Serial.begin(9600);
}

void loop() {
if (digitalRead(sensor) == 0) {
  Brightness += 1;
  analogWrite(led, Brightness);
  Serial.println(Brightness);
  delay(500);
}
else if(Brightness > 20) {
  Brightness = 0;
}
}
