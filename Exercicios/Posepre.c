/* Figura 3.13: fig03_13.c
Pré-incrementando e pós-incrementando */
#include <stdio.h>

/* função main inicia a execução do programa */
int main(){
int c; 
int d;                                              

 /* demonstra pós-incremento */
    c = 5;                                                   
    d=10;   
    printf("POS INCREMENTO");                                                 
    printf( "%d\n", c ); 
    printf( "%d\n", c++ ); 
    printf( "%d\n \n", c ); 

/* demonstra pré-incremento */
    printf("PRE INCREMENTO");
    printf( "%d \n", d );                                            
    printf( "%d \n", ++d );                
    printf( "%d \n", d );                                          
    return 0; 
}                                                                             
