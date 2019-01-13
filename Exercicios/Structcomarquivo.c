/* AUTOR RAUL CESAR MULERSCHAT....*/
/* CREATED IN  29/12/2018 ........*/
/* USO DE STRUCT E ARQUIVOS ......*/

#include <stdio.h> 
#include <string.h>
#include <conio.h>
#include <stdlib.h>
 
int main()
{
	struct estudante                                                                    /*inicia a Struct*/
	{
		char nome[50];
		float nota;
		
		
	};                                                                                /* final da Struct */
	FILE *fp;                                                         /*criação do ponteiro para arquivo */
	struct estudante estudante [50];                                                /* chamada da Struct */
	int i, quant;             /*variavel i para o controle e quant para definir quantos a loops sera dado*/
	char arquivo[50];  /* variavel arquivo para a criação e armazenamento doo nome do arquivo aser criado*/
	char txt [50]=".txt";



	system("color 2");

	printf("\n Quantos Alunos quer gravar? \n");
	scanf("%d",&quant);

	for (i = 0; i <quant; ++i)
	{
		system("cls");
		printf("digite o nome\n",i+1);
		fflush ( stdin );
		gets(estudante[i].nome);                       /* a inserção de dados em uma Struct funciona como*/ 
		 /*como em um vetor porém seguida de(.) da variavel desejada que foi declarada dentro dela mesmo */
		                                                  /* usa gets para  Strings e Scanf para nuemros */

		printf("digite a nota\n");
		fflush ( stdin );                                      /* fflush para aliviar o buffer de entrada*/
		scanf ("%f",&estudante[i].nota);
	}
	printf("Digite o nome do arquivo que voce quer guardar as notas e alunos\n");
	fflush ( stdin );
	gets(arquivo);

	strncat(arquivo,txt, 4);     /* usei strncat para concatenação do nome do arquivo mais o formato .txt */

    fp = fopen (arquivo, "w");                         /* chamada da abertura do arquivo  para escrita W */
    if (fp == NULL) {                                                /* verificação da criação do arquivo*/
       printf ("Houve um erro ao abrir o arquivo.\n");
       return 1;
    }
    for (i = 0; i <quant; i++)
    {
    	fprintf(fp, "aluno: %s, nota: %.1f;\n",estudante[i].nome,estudante[i].nota);
    }  
	                      /* usa-se fprint para a impressão em arquivos o F que antecede provem de "File"*/
    		
	system("cls");
	printf ("Arquivo %s criado com sucesso.\n",arquivo);
   	 
   	 fclose(fp);
	return 0;

}