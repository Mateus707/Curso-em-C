#include <stdio.h>
#include <stdlib.h>
#define n 5
int main(){

    float notas_alunos[n],media=0.0;
    for(int i=0;i<n;i++){
        printf("Digite o valor da nota do aluno %d \n",i+1);
        scanf("%f",&notas_alunos[i]);
        media += notas_alunos[i];
    }
    media /= n; 
    for(int i=0;i<4;i++){
        printf("A media dos alunos e de %f \n",media);
        if(notas_alunos[i]>media){
            printf("A nota do aluno %d que tirou a nota %f supera a media %f \n",i+1,notas_alunos[i],media);
        }
    }
    printf("Fim do programa \n");
    system("pause");
    return 0;
}

//array: conjunto de variaveis do mesmo tipo com o mesmo nome 
//forma de declarar
//tipo nome_array [tamanho];
