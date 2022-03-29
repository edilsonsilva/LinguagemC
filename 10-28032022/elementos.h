#include <stdio.h>
#include <stdlib.h>

void separador(){
    printf("\n");
        for(int i = 0 ; i <= 100 ; i++){
            printf("=");
        }
    printf("\n");
}
void quebraLinha(int qtdVezes){
    
    int i = 1;
    while( i <= qtdVezes){
        printf("\n");
        i++;
    }
}