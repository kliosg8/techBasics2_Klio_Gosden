### What i learned
I learned how to make lights blink in order and and the same time, using the Arduino kit and the battery, using a **series** and **parallel** circuit.

### What i liked
I liked the traffic lights assignment and afterwards i did my own **police lights** too.

### What was hard
I couldn't understand the maths or physics behind the resistors much because I'm just really bad at maths and physics in general, so this will be a **continuous** problem for me. 

## Video
https://github.com/user-attachments/assets/8520e07e-e883-4431-93b0-c862503a57bd


## Code
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
