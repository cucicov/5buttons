#define BUTTON_1 8
#define BUTTON_2 7
#define BUTTON_3 6
#define BUTTON_4 5
#define BUTTON_5 4

const int ledPin = A7;

int b1 = 0;
int b2 = 0;
int b3 = 0;
int b4 = 0;
int b5 = 0;
 
void setup() {
  Serial.begin(9600);
  pinMode(BUTTON_1, INPUT_PULLUP);
  pinMode(BUTTON_2, INPUT_PULLUP);
  pinMode(BUTTON_3, INPUT_PULLUP);
  pinMode(BUTTON_4, INPUT_PULLUP);
  pinMode(BUTTON_5, INPUT_PULLUP);

  pinMode(ledPin, OUTPUT);
}
 
void loop() {
 
  if (digitalRead(BUTTON_1) == LOW && b1 == 0) {
    b1 = 1;
    Serial.println("11");
  } else if (digitalRead(BUTTON_1) == HIGH && b1 == 1) {
    b1 = 0;
    Serial.println("10");
  }

  if (digitalRead(BUTTON_2) == LOW && b2 == 0) {
    b2 = 1;
    Serial.println("21");
  } else if (digitalRead(BUTTON_2) == HIGH && b2 == 1) {
    b2 = 0;
    Serial.println("20");
  }

  if (digitalRead(BUTTON_3) == LOW && b3 == 0) {
    b3 = 1;
    Serial.println("31");
  } else if (digitalRead(BUTTON_3) == HIGH && b3 == 1) {
    b3 = 0;
    Serial.println("30");
  }

  if (digitalRead(BUTTON_4) == LOW && b4 == 0) {
    b4 = 1;
    Serial.println("41");
  } else if (digitalRead(BUTTON_4) == HIGH && b4 == 1) {
    b4 = 0;
    Serial.println("40");
  }

  if (digitalRead(BUTTON_5) == LOW && b5 == 0) {
    b5 = 1;
    Serial.println("51");
  } else if (digitalRead(BUTTON_5) == HIGH && b5 == 1) {
    b5 = 0;
    Serial.println("50");
  }
  
  if ((b1 + b2 + b3 + b4 + b5) == 0) {
    digitalWrite(ledPin, LOW);
  } else {
    digitalWrite(ledPin, HIGH);
  }
   
  delay(100);
}
