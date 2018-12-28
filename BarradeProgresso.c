#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
 
int main (void)
{    
   int l, c;
   system("color 9");
   system ("cls");
   
   printf ("\n\n barra \n\n");          
     
   for (l = 0; l < 50; l++)
   {                
           
      printf ("  %d%%\r", l+l+2);
      fflush (stdout);                      
         
      for (c = 0; c < l; c++)
      {
         if (!c)
           printf ("             ");
           
         printf ("%c", 219);
         Sleep(1);
      }                      
   }
         
   
}