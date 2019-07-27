#include<lpc214x.h> 

void delayms(unsigned int count)
{
  unsigned int j,i;
  for(j=0;j<count;j++)
  {
    for(i=0;i<3000;i++);
  }
}



int main()
{
  PINSEL2 = 0x000000;  //Configure the PORT P1 Pins for GPIO;
  IODIR1 = 0xffffffff; //Configure the PORT P1 pins as OUTPUT;
  while(1)
  {
		IOSET1 = 0xffffffff;     // Make all the Port pins as high  
    delayms(1000);
		IOCLR1 = 0xffffffff;     // Make all the Port pins as low  
    delayms(1000);
	}
}
