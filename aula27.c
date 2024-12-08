#include <stdio.h>
#include <stdlib.h>
#define n 3
int main(){
    //maior valor do array
    int array[n],maiorValor;
    for(int i = 0;i<n;i++){
      printf("Escreva o valor do array na posicao %d\n",i+1);
      scanf( "%d",&array[i]);
    }
    maiorValor = array[0];

    for(int i = 0;i<n;i++){
        if(array[i]>maiorValor) {
          printf("O valor do array e = %d e ele e maior que %d\n",array[i],maiorValor);
          maiorValor = array[i];
        }
    }

    //ou
    //    int array[6]={0,1,2,30,23,200},maiorValor=0;
    // for(int i = 0;i<6;i++){
    //     if(array[i]>maiorValor) maiorValor = array[i];
    // }
    printf("Agora o maior valor e o numero  %d\n",maiorValor);
    printf("Agora o maior valor e o numero  %d\n",maiorValor);
    printf("Fim do programa \n");
    system("pause");
    return 0;
}


