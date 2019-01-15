/**
 * @author Raul Cesar Mulerschat
 * @email raulzito737@gmail.com
 * @create date 2019-01-13 23:06:01
 * @modify date 2019-01-13 23:06:01
 * @desc [OPERADOR TERNARIO "?"]
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <string.h>


int main(){
    float nota ;
    printf("digite nota\n");
    scanf("%f",&nota);
    printf( "%s\n", nota >= 6.0 ? "Aprovado" : "Reprovado" );


    printf("digite outra nota\n");
    scanf("%f",&nota);
    nota >= 60 ? printf( "Aprovado\n" ) : printf( "Reprovado\n" );
    return 0;
}