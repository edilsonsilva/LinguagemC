#include<stdio.h>
#include<stdlib.h>

int main(){
    system("clear");
    int contar, num;
    
    printf("Digite o número da tabuada\n");
    scanf("%d",&num);

    for(contar = 1 ; contar <= 10 ; contar++){

        printf("%d x %d = %d\n",num,contar,num*contar);
        
    }
return 0;

}