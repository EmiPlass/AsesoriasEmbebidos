#include <18F4620.h>
#fuses HS, NOFCMEN, NOIESO, PUT, NOBROWNOUT, NOWDT
#fuses NOPBADEN, NOMCLR, STVREN, NOLVP, NODEBUG
#use delay(clock=16000000)


void main (void)
{
   int16 conteod;
   set_tris_b(0x00);
   set_tris_c(0x00);
   //8 4 2 1 || 8 4 2 1
   while(1)
   {
   for(conteod=3;conteod<=256;conteod*=4)
   {
       output_d(conteod);
       delay_ms(200);
   }
   
   }
   
   
   
   
}
