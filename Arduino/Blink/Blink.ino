byte led = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT);
}

void loop() {
  digitalWrite(12, HIGH);
  delay (500);
  digitalWrite(12, LOW);
  delay (500);
}
