
/* AUTOR : RAUL CESAR MULERSCHAT.............*/
/* 29/12/2018................................*/
/* MATRIZ DIAGONAL COM IMPRESSÃO TABULADA....*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>
#define tam 2 								/* definir as varivais no inicio facilitam a manipulação */

int main(){
	int matriz[tam][tam];							/* tamnho da matriz é definido pela variavel tam */
	int l, c;
	for (l=0; l<tam; l++)
	 {
	 	for (c=0; c<tam; c++)
	 	{
	 		printf("digite da linha%d e coluna %d :\n\n ",l+1, c+1);
	 		scanf("%d",&matriz[l][c]);			 		/* scaneia a matriz absorvendo as informações */
	 	}
	 }
	system("cls");

	for (l=0; l<tam; l++)
	{	
		for (c=0; c<tam; c++)
		{			
			
			if (c==l)           /* serve para comparar se os valores de linha e coluna são os mesmos */
			{							
				for (c=l; c<tam; c++)               /*começa com ovalor da linha e percorre a coluna */
				{
					printf("%d \t",matriz[l][c] );							
				}
				c=l;                                         /* reinicia o estado natural da coluna */			
			}
			printf("\t");
		}
		printf("\n");
	}
	return 0;
}