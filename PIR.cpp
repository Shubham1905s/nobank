// Define pins
int pirPin = 2;    // PIR sensor is connected to digital pin 2
int ledPin = 13;   // LED is connected to digital pin 13

void setup() {
  pinMode(pirPin, INPUT);  // Set PIR sensor pin as input
  pinMode(ledPin, OUTPUT); // Set LED pin as output
  Serial.begin(9600);      // Initialize serial monitor for debugging
}

void loop() {
  int motionDetected = digitalRead(pirPin); // Read PIR sensor status

  if (motionDetected == HIGH) {  // If motion is detected
    digitalWrite(ledPin, HIGH); // Turn on LED
    Serial.println("Motion Detected!"); // Print to Serial Monitor
  } else {
    digitalWrite(ledPin, LOW);  // Turn off LED
  }

  delay(100); // Small delay for stability
}