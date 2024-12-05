#include <stdio.h>
#include <stdlib.h>

int main(){
  
    //while
    int a,b;    
    
    printf("Digite o valor de a e depois o valor de b \n");
    scanf("%d %d",&a,&b);
    
        while (a>b  && a>0)
        {
            printf("%d \n",a);
            a--;
        }
         printf("Fim do programa \n");
    system("pause");
    return 0;
}