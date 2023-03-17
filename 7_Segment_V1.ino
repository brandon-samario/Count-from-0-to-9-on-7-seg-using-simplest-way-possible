/*
  Define the pins that will be used to connect the Arduino to the 7 segment display.
  Setup function, set these pins to output mode.
  Loop function, display each number from 0 to 9 by turning on and off the appropriate segments of the 7 segment display.
  Delay function to control how long each number is displayed before moving on to the next one.
*/

const int a = 2; //a is connected to pin 2 on Arduino
const int b = 3; //b is connected to pin 3 on Arduino
const int c = 4; //c is connected to pin 4 on Arduino
const int d = 5; //d is connected to pin 5 on Arduino
const int e = 6; //e is connected to pin 6 on Arduino
const int f = 7; //f is connected to pin 7 on Arduino
const int g = 8; //g is connected to pin 8 on Arduino

void setup() {
  pinMode(a, OUTPUT); //Set a as output
  pinMode(b, OUTPUT); //Set b as output
  pinMode(c, OUTPUT); //Set c as output
  pinMode(d, OUTPUT); //Set d as output
  pinMode(e, OUTPUT); //Set e as output
  pinMode(f, OUTPUT); //Set f as output
  pinMode(g, OUTPUT); //Set g as output
}

void loop() {
  // display 0
  digitalWrite(a, HIGH); //set a on 7 segment on
  digitalWrite(b, HIGH); //set b on 7 segment on
  digitalWrite(c, HIGH); //set c on 7 segment on
  digitalWrite(d, HIGH); //set d on 7 segment on
  digitalWrite(e, HIGH); //set e on 7 segment on
  digitalWrite(f, HIGH); //set f on 7 segment on
  digitalWrite(g, LOW); //set g on 7 segment off
  delay(1000); //1 second delay

  // display 1
  digitalWrite(a, LOW); //set a on 7 segment off
  digitalWrite(b, HIGH); //set b on 7 segment on
  digitalWrite(c, HIGH); //set c on 7 segment on
  digitalWrite(d, LOW); //set d on 7 segment off
  digitalWrite(e, LOW); //set e on 7 segment off
  digitalWrite(f, LOW); //set f on 7 segment off
  digitalWrite(g, LOW); //set g on 7 segment off
  delay(1000); //1 second delay

  // display 2
  digitalWrite(a, HIGH); //set a on 7 segment on
  digitalWrite(b, HIGH); //set b on 7 segment on
  digitalWrite(c, LOW); //set c on 7 segment off
  digitalWrite(d, HIGH); //set d on 7 segment on
  digitalWrite(e, HIGH); //set e on 7 segment on
  digitalWrite(f, LOW); //set f on 7 segment off
  digitalWrite(g, HIGH); //set g on 7 segment on
  delay(1000); //1 second delay

  // display 3
  digitalWrite(a, HIGH); //set a on 7 segment on
  digitalWrite(b, HIGH); //set b on 7 segment on
  digitalWrite(c, HIGH); //set c on 7 segment on
  digitalWrite(d, HIGH); //set d on 7 segment on
  digitalWrite(e, LOW); //set e on 7 segment off
  digitalWrite(f, LOW); //set f on 7 segment off
  digitalWrite(g, HIGH); //set g on 7 segment on
  delay(1000); //1 second delay

  // display 4
  digitalWrite(a, LOW); //set a on 7 segment off
  digitalWrite(b, HIGH); //set b on 7 segment on
  digitalWrite(c, HIGH); //set c on 7 segment on
  digitalWrite(d, LOW); //set d on 7 segment off
  digitalWrite(e, LOW); //set e on 7 segment off
  digitalWrite(f, HIGH); //set f on 7 segment on
  digitalWrite(g, HIGH); //set g on 7 segment on
  delay(1000); //1 second delay

  // display 5
  digitalWrite(a, HIGH); //set a on 7 segment on
  digitalWrite(b, LOW); //set b on 7 segment off
  digitalWrite(c, HIGH); //set c on 7 segment on
  digitalWrite(d, HIGH); //set d on 7 segment on
  digitalWrite(e, LOW); //set e on 7 segment off
  digitalWrite(f, HIGH); //set f on 7 segment on
  digitalWrite(g, HIGH); //set g on 7 segment on
  delay(1000); //1 second delay

  // display 6
  digitalWrite(a, HIGH); //set a on 7 segment on
  digitalWrite(b, LOW); //set b on 7 segment off
  digitalWrite(c, HIGH); //set c on 7 segment on
  digitalWrite(d, HIGH); //set d on 7 segment on
  digitalWrite(e, HIGH); //set e on 7 segment on
  digitalWrite(f, HIGH); //set f on 7 segment on
  digitalWrite(g, HIGH); //set g on 7 segment on
  delay(1000); //1 second delay

  // display 7
  digitalWrite(a, HIGH); //set a on 7 segment on
  digitalWrite(b, HIGH); //set b on 7 segment on
  digitalWrite(c, HIGH); //set c on 7 segment on
  digitalWrite(d, LOW); //set d on 7 segment off
  digitalWrite(e, LOW); //set e on 7 segment off
  digitalWrite(f, LOW); //set f on 7 segment off
  digitalWrite(g, LOW); //set g on 7 segment off
  delay(1000); //1 second delay

  // display 8
  digitalWrite(a, HIGH); //set a on 7 segment on
  digitalWrite(b, HIGH); //set b on 7 segment on
  digitalWrite(c, HIGH); //set c on 7 segment on
  digitalWrite(d, HIGH); //set d on 7 segment on
  digitalWrite(e, HIGH); //set e on 7 segment on
  digitalWrite(f, HIGH); //set f on 7 segment on
  digitalWrite(g, HIGH); //set g on 7 segment on
  delay(1000); //1 second delay

  // display 9
  digitalWrite(a, HIGH); //set a on 7 segment on
  digitalWrite(b, HIGH); //set b on 7 segment on
  digitalWrite(c, HIGH); //set c on 7 segment on
  digitalWrite(d, HIGH); //set d on 7 segment on
  digitalWrite(e, LOW); //set e on 7 segment off
  digitalWrite(f, HIGH); //set f on 7 segment on
  digitalWrite(g, HIGH); //set g on 7 segment on
  delay(1000); //1 second delay
}