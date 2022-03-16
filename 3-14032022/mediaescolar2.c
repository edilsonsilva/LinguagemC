/*Programa para calcular a situação
do aluno. neste programa teremos 
as  seguintes saídas:
    Aprovado, quando nota maior ou igual a 7
    Reprovado, quando nota menor ou igual a4
    Recuperação, quando nota entre maior que 4
        e menor que 7
        */
#include <stdio.h>

#define MEDAPROV 7.0
#define MEDREPOV 4.0

int main(){
    float na;
    printf("Digite a nota do aluno e tecler ENTER\n");
    scanf("%f",&na);
    
    if(na >= MEDAPROV){
        printf("O aluno está Aprovado");
    }
    else if(na <= MEDREPOV){
        printf("O aluno está reprovado");
    }
    else{
        printf("O aluno está em recuperação");
    }
    return 0;
}






int x = 55
float t = 120.30
char ts = 'f'

char nome[30] = "Hoje";

String nome = "Hoje";
















