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
  PINSEL2 = (0<<16);  //Configure the P1.16 for GPIO;
  IODIR1 = (1<<16); //Configure the P1.16 pins as OUTPUT;
  while(1)
  {
    IOSET1 = (1<<16);     //  P1.16 as High
    delayms(1000);
		IOCLR1 = (1<<16);     // P1.16 as low
    delayms(1000);
	}
}
