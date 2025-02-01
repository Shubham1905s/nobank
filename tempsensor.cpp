float temp;         // Variable to store the analog sensor value 
int tempPin = A0;   // TMP36 sensor connected to analog pin A0 
float voltage;      // Variable to store the voltage 
float temperatureC; // Temperature in Celsius 
void setup() { 
   Serial.begin(9600); // Initialize Serial Communication 
} 
void loop() { 
   // Read the analog voltage from the sensor (0-1023) 
   temp = analogRead(tempPin); 
 
   // Convert the analog reading to voltage (assuming a 5V reference) 
   voltage = temp * (5.0 / 1024.0); 
   // Calculate temperature in Celsius 
   temperatureC = (voltage - 0.5) * 100.0; 
   // Display the results 
   Serial.print("The temperature is: "); 
   Serial.print(temperatureC); 
   Serial.println(" °C"); 
 
   delay(1000); // Wait 1 second before updating 
}