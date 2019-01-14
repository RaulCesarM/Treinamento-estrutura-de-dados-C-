/**
 * @author Raul Cesar Mulerschat
 * @email raulzito737@gmail.com
 * @create date 2019-01-13 23:06:01
 * @modify date 2019-01-13 23:06:01
 * @desc [INDICE DE MASSA CORPORAL]
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <string.h>



int main(){
    float IMC;
    float  PESO;
    float   ALTURA;
    float  ALTURA2;    
    char SIT [10];
    

    printf("Digite  seu peso\n");
    scanf ("%f", &PESO);
    printf("Digite sua altura\n");
    scanf ("%f", &ALTURA);
    ALTURA2 = ALTURA * ALTURA;
    
    IMC = PESO /ALTURA2;

    if (IMC < 18.5 ) strcpy(SIT, "Abaixo");     
  
      else
            if (IMC > 18.5 && IMC  < 24.9 ) strcpy(SIT, "Ideal");
      
            
        else
              if (IMC >25 && IMC < 29.9)strcpy(SIT, "Acima");
              
           
             else  
                  if (IMC  > 30 )strcpy(SIT, "Obeso");            
                

    


    system("cls");
    printf("*************************************\n");
    printf("*Informacoes do ministerio da saude *\n");
    printf("*Abaixo do peso: menor que 18,5     *\n");
    printf("*Normal: entre 18,5 e 24,9          *\n");
    printf("*Acima do peso: entre 25 e 29,9     *\n");
    printf("*Obeso: 30 ou mais                  *\n");
    printf("*************************************\n");

    printf("*Seu IMC eh %.2f Sua situacao %s *\n", IMC, SIT);

    printf( "%d", 'A' );
    return 0;
}