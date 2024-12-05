#include <stdio.h>
#include <stdlib.h>

int main(){
   
    //continue  
    int a,b;    
    
    printf("Digite o valor de a \n");
    scanf("%d",&a);
    printf("Digite o valor de b \n");
    scanf("%d",&b);
    
        while (a<=b)
        {
           
            a+=1;
           if(a%2==0){
            continue;
           }
            printf("%d \n",a);
        }
   
         printf("Fim do programa \n");
    system("pause");
    return 0;
}