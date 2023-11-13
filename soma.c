/*Programa que realiza a soma entre dois números*/
/*inclusão da biblioteca de cabeçalho de entrada e saída*/
#include <stdio.h>

/*função principal*/
int main(){
    int numero1, numero2, resultado;
    printf("Digite um número:\n");
    scanf("%d",&numero1);

    printf("Digite outro número:\n");
    scanf("%d",&numero2);

    resultado = numero1 + numero2;
    printf("O resultado da soma é %d\n\n",resultado);

    printf("Posição em memória da variável numero1 %p\n",&numero1);
    printf("Posição em memória da variável numero2 %p\n",&numero2);
    printf("Posição em memória da variável resultado %p\n",&resultado);

}