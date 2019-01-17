#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "Portuguese");
int soma =0;
int numero;

    for (numero =2; numero<=100; numero +=2){//incrmenta o contador numero de 2 em 2 que seri a mesma coisa que numero= numero +2
    soma=soma+numero; //adiciona numero a soma seria mesma coisa que soma=soma +numero
    }
    printf("Soma é %d\n", soma);

    return 0;
}