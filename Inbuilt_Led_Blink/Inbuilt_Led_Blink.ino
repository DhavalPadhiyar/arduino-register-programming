void setup()
{ // inbuilt led of controller is connected to the PB5 pin/ digital pin 13 of controller
  DDRB|=(1<<DDB5);// setting PB% as an output port
}

void loop()
{
  PORTB|=(1<<PB5); //PB5 as high
  delay(1000); //1s wait
  PORTB&=~(1<<PB5);//PB5 as low 
  delay(1000);// 1s wait

}
