//sends lightValue of 255 to arduinoand decrease until lightValue is 0 and then increase until it is 255, this will make the light turn on slowly and offslowly and prints all lightValues to the serial monitor
void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT);

}

void loop() {
  for (int lightValue = 0; lightValue <= 255; lightValue++) {
    analogWrite(9, lightValue);
    Serial.println(lightValue);
    delay(10);
  }
  for (int lightValue = 255; lightValue >= 0; lightValue--) {
    analogWrite(9, lightValue);
     Serial.println(lightValue);
    delay(10);
  }
}
