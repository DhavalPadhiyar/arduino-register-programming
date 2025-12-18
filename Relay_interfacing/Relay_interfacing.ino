
void setup()
{
  DDRD|=(1<<DDD0);// input for relay coil / output from arduino pin 0
  DDRD&=~(1<<DDD2);// input from button
}

void loop()
{
  if(PIND&(1<<PIND2))
  {
    PORTD|=(1<<PD0); 
  }
  else{
    PORTD&=(~(1<<PD0));
  }
}