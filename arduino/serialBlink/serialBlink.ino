void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.setTimeout(10);
  Serial.println("smile because smiles are like similes except without the extra i");
  Serial.println("Send 'On' to turn on the LED.");
  Serial.println("Send 'Off' to turn off the LED.");
  pinMode(13, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    String command;
    command = Serial.readString();
    command.trim();
    if (command == "On") {
      digitalWrite(13, HIGH);
      Serial.println("On");
    }
    else if (command == "Off") {
      digitalWrite(13, LOW);
      Serial.println("Off");
    }

  }
}
// put your main code here, to run repeatedly:
