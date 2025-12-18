ISR(TIMER1_OVF_vect)
{
  PORTB^= (1 << PB5);  // Toggle LED on pin 13
  TCNT1= 49910;        // Reload timer
}
void setup()
{
  DDRB |= (1 << DDB5);     // PB5 as output

  // Enable Timer1 overflow interrupt
  TIMSK1 |= (1 << TOIE1);

  // Normal mode (TO SET THE MODE OF TIMER)
  TCCR1A &= ~((1 << WGM10) | (1 << WGM11));
  TCCR1B &= ~((1 << WGM12) | (1 << WGM13));

  // Prescaler = 1024
  TCCR1B |= (1 << CS12) | (1 << CS10);
  TCCR1B &= ~(1 << CS11);

  // Load timer value for 1 second delay
  TCNT1 = 49910;

  sei();   // Enable global interrupts
}

void loop()
{
  
}


