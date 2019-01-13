
/* AUTOR:RAUL CESAR MULERSCHAT */
/* CREATED IN 29/12/2018*/
/* uso de switch, case para criação de menus */



#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>

void menu(){
	int op; 
	 float pterra;

	printf("planetas para serem analizados\n");
	printf("\n 1 para mercurio");
	printf("\n 2 para venus");
	printf("\n 3 para marte");
	printf("\n 4 para jupiter");
	printf("\n 5 para saturno");
	printf("\n 5 para urano");
	printf("\n escolha ");
	scanf("%d%*c", &op);
	printf("seu peso na terra ? \n");
	scanf("%f", &pterra);
	switch(op){
		case 1:
		printf("seu peso em mercurio %2.f kg\n",(pterra)*0.38);
		break;
		case 2:
		printf("seu peso em venus %2.f kg\n",(pterra)*0.91);
		break;
		case 3:
		printf("seu peso marte %2.f kg\n",(pterra)*0.38);
		break;
		case 4:
		printf("seu peso jupiter %2.f kg\n",(pterra)*2.34);
		break;
		case 5:
		printf("seu peso saturno %2.f kg \n",(pterra)*1.06);
		break;
		case 6:
		printf("seu peso urano %2.f kg \n",(pterra)*1.19);
		break;
		default:
		printf("opcao inexistente");
		break;
	}
}
int main()
{	
 menu();
	return 0;
}