void setup()
{
  // FAST PWM 10-BIT MODE 
  TCCR1A |= (1 << WGM10) | (1 << WGM11);
  TCCR1B &= ~(1 << WGM12);
  TCCR1B &= ~(1 << WGM13);

  // NON-INVERTING MODE ON OC1A
  TCCR1A |= (1 << COM1A1);
  TCCR1A &= ~(1 << COM1A0);

  // CLEAR PRESCALER BITS
  TCCR1B &= ~((1 << CS12) | (1 << CS11) | (1 << CS10));

  // PRESCALER = 64
  TCCR1B |= (1 << CS11) | (1 << CS10);

  // OC1A OR COMPARE RESISTOR PIN 9 AS OUTPUT
  DDRB |= (1 << DDB1);

  // INITIAL DUTY STARTS FROM 0
  OCR1A = 0;
}

unsigned int i = 0;

void loop()
{
  // FADE UP
  for (i = 0; i <= 1023; i++)
  {
    OCR1A = i;
    delay(2);
  }

  delay(2000);

  // FADE DOWN
  for (i = 1023; i > 0; i--)
  {
    OCR1A = i;
    delay(2);
  }

  delay(2000);
}
