#include <stdio.h> 
#include <string.h>
#include <conio.h>
#include <stdlib.h>
/*  Autor Raul Cesar   */
 
int main()
{
	struct estudante 
	{
		char nome[50];
		float nota;
		
		
	};
	FILE *fp;
	struct estudante estudante [50];
	int i, quant;
	char arquivo[50];
	char txt [50]=".txt";
	system("color 2");

	printf("\n Quantos Alunos quer gravar? \n");
	scanf("%d",&quant);

	for (i = 0; i <quant; ++i)
	{
		system("cls");
		printf("digite o nome\n",i+1);
		fflush ( stdin );
		gets(estudante[i].nome);

		printf("digite a nota\n");
		fflush ( stdin );
		scanf ("%f",&estudante[i].nota);
	}
	printf("Digite o nome do arquivo que voce quer guardar as notas e alunos\n");
	fflush ( stdin );
	gets(arquivo);

	strncat(arquivo,txt, 4);

    fp = fopen (arquivo, "w");
    if (fp == NULL) {
       printf ("Houve um erro ao abrir o arquivo.\n");
       return 1;
    }
    for (i = 0; i <quant; i++)
    {
    	fprintf(fp, "aluno: %s, nota: %.1f;\n",estudante[i].nome,estudante[i].nota);
    }
    		
	system("cls");
	printf ("Arquivo %s criado com sucesso.\n",arquivo);
   	 
   	 fclose(fp);
	return 0;

}