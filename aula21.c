#include <stdio.h>
#include <stdlib.h>

int main(){
    char simbolo;
    //goto nao se usa mais 
    int i=0;
    inicio:
    if(i<5){
        printf("Numero %d \n",i);
        i++;
        goto inicio;
    }

    
   
         printf("Fim do programa \n");
    system("pause");
    return 0;
}