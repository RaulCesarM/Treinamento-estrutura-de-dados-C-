/**
 * @author Raul Cesar Mulerschat
 * @email raulzito737@gmail.com
 * @create date 2019-01-17 21:04:07
 * @modify date 2019-01-17 21:04:07
 * @desc [A forma correta de trabalhar com situação monetaria]
 */
#include<stdio.h>
#include<math.h>

int main(){
    double valor;
    double saldoatual = 1000.0;
    double taxa =.05;
    int ano;

    printf("%4s%21s \n", "ano", " valor na conta");

    for(ano=1; ano<=10;ano++){

        valor=saldoatual*pow(1.0 + taxa,ano);
        printf("%4d%21.2f\n", ano, valor); // o valor 4 antes do d define aonde o int sera impresso.
///o mesmo acontece com 21 antes do float
    }
    return 0;

}
