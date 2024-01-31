const int ledpin = 13;
const int flamepin = A2;
const int buzpin = 11;
const int threshold = 200;
int flamesensevalue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
  pinMode(flamepin, INPUT);
  pinMode(buzpin, OUTPUT);
}

void loop() {
  flamesensevalue = analogRead(flamepin);
  if (flamesensevalue <= threshold) {
    digitalWrite(ledpin, HIGH);
    tone(buzpin, 100);
    delay(1000); // Added semicolon to end the statement
  } else {
    digitalWrite(ledpin, LOW);
    noTone(buzpin);
  }
}
