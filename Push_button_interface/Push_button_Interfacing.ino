
void setup()
{
  DDRB|=(1<<DDB2);// inbuilt led as output
  DDRD&=(1<<DDD2);// set as input pin 
}

void loop()
{
  if(PIND&(1<<PIND2))
  {
    PORTB|=(1<<PB5); 
  }
  else{
    PORTB&=~(1<<PB5);
  }
}