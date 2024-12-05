#include <stdio.h>
#include <stdlib.h>

int main()  {

    char letra = 'M'; // Para guardar caracteres
    int valorInteiro = 4; // Para guardar números inteiros
    float valor = 5.25; // Para guardar números reais ou valores em ponto flutuante
    double valorDouble = 5.0e3; // Para guardar números reais com maior precisão

    printf("Meu programa \n"); // Corrigido para "programa"
    printf("%c \n", letra); // Para imprimir a variável do tipo caractere
    printf("%d \n", letra); // Para imprimir o valor numérico do caractere (ASCII)
    printf("%d \n", valorInteiro); // Para imprimir uma variável do tipo inteiro
    printf("%f \n", valor); // Para imprimir uma variável do tipo número real
    printf("%f \n", valorDouble); // Para imprimir o valor de valorDouble (com precisão maior)


    printf("Letra %c, inteiro %d \n",letra,valorInteiro+20);

    system("pause"); // Pausa para manter a janela aberta
    return 0;
}
