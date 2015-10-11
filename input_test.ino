int ch1; // Here's where we'll keep our channel values


void setup() {

  pinMode(5, INPUT); // Set our input pins as such

  Serial.begin(9600); // Pour a bowl of Serial

}

void loop() {

  ch1 = pulseIn(5, HIGH, 25000); // Read the pulse width of 


  Serial.print("Channel 1:"); // Print the value of 
  Serial.println(ch1);        // each channel



  delay(100); // I put this here just to make the terminal 
              // window happier
}
