const int polred = 11;
const int polblue = 10;

void setup() {
  // put your setup code here, to run once:
pinMode(polred, OUTPUT);
pinMode(polblue, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(polred, HIGH);
  delay(300);
  digitalWrite(polred, LOW);
  digitalWrite(polblue, HIGH);
  delay(300);
  digitalWrite(polblue, LOW);
}

