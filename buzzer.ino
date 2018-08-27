
int buzzer = 2;

void setup(){
	pinMode(buzzer, OUTPUT);
}

void loop(){
	tone(buzzer, 1000);
}