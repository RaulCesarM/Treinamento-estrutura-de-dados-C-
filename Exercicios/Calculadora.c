#include <stdio.h>
#include <math.h>
#include <string.h>
int main ()
{
	char resp [2];
	float a,b,s;


	printf("\n\n\n\t\t\t\t*************\n");
	printf("\t\t\t\t*CALCULADORA*\n");
	printf("\t\t\t\t*************\n");
	printf("\n\t\t\t\t+ para somar\n");
	printf("\n\t\t\t\t- para subtrair\n");
	printf("\n\t\t\t\t* para multiplicar\n");
    printf("\n\t\t\t\t/ para dividir \n");
    printf("\n\t\t\t\tdigite a opcao \n");
    gets(resp);

    if (!strcmp(resp,"+"))
    {
    	printf("digite o 1 numero \n");
    	scanf("%f", &a);
    	printf("digite o 2 numero \n");
    	scanf("%f", &b);
    	s=a+b;
    	printf("a resposta eh %f \n" ,s);
    }
    else {
    	if(!strcmp(resp,"-")){

    		printf("digite o 1 numero \n");
    		scanf("%f", &a);
    		printf("digite o 2 numero \n");
    		scanf("%f", &b);
    		s=a-b;
    		printf("a resposta eh %f \n" ,s);
 		}
    		else{
    			if (!strcmp(resp,"*")){
    				printf("digite o 1 numero \n");
    				scanf("%f", &a);
    				printf("digite o 2 numero \n");
    				scanf("%f", &b);
    				s=a*b;
    				printf("a resposta eh %f \n" ,s);
    			}
    				else{
    					if (!strcmp(resp,"*")){
    						printf("digite o 1 numero \n");
    						scanf("%f", &a);
    						printf("digite o 2 numero \n");
    						scanf("%f", &b);
    						s=a*b;
    						printf("a resposta eh %f \n" ,s);
    					}
    						else{
    							 if (!strcmp(resp,"/")){
    								printf("digite o 1 numero \n");
    								scanf("%f", &a);
    								printf("digite o 2 numero \n");
   									 scanf("%f", &b);
  									 s=a/b;
    								printf("a resposta eh %f \n" ,s);    							  						
    							}

    						}


    				}

    		} 


    }

   
    
    
	
	return 0;
}