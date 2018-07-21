
int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin = 13;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor
int threshhold = 850;       // variable for the threshold

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  delay(1); 

  if (sensorValue > threshhold){ // if the sensorValue is bigger than 700
  
  digitalWrite(ledPin, HIGH); //LED turns on
  
  }else{
  digitalWrite(ledPin, LOW); //LED turns on
  
  }
}

