#include <stdio.h>
#include <stdlib.h>
#define n 3
int main(){

    int matriz[n][n];

    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
             printf("Digite matriz[%d][%d] \n",i,j);
             scanf("%d",&matriz[i][j]);
        }
    }
   
    printf("Fim do programa \n");
    system("pause");
    return 0;
}

//matriz: array com duas dimensoes
//forma de declarar
//tipo nome_array [nro_linhas][nmr_colunas];
