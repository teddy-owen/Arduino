
int pir = 2;
int led = 10;
int motion = 0;

void setup(){
	pinMode(pir, INPUT);
	pinMode(led, OUTPUT);
}

void loop(){
	motion = digitalRead(pir);
	if (motion){
		digitalWrite(led,HIGH);
	}else{
		digitalWrite(led,LOW);
	}
}