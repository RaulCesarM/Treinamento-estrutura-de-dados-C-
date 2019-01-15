/**
 * @author Raul Cesar Mulerschat
 * @email raulzito737@gmail.com
 * @create date 2019-01-15 17:53:46
 * @modify date 2019-01-15 17:53:46
 * @desc [potencia com incremento]
 */


#include<stdio.h>

int main(){
    int x,y,i,potencia;
    i=1;
    potencia=1;
    printf(" digite o valor\n");
    scanf("%d",&x);
    printf(" digite a potencia\n");
    scanf("%d",&y);
    while( i<=y ){
        potencia *=x;
        i++;
    }

    printf("%d", potencia);


    return 0;
}
