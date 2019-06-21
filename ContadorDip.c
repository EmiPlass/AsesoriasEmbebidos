#include <18F4620.h>
#fuses HS, NOFCMEN, NOIESO, PUT, NOBROWNOUT, NOWDT
#fuses NOPBADEN, NOMCLR, STVREN, NOLVP, NODEBUG
#use delay(clock=16000000)


void main (void)
{
   set_tris_a(0x3f);
   set_tris_b(0x00);
   set_tris_c(0x00);
   set_tris_d(0x00);
   
   int conteoB=0x01, conteoC=0, conteoD=0, flagopcionB=0, flagopcionC=0, flagopcionD=0;
   int puertoA=input_a();
   //8 4 2 1 || 8 4 2 1
   while(1)
   {
      
      /*if(input(pin_a0)&&input(pin_a3))
      {
         flagopcionB=1;
         conteoB*=2;
         output_b(conteoB);
         delay_ms(100);
         
      }*/
      //PuertoB
      if((PuertoA&0x01)==0x01)
      {
         flagopcionB=1;
      }
      else
      {
         flagopcionB=0;
      }
      if(flagopcionB==1)
      {
         
  
      }
      
      
      
      
      
   }
   
   
   
}
