#include <stdio.h>
#include <stdlib.h>

int main(){

    //if ternario
    int x,y,z;
    printf("Digite o valor de X \n");
    scanf("%d",&x);
    printf("Digite o valor de Y \n");
    scanf("%d",&y);

    z = x>y ? x : y;

    printf("O maior numero digitado foi %d \n",z);

    x>y ? printf("X e o maior numero foi  %d \n",x) : printf("Y e o maior numero foi %d \n",y);
    
    system("Pause \n");
    return 0;
}