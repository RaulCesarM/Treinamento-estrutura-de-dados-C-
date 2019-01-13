/* AUTOR: RAUL CESAR MULERSCHAT ..........*/
/* RECEBE UMA PALAVRA.....................*/
/* DEVOLVE A PALAVRA DE TRAZ PARA FRENTE..*/
/* SUBSTITUI AS VOGAIS POR @..............*/


# include <stdio.h>                                            /* biblioteca para entrada e saida padrão */
# include <string.h>                                           /* necessario para manipulação de Strings */
# include <stdlib.h>                                                                /* biblioteca padrão */


int main ()                                                             /* inicio do programa principal */
{
  int tam, i, j;                           /* declaração da variaveis usadas nos laços de repetição loop */
  char nome[20];                                                          /* vetor nome de 20 caracteres */
  char vogais[10]= "aeiouAEIOU";                                             /* vetor contendo as vogais */
  printf("digite a string\n");                                                   /* saida padrão na tela */

  gets(nome);                                                                           /* recebe o nome */

  system("cls");                                                           /* limpa tela pertence a STLIB*/
  tam=strlen(nome);                                                       /*calcula o tamanho da palavra */
  printf("a sua string eh :\n");
   for (i=0; i<tam; i++)                            /* usa a variavel tam para definir o tamanho do loop */
    {         
      printf(" %c",nome[i]);                               /* imprime caracter a caracter,  char  a char */ 
    }
  printf("\nde traz para frente:\n");	
    for (i=tam-1; i>-1; i--)             /*  no loop usa-se o tamnho final como inicial invertendo o vetor*/
    {
    	printf(" %c",nome[i]);                          	/* imprime caracter a caracter,  char  a char */ 
    }
    printf("\nde traz para frente com @ nas vogais:\n");
    for (i=0; i<tam; i++)
    {      
      for (j=0; j<10; j++)
      {
        if (vogais[j]==nome[i])                /*  a verificação passo-a-passo se a string contem vogais */
        {
          nome[i]='@';                                                   /* substitição da vogal por  @  */
        }
      }
    }
     for (i=tam-1; i>-1; i--)
    {
    	printf(" %c",nome[i]);    	
    }
    printf("\n");

	return 0;
}                                                                         /* final do programa principal */