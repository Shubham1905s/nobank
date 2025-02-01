// C++ code
void setup() { 
pinMode(13, OUTPUT); // Set pin 13 as an OUTPUT 
} 
void loop() { 
digitalWrite(13, HIGH); // Turn the LED ON 
delay(1000);            
// Wait for 1 second 
digitalWrite(13, LOW);  // Turn the LED OFF 
delay(1000);            
}



//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(11, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(13, LOW);
  digitalWrite(11, LOW);
  digitalWrite(11, HIGH);

  delay(1000); // Wait for 1000 millisecond(s)
}