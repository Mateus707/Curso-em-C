#include <stdio.h>
#include <stdlib.h>

    int main(){
        // char letra;
         int nint;
         float nfloat;
        // double ndouble;
        // scanf("Tipos de entradas",variaveis);
        // scanf("%c",&letra);
        // scanf("%d",&nint);
        // scanf("%f",&nfloat);
        // scanf("%f",&ndouble);

        // printf("Digite um numero \n");
        // scanf("%d",&nint);
        // printf("O numero digitado foi %d \n",nint);

        printf("Digite um numero \n");
         scanf("%d%f",&nint,&nfloat);
         printf("Os numeros digitados foram %d e %f \n",nint,nfloat);
        system("pause");
        return 0;
    }