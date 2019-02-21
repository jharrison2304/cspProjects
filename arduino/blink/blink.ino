void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH); //tells pin 13 to be on
  delay(1000); //tells the program to wait 1 second
  digitalWrite(13, LOW); //tells pin 13 to be off
  delay(2000); //tells program to wait 2 seconds
  digitalWrite(13, HIGH); //tells pin 13 to be on
  delay(500); //tells program to wait 5oo milliseconds
  digitalWrite(13, LOW); //tells pin 13 to be off
  delay(500); //tells program to wait 500 milliseconds
  digitalWrite(13, HIGH); //tells pin 13 to be on
  delay(500); //tells program to wait 500 milliseconds
}
