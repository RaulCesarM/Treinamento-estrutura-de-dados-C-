#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define tam 3

int main(){

 int matriz [tam][tam];
 int m[9] = {1,2,3,4,5,6,7,8,9};
 
 int l, c, k;
 k=0;
 	for (l=0; l<tam; l++)
 	{
 		for (c=0; c<tam; c++)
 		{
 			printf("digite o elemento Linha %d  e coluna %d da matriz\n",l, c );
 			
 			matriz[l][c] = m[k];
 			k++;
 		}
 	}
 	printf("********** matriz original ***********\n");
 	for (l=0; l<tam; l++)
 	{
 		for (c=0; c<tam; c++)
 		{
 			printf("%d \t",matriz[l][c]);
 			
 		}
 		printf("\n");

 	}
 	

 	printf("********** matriz em 180 graus ***********\n");

	for ( l=tam-1; l>=0; l--)
 		{
 			
 			for ( c=tam-1; c>=0; c--)
 			{

 				printf("%d \t",matriz[l][c]);
 			}
 			printf("\n");
 		}
	return 0;
}