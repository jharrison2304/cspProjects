// put your setup code here, to run once:
void setup() {
  // set the data rate
  Serial.begin(9600);
  // set maximum milliseconds to wait for serial data
  Serial.setTimeout(10);
  // sends welcome message to serial user via serial monitor
  Serial.println("smile because smiles are like similes except without the extra i");
  // sends on signal to serial user via serial monitor
  Serial.println("Send 'On' to turn on the LED.");
  // sends off signal to serial user via serial monitor
  Serial.println("Send 'Off' to turn off the LED.");
  // configures port as either an input or an output
  pinMode(13, OUTPUT);
}
// put your main code here, to run repeatedly:
void loop() {
  // if there is anything in the buffer continue to run code
  if (Serial.available() > 0) {
    // create a string named command
    String command;
    // reads contents of command into a string
    command = Serial.readString();
    // gets rid of unnecessary code
    command.trim();
    // tells computer what to do if command is on
    if (command == "On") {
      // turns light on
      digitalWrite(13, HIGH);
      // prints on in serial monitor
      Serial.println("On");
    }
    // tells computer what to do if command is off
    else if (command == "Off") {
      // turns light off
      digitalWrite(13, LOW);
      // prints off in serial monitor
      Serial.println("Off");
    }
  }
}
