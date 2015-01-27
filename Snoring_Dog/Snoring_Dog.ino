/*
  Program to trigger sounds on the SparkFun Sound Module for
  the project at https://www.youtube.com/watch?v=4Dpf62Ps48w
  This code is in the public domain.

  By Don Eduardo December 2014
  
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;
int sound = 5; //Play Next pin on Sound Module

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pins as an output.
  pinMode(led, OUTPUT); 
  pinMode(sound,OUTPUT);
  digitalWrite(sound,HIGH);
}

// the loop routine runs over and over again forever:
void loop() {
  // Trigger next sound effect
  digitalWrite(sound,LOW);
  delay(100);
  digitalWrite(sound,HIGH);
 
  delay(180000);               // wait a  bit for next one
}

