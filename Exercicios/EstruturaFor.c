/**
 * @author Raul Cesar Mulerschat
 * @email raulzito737@gmail.com
 * @create date 2019-01-17 19:25:22
 * @modify date 2019-01-17 19:25:22
 * @desc [Diferentes tipos de usos da estrutura FOR]
 */
#include<stdio.h>
int main(){
    
   
    for ( j = x; j <= 4 * x * y; j += y / x ){//usando expressões no for
       
    for ( j = 2; j <= 80; j += 5 )// usando opreadores para controle no for

    for ( i = 1; i <= 100; i++ ) //pos-incremento  primeiro apresenta i depois incrementa 1
        
    for ( i = 100; i >= 1; i-- )//pos decremento    primeiro apresenta i depois decrementa 1

    for ( i = 1; i <= 100; ++i ) //pre-incremento  primeiro incrementa 1 a varivael i
        
    for ( i = 100; i >= 1; --i )//pre decremento  primeiro tira 1 da variavel i

    for ( i = 7; i <= 77; i += 7 )// incremento com operador de 7 em7 

    for ( i = 20; i >= 2; i -= 2 )// decremento com oprador de 2 me 2

    for ( número = 2; número <= 100; soma += número, número += 2 )// apresenta todos os numeros pares de 2 a 100

    for ( j = 2; j <= 17; j += 3 )//adquirindo sequencia pre definida de 3 em 3

    for ( j = 44; j >= 0; j -= 11 )// adquirindo sequencia pre definida de 11 em 11 começando em 44

    return 0;
}