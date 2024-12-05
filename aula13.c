#include <stdio.h>
#include <stdlib.h>

 int main(){
 int x; 
    //if
    printf("Digite o valor de x \n");
   
    scanf("%d \n",&x);

    if((x%2==0) && (x>0)){
        printf("E par e positivos \n");
    }
   

    printf("Fim do programa \n");
    system("Pause");
    return 0;
 }