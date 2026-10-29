const int led = 8;
const int sensor_pin = A0;
int sensor; //sensor reading
const int threshold = 60; //threshold to turn led on

void setup() {
  pinMode (led, OUTPUT); // output led
  Serial.begin(9600); //initialise serial communication

}

void loop() {
  sensor = analogRead(sensor_pin); //reads sensor value
  Serial.println(sensor); //prints sensor value
  if(sensor<threshold) { //if sensor reading is less than threshold
    digitalWrite(led, HIGH); //turn led on
  }
  else{ //if sensor reading is more than threshold
  digitalWrite(led, LOW); //turn led off
  }

}
