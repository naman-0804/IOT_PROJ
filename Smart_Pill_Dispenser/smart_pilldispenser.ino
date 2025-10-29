#include <Servo.h>

// constants won't change
const int TRIG_PIN = 12;  // Arduino pin connected to Ultrasonic Sensor's TRIG pin
const int ECHO_PIN = 11;  // Arduino pin connected to Ultrasonic Sensor's ECHO pin
const int SERVO_PIN = 9;  // Arduino pin connected to Servo Motor's pin
const int DISTANCE_THRESHOLD = 9; // centimeters

Servo servo; // create servo object to control a servo

// variables will change
float duration_us, distance_cm;

void setup() {
  Serial.begin(4800);       // initialize serial port
  pinMode(TRIG_PIN, OUTPUT); // set arduino pin to output mode
  pinMode(ECHO_PIN, INPUT);  // set arduino pin to input mode
  servo.attach(SERVO_PIN);   // attaches the servo on pin 9 to the servo object
  servo.write(180);
}

void loop() {
  // generate 10-microsecond pulse to TRIG pin
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(100);
  digitalWrite(TRIG_PIN, LOW);

  // measure duration of pulse from ECHO pin
  duration_us = pulseIn(ECHO_PIN, HIGH);

  // calculate the distance
  distance_cm = 0.017 * duration_us;

  if (distance_cm < DISTANCE_THRESHOLD)
    servo.write(35);
  else
    servo.write(145);

  delay(500);
}
