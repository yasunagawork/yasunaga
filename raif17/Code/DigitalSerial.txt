
int ledpin = 13;

void setup (){
  pinMode(ledpin, OUTPUT);
  Serial.begin(9600);
}

void loop (){

  int outstate = HIGH;
  digitalWrite(ledpin, outstate);
  Serial.println(outstate);
  delay(1000);
  

  outstate = LOW;
  digitalWrite(ledpin, outstate);
  Serial.println(outstate);
  delay(2000);
  
  
}
