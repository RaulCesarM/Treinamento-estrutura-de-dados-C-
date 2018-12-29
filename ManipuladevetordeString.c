/* AUTOR: RAUL CESAR MULERSCHAT              */
/*											*/
/* RECEBE UMA PALAVRA,						*/
/* DEVOLVE A PALAVRA DE TRAZ PARA FRENTE,	*/
/* SUBSTITUI AS VOGAIS POR @ 				*/


# include <stdio.h>
# include <string.h>
# include <stdlib.h>


int main ()
{
  int tam, i, j;
  char nome[20];
  char vogais[10]= "aeiouAEIOU";
  printf("digite a string\n");

  gets(nome);

  system("cls");
  tam=strlen(nome);
  printf("a sua string eh :\n");
   for (i=0; i<tam; i++)
    {         
      printf(" %c",nome[i]);      
    }
  printf("\nde traz para frente:\n");	
    for (i=tam-1; i>-1; i--)
    {
    	printf(" %c",nome[i]);    	
    }
    printf("\nde traz para frente com @ nas vogais:\n");
    for (i=0; i<tam; i++)
    {      
      for (j=0; j<10; j++)
      {
        if (vogais[j]==nome[i])
        {
          nome[i]='@';
        }
      }
    }
     for (i=tam-1; i>-1; i--)
    {
    	printf(" %c",nome[i]);    	
    }
    printf("\n");

	return 0;
}