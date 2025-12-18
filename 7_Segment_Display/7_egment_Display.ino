void setup() {
  DDRD=0XFF;// PD0 To PD7 = Output
}
unsigned char _7Seg[10]={0X3F,0X06,0X5B,0X4F,0X66,0X6D,0X7C,0X07,0X7F,0X6F},i=0;// 0 To 9 Pattern in hex
void loop() {
  for(i=0;i<10;i++)// loop To show each character on 7seg 
  {
    PORTD=_7Seg[i];
    delay(1000);
  }
}
S