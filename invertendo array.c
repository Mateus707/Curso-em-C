#include <stdio.h>
#include <string.h>
void inverterString(char str[]) {
    int tamanho = strlen(str);
    int inicio = 0;
    int fim = tamanho - 1;
    while (inicio < fim) {
        // Troca os caracteres
        char temp = str[inicio];
        
        str[inicio] = str[fim];
        char letraInicio = str[fim];
        
        str[fim] = temp;
        char letraFim = temp;
        
        
        inicio++;
        fim--;
    }
}
int main() {
    char minhaString[] = "GABRIEL E VIADO";

    inverterString(minhaString);
    printf("String invertida: %s\n", minhaString);
    return 0;
}