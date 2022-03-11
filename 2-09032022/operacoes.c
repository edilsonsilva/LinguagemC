#include <stdio.h>
int main(){
    int n1,n2,soma,subtrair,dividir,multiplicar, resto;
    printf("Digite um número e tecle Enter");
    scanf("%d",&n1);

    printf("Digite outro númeor e tecle Enter");
    scanf("%d",&n2);

    soma = n1+n2;
    subtrair = n1 - n2;
    dividir = n1 / n2;
    multiplicar = n1 * n2;
    resto = n1 % n2;

    printf("O resultado da soma é %d",soma);
    printf("O resultado da subtração é %d",subtrair);
    printf("O resultado da divisão é %d",dividir);
    printf("O resultado da multiplicação é %d",multiplicar);
    printf("O resultado do resto é %d",resto);

    return 0;
}