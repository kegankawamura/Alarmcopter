#include <Wire.h> 

int inChan = 8;
int ch1 = 3;
int ch2 = 9;
int ch3 = 5;
int ch4 = 6 ;


void setup() {

  pinMode(inChan, INPUT); // Set our input pins as such
  pinMode(ch1, OUTPUT);
  pinMode(ch2, OUTPUT);
  pinMode(ch3, OUTPUT);
  pinMode(ch4, OUTPUT);

  Serial.begin(9600); 
}

void loop() {

  inChan = pulseIn(8, HIGH, 25000);

  delay(30);
  analogWrite(ch1, (inChan-1000) / 4);
  analogWrite(ch2, (inChan-1000) / 4);
  analogWrite(ch3, (inChan-1000) / 4);
  analogWrite(ch4, (inChan-1000) / 4);

//  inChan = analogRead(8);   // read the input pin
//  analogWrite(ch1, inChan);
//  analogWrite(ch2, inChan);
//  analogWrite(ch3, inChan);
//  analogWrite(ch4, inChan);


//  Serial.print("inChan:"); // Print the value of 
//  Serial.println(inChan);        // each channel



  
}
