

void setup() {
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  digitalWrite(12, HIGH);
  delay(100);   
  digitalWrite(11, HIGH);
  delay(100);   
  digitalWrite(10, HIGH);
  delay(100);           
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  delay(1000); 
}

