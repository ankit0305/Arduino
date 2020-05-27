int LED=2;
int BUTTON=4;
int buttonState=0;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  
  buttonState=digitalRead(BUTTON);
  
  if(buttonState==HIGH)
  {
  digitalWrite(LED, HIGH);
  Serial.println("LED ON");
  }
  else
  {
    digitalWrite(LED, LOW);
    }
}
