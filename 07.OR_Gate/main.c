#include <lpc214x.h>
int main(void)
{
     IO1DIR &= ~(1<<16);     // explicitly making P1.16 as Input
     IO0DIR |= (1<<10);        // Configuring P0.10 as Output
     IO1DIR &= ~(1<<15);      // explicitly making P1.15 as Input
     while(1)
     {
   if(!((IO1PIN & (1<<16))||(IO1PIN & (1<<15)))) 
    {
      IO0CLR |= (1<<10);    // drive P0.30 LOW, turn LED ON
    }else
   {
      IO0SET |= (1<<10);    // drive P0.30 HIGH, turn LED OFF
   }
     }
}