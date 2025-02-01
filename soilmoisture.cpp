// declare variables for pins
const int sensorpin = A0;
const int sensorpower = 8;
const int LED1 = 2;
const int LED2 = 3;
const int LED3 = 4;

// variable for sensor reading
int sensor;

const int delayTime = 1000;

// "wet" and "dry" thresholds - these require calibration
int wet = 800;
int dry = 500;

void setup(){ // code that only runs once
  // set pins as outputs
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(sensorpower,OUTPUT);
 
  // initialize serial communication
  Serial.begin(9600);
}

void loop(){ // code that loops forever
  // power on sensor and wait briefly
  digitalWrite(sensorpower,HIGH);
  delay(10);
  // take reading from sensor
  sensor = analogRead(sensorpin);
  // turn sensor off to help prevent corrosion
  digitalWrite(sensorpower,LOW);
 
  // print sensor reading
  Serial.println(sensor);
 
  if(sensor>wet){
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,HIGH);
  }
  else if(sensor<dry){
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
  }
  else{
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,LOW);
  }
 
  // wait before taking next reading
  delay(delayTime);
 
}