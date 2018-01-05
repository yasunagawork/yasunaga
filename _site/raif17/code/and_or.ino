// Using && and ||
// Connect an LED to pin 13 (or use built in LED)
// Connect a potentiometer to Analog pin 0 and another on Analog pin 1

int potPin1 = 0;
int potValue1 = 0;

int potPin2 = 1;
int potValue2 = 0;

int ledPin1 = 13;

void setup(){
  pinMode(ledPin1, OUTPUT);
}

void loop(){

  // Only read potentiometers once per loop
  potValue1 = analogRead(potPin1);
  potValue2 = analogRead(potPin2);

  // Use the data stored in the variable many times throughout loop()

  // if BOTH conditions are met
  if (potValue1 > 512 && potValue2 > 512){
    digitalWrite(ledPin1, HIGH);
  }

  // if ONE condition is met
  if (potValue1 < 512 || potValue2 < 512){
    // Blink LED based on input from potentiometer.
    digitalWrite(ledPin1, HIGH);
    delay(1000);

    digitalWrite(ledPin1, LOW);
    delay(1000);
  }
}


