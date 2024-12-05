#include <stdio.h>
#include <stdlib.h>

int main(){
    char simbolo;
    //switch    
    printf("Digite um simbolo de pontuacao \n");
    scanf("%c",&simbolo);
    switch (simbolo)
    {
    case '.':
       printf("Ponto final \n");
        break;
    case ',':
       printf("Virgula \n");
        break;
    case ':':
       printf("Dois pontos \n");
        break;
    case ';':
       printf("Ponto e Virgula \n");
        break;
    
    default:
           printf("Valor indefinido \n");
        break;
    }
}