// C++ code
//


void setup()
{
  
  Serial.begin(9600);
}

void loop()
{
  
  pinMode(7,OUTPUT);
  
  long duration;
  long distance;
  // variables to store duration and distance
  
  digitalWrite(7,LOW);
  delayMicroseconds(2);
  digitalWrite(7,HIGH);
  delayMicroseconds(10);
  digitalWrite(7,LOW);
  
  
  //set sensorPin as input to read
  pinMode(7,INPUT);
  
  duration = pulseIn(7,HIGH);//reading echo
  
  distance = duration*0.034/2;
  
  //Printing the distance
  
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  delay(1000);
}