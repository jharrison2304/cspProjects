int number1;
char sign;
int number2;
int result;
char integers[32];
bool newData = false;
int count;
bool readyToCalculate = false;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}
void loop() {
  cleanData();
  cleanData();
  parseData();
  calculate();
}
void cleanData() {
  count = 0;
  while (Serial.available() > 0) {
    newData = true;
    if (isDigit(Serial.peek()) == true) {
      delay(1);
      integers[count] = Serial.parseInt();
      count++;
      Serial.print("The current count is ");
      Serial.println(count);
    }
    else if (isGraph(Serial.peek()) == true) {
      delay(1);
      sign = Serial.read();
      Serial.println(sign);
    }
    else {
      Serial.read();
      delay(1);
    }
  }
}

void parseData() {
  if (newData == true) {
    number1 = integers[0];
    number2 = integers[1];
    Serial.println(number1);
    Serial.println(sign);
    Serial.println(number2);
    newData = false;

  }
}
void calculate() {
  if (readyToCalculate == true) {
    Serial.println("true") ;
  }
  if (readyToCalculate == false) {
  Serial.println("false");
  }
}
