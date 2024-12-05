#include <stdio.h>
#include <stdlib.h>
#define n 3
int main(){
    //array Multidimensional
    //quanto mais dimensoes mais o consumo de memoria
    int array[n][n][n];

    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            for(int c = 0;c<n;c++){
                printf("Digite o array multidimensional[%d][%d][%d] \n",i,j,c);
             scanf("%d",&array[i][j][c]);
        }
        }
    }
   
    printf("Fim do programa \n");
    system("pause");
    return 0;
}


