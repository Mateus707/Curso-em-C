#include <stdio.h>
#include <stdlib.h>

int main(){
   
    //while
    int a,b;    
    
    printf("Digite o valor de a e depois o valor de b \n");
    scanf("%d %d",&a,&b);
    
        for (int c=a;c<b && c>0;c++)
        {
            printf("%d \n",c);
            
        }
         printf("Fim do programa \n");
    system("pause");
    return 0;
}