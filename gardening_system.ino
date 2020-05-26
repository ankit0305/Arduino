int WATERPUMP = 13; 
int SOILSENSOR = A0;
int limit=400;
int val;

void setup() {
  Serial.begin(9600);
  pinMode(WATERPUMP,OUTPUT); 
  pinMode(SOILSENSOR,INPUT); 
}

void loop() { 
  val = analogRead(SOILSENSOR);  
  Serial.println("Analog Value : ");
  Serial.println(val);
  if(val > limit)  //change here for the logic 
  {
  digitalWrite(WATERPUMP,LOW); 
  }
  else
  {
  digitalWrite(WATERPUMP,HIGH); 
  }
  delay(400); 
}
