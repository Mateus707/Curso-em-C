#include <stdio.h>
#include <stdlib.h>

 int main(){

  //pos e pré incremento em C

  int numeroUm=9,numeroDois=9;
    // numeroUm++;
    // ++numeroDois;
    // printf("numero Um = %d \n",numeroUm);
    // printf("numero Dois = %d \n",numeroDois);
    // numeroUm--;
    // --numeroDois;
    // printf("numero Um = %d \n",numeroUm);
    // printf("numero Dois = %d \n",numeroDois);

    numeroDois = numeroUm++;
    // numeroDois = numeroUm;
    // numero++;
    numeroDois = numeroUm--;
    // numeroDois = numeroUm;
    // numero--;
    numeroDois = ++numeroUm;
    // numero++;
    // numeroDois = numeroUm;
    numeroDois = --numeroUm;
    // numero--;
    // numeroDois = numeroUm;

    system("Pause");
    return 0;
 }