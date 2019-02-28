void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("smile because smiles are like similes except without the extra i")
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  Serial.println("On");
  delay(1000);
  digitalWrite(13, LOW);
  Serial.println("Off");
  delay(1000);
}
