/**
 * @author Raul Cesar Mulerschat
 * @email raulzito737@gmail.com
 * @create date 2019-01-15 18:21:40
 * @modify date 2019-01-15 18:21:40
 * @desc [soma com increneto]
 */
#include<stdio.h>

int main(){
    int soma,x;
    x=1;
    soma=0;
   
    while( x<=10 ){
        soma +=x;
        ++x;
    }
    /* poderia ser assim 
     while( ++x<=10 ){
        soma +=x;
        
    }economizaria uma linha de comando
    .................*/

    printf("%d", soma);


    return 0;
}
