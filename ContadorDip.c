#include <18F4620.h>
#fuses HS, NOFCMEN, NOIESO, PUT, NOBROWNOUT, NOWDT
#fuses NOPBADEN, NOMCLR, STVREN, NOLVP, NODEBUG
#use delay(clock=16000000)


void main (void)
{
   int16 conteod;
   int16 conteoc;
   int16 conteob;
   int contador;
   //8 4 2 1 || 8 4 2 1
   while(1)
   {
   
   //Puerto B
   for(conteob=1; conteob<=128 ; conteob*=2)
   {
      output_b(conteob);
      delay_ms(200);
   }
   //Puerto C
   for(conteoc=128; conteoc>=1; conteoc/=2)
   {
      output_c(conteoc);
      delay_ms(200);
   }
   
   //Puerto D
   for(conteod=3;conteod<=256;conteod*=4)
   {
       output_d(conteod);
       delay_ms(200);
   }
   
   }
   
   
   
   
}
