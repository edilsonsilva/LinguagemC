#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int idades[5] = {10,45,20,21,19};
    int i;
    for(i = 0; i < 5 ; i++){
        if( idades[i] % 2 == 0){
            printf("%d\n",idades[i]);
        }
    }
   
    return 0;
}