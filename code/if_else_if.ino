// Using else if
// Connect an LED to pin 13 (or use built in LED)
// Connect a potentiometer to Analog pin 0

int potPin1 = 0;
int potValue1 = 0;
int delayAmount = 0;
int ledPin1 = 13;

void setup(){
  pinMode(ledPin1, OUTPUT);
}

void loop(){

  // Only read potentiometer once per loop
  potValue1 = analogRead(potPin1);

  // Use the data stored in the variable many times throughout loop()

  //if/else if/else checks the conditions in order. When one is true, it no longer checks the rest.
  if(potValue1 > 1000){
    delayAmount = 250;
  }
  else if(potValue1 > 800){
    delayAmount = 500;
  }
  else if(potValue1 > 600){
    delayAmount = 1000;
  }
  else if(potValue1 > 400){
    delayAmount = 1500;
  }
  else{
    delayAmount = 2000;
  }
  
  // Blink LED based on input from potentiometer.
  digitalWrite(ledPin1, HIGH);
  delay(delayAmount);
  
  digitalWrite(ledPin1, LOW);
  delay(delayAmount);
  
}

