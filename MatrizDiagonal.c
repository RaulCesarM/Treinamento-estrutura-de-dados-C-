#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <conio.h>
#define tam 2


int main(){


	int matriz[tam][tam];
	int l, c;

	for (l=0; l<tam; l++)
	 {
	 	for (c=0; c<tam; c++)
	 	{
	 		printf("digite da linha%d e coluna %d :\n\n ",l+1, c+1);
	 		scanf("%d",&matriz[l][c]);
	 	}
	 }

	
	

	for (l=0; l<tam; l++)
	{
		
		for (c=0; c<tam; c++)
		{
				
			
			if (c==l) /* serve para comparar se os valores de linha e coluna são os mesmos */
			{
				
						
						for (c=l; c<tam; c++)/*começa com ovalor da linha e percorre a coluna */
						{
							printf("%d \t",matriz[l][c] );
							
						}
						c=l;/* reinicia o estado natural da coluna */
				
					

					
				
			}
			printf("\t");
		}
		printf("\n");
	}







	return 0;
}