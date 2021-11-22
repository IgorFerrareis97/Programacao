#include <stdio.h>
 
int main(int argc, char *argv[]){
  float v1, v2, v3;
  
  printf("Digite o valor 1: ");
  scanf("%f", &v1);
 
  printf("Digite o valor 2: ");
  scanf("%f", &v2);

  printf("Digite o valor 3: ");
  scanf("%f", &v3);

 if (( v1 > v2) && (v1 > v3)) {
      printf("Maior valor %.2f",v1);
  }
  else if ((v2 > v1) && (v2 > v3))  {
      printf("Maior valor %.2f",v2);
  }

  else {
      printf("Maior valor %.2f", v3);
  }
       
 
  return 0;
}