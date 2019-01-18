
/*AUTOR: RAUL CESAR MULERSCHAT */
/* BARRA DE PROGRESSO..........*/
/*29/12/2018...................*/

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>




int main (void)
{    
   int l, c;
   system("color 9");                                  /* definindo a cor da Barra neste caso usei a azul*/
   system ("cls");                                                                          /* limpa tela*/
   
   printf ("\n\n barra \n\n");          
     
   for (l = 0; l < 50; l++)
   {                
           
      printf ("  %d%%\r", l+l+2);                                             /* %d imprime o valor de l */ 
                                              /* como no caso defini para ser de 2 em 2 pode ser alterado*/
                                               /* o \r é o retorno do carro da posição atual para inicial*/
      fflush (stdout);                                                       /* alivio do buffer de saida*/                      
         
      for (c = 0; c < l; c++)
      {
         if (!c)                                                      /* negação de coluna então espaço, */
           printf ("             ");
           
         printf ("%c", 219);       /* imprime o caracter 219 que é um quadrado em ASCII extendida do DOS */
         Sleep(1);
      }                      
   }        
   return 0;
}