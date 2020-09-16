#include<LPC214x.h>     // Define LPC2148 Header File
#define led (1<<2)      // led macro for pin 2 of port0
#define sw (1<<10)      // sw  macro for pin 2 of port0

int main(void)
{
   unsigned int x;

   IO0DIR|= (~sw);  //Configure P0.10  as Input
   IO0DIR|= led;    //Configure P0.2 as Output
 
   while(1)
      {
                    x=IOPIN0 & sw;       // save status of switch in variable x
                    if(x==sw)            // if switch open
                        {
                            IOCLR0|=led ;    // LED off
                            }
                    else                   // if switch close
                        {
                            IOSET0|=led ;    // LED ON
                            }
                }
} 