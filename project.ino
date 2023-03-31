#define ledgreenpin 13
#define ledyellowpin 12
#define ledbluepin 14

void setup() {
  pinMode(ledgreenpin, OUTPUT);
  pinMode(ledyellowpin, OUTPUT);
  pinMode(ledbluepin, OUTPUT);
}

void loop() {
  digitalWrite(ledgreenpin, HIGH);
  delay(1000);
  digitalWrite(ledgreenpin, LOW);
  digitalWrite(ledyellowpin, HIGH);
  delay(1000);
  digitalWrite(ledyellowpin, LOW);
  digitalWrite(ledbluepin, HIGH);
  delay(1000);
  digitalWrite(ledbluepin, LOW);
   delay(3000);
}