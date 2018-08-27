
int input_pin = 2;
int state = 0;
int new_state = 0;
int led_pin = 4;
int on = 0;

void setup() {
  pinMode(4, OUTPUT);
  pinMode(input_pin, INPUT);
  state = digitalRead(input_pin);
}

void loop() {
  new_state = digitalRead(input_pin);
  // if button state change
  if (new_state != state){
    // if pressed
    if (new_state == 1)
    {
      // if led on, turn on, else turn off
      if (on){
        digitalWrite(led_pin,LOW);
        on = 0;
      }else{
        digitalWrite(led_pin,HIGH);
        on = 1;
      }

    }else{
    }
  }
  state = new_state;
}

