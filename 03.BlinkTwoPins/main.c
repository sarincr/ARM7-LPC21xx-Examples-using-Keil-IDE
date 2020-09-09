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
  PINSEL2 = 0x00000000;  //Configure the P1.16 for GPIO;
  IODIR1 =  0xffffffff ; //Configure the P1.16 pins as OUTPUT;
  while(1)
  {
    IOSET1 = (1<<16) ;
	IOSET1 = (1<<17) ;      
    delayms(1000);
	IOCLR1 = (1<<16);   
	IOCLR1 = (1<<17);   
    delayms(1000);

	}
}
