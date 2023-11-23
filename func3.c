#include<stdlib.h>
#include "mat.h"

int main(){
    system("clear");
    int num[10] = {10,35,63,12,54,11,27,58,45,19};
    printf("A soma dos valores é %d\n",soma(num,10));
    printf("O maior valor é %d\n",max(num,10));
    return 0;
};

