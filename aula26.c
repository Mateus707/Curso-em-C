#include <stdio.h>
#include <stdlib.h>
#define n 3
int main(){
    //inicialização do array com 0
    int array[n],array2[n],array3[n],soma=0;

     for(int i = 0;i<n;i++){
           printf("Digite os valores do array na posicao %d \n",i);
             scanf("%d",&array[i]);
     }
     for(int i = 0;i<n;i++){
            printf("Digite os valores do array2 na posicao %d \n",i);
             scanf("%d",&array2[i]);  
     }

    for(int i = 0;i<n;i++){
     array[i] = array[i] + array2[i];             
    }
    for(int i = 0;i<n;i++){
        printf("Apos a soma o valores do array na posicao %d e %d \n",i,array[i]);             
    }


      for(int i = 0;i<n;i++){
            printf("Digite os valores do array3 na posicao %d \n",i);
            scanf("%d",&array3[i]); 
            soma += array3[i];
     }
     printf("A soma do array 3 e de %d\n",soma);
 
   
    printf("Fim do programa \n");
    system("pause");
    return 0;
}


