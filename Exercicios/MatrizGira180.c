/*AUTOR RAUL CESAR MULERSCHAT */
/*29/12/2018..................*/
/*MATRIZES, GIRO DE 180º.......*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define tam 3      /* gosto de definir as matrizes usando define torna a programação posterior mais facil*/
int main(){

 int matriz [tam][tam];                                                               /* matriz principal*/
 int m[9] = {1,2,3,4,5,6,7,8,9};           /* vetor de alimentação para não usar Scanf em cada alimentação*/ 
 int l, c, k;
 int k=0;

 	for (l=0; l<tam; l++)
 	{
 		for (c=0; c<tam; c++)
 		{
 			printf("Linha %d ; coluna %d :\n",l, c );
 			
 			matriz[l][c] = m[k];                            /* alimetação a cada ciclo de loop */
 			k++;                                                /* incremento da variavel k */
 		}
 	}
 	printf("********** matriz original ***********\n");
 	for (l=0; l<tam; l++)                                                           /* loop normal */
 	{
 		for (c=0; c<tam; c++)
 		{
 			printf("%d \t",matriz[l][c]);
 			
 		}
 		printf("\n");
 	}
 	printf("********** matriz em 180 graus ***********\n");

	for ( l=tam-1; l>=0; l--)     /* loop invertido , com decremento, e -1 para não pegar endereço vazio */
 		{	
 			for ( c=tam-1; c>=0; c--)
 			{
 				printf("%d \t",matriz[l][c]);
 			}
 			printf("\n");
 		}
	return 0;
}