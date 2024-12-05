#include <stdio.h>
#include <stdlib.h>

 int main(){

  // Atribuição simplificada

  int x=10,y=10,z=2;
  x+=z;
  printf("valor de X = %d \n",x);
  y+=x;
  printf("valor de X = %d \n",y);
  z*=y;
  printf("valor de X = %d \n",z);
  x/=z;
  printf("valor de X = %d \n",z);
  x%=z;
  printf("valor de X = %d \n",z);

    system("Pause");
    return 0;
 }