// Copyright 2021 (c) Ryan Chung Kam Chung All rights reserved
//
// Created by Ryan Chung Kam Chung
// Created in February 2021
// This program makes the 13th pin (LED) blink with incremental delay

// Global variables
const int PIN = 13;


void setup() {                
  // Sets up the pins
  pinMode(PIN, OUTPUT);     
}


void loop() {
  // Loops infinitely after setup
  const int DELAYTIME = 1000, TIMEINCREMENT = 1000, BLINKTIME = 1000;
  
  digitalWrite(PIN, HIGH);
  delay(BLINKTIME);
  digitalWrite(PIN, LOW);
  delay(DELAYTIME);
}
