
void setup()
{
  DDRB|=(1<<DDB5);
  SREG|=(1<<7);// status register in mc(to set global interrupt or use the interrupt)
  EIMSK|=(1<<INT0)|(1<<INT1);// For external interrupt masking (to set pin 2 and 3 as interrupt pin)
  EICRA|=(1<<ISC10)|(1<<ISC11)|(1<<ISC00)|(1<<ISC01);//External interrupt control register (to decide weather falling edge or logical change will trigger interrupt)
  
}

void loop()
{
}

ISR(INT0_vect)// interrupt service routine for INT0(digital pin 2)
{
  PORTB|=(1<<PB5);
}

ISR(INT1_vect)// interrupt service routine for INT1(Digital pin 3)
{
  PORTB&=(~(1<<PB5));
}