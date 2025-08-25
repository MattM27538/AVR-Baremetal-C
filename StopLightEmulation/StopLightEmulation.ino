void setup() {
  //Turn on data direction registers for port D.
  DDRD |= (1 << DDD3);
  DDRD |= (1 << DDD5);
  DDRD |= (1 << DDD6);
}

//Controls green LED.
void portD3ToHighThenLow(){
  PORTD |= (1 << PORTD3);

  _delay_ms(4000);

  PORTD &= ~(1 << PORTD3); 
}

//Controls yellow LED.
void portD5ToHighThenLow(){
  PORTD |= (1 << PORTD5);

  _delay_ms(2000);

  PORTD &= ~(1 << PORTD5);
}

//Controls red LED.
void portD6ToHighThenLow(){
  PORTD |= (1 << PORTD6);

  _delay_ms(4000);

  PORTD &= ~(1 << PORTD6);
}
 
void loop() {
  portD3ToHighThenLow();

  portD5ToHighThenLow();

  portD6ToHighThenLow();
}
