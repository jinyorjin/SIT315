const int motionPin = 2;       
const int ledPin = 13;           

void setup() {
  pinMode(motionPin, INPUT);     
  pinMode(ledPin, OUTPUT);       
  Serial.begin(9600);            
}

void loop() {
  int motion = digitalRead(motionPin);  

  if (motion == HIGH) {
    digitalWrite(ledPin, HIGH);        
    Serial.println("Motion detected! LED ON");
  } else {
    digitalWrite(ledPin, LOW);         
    Serial.println("No motion. LED OFF");
  }

  delay(500);  
}
