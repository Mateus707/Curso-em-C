#include <stdio.h>
#include <string.h>
void inverterString(char str[]) {
    int tamanho = strlen(str);
    int inicio = 0;
    int fim = tamanho - 1;
    while (inicio < fim) {
        // Troca os caracteres
        char temp = str[inicio];
         printf("String original: %c\n", temp);
        str[inicio] = str[fim];
        char letraInicio = str[fim];
        printf("String letra do fim sendo colocada no inicio: %c \n",letraInicio);
        str[fim] = temp;
        char letraFim = temp;
        printf("String letra do inicio sendo colocada no fim: %c \n", letraFim);
        
        inicio++;
        fim--;
    }
}
int main() {
    char minhaString[] = "Mateus";

    inverterString(minhaString);
    printf("String invertida: %s\n", minhaString);
    return 0;
}