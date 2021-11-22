#include <stdio.h>
 
int main(int argc, char *argv[]){
  float v1, v2;
  
  printf("Digite o valor 1: ");
  scanf("%f", &v1);
 
  printf("Digite o valor 2: ");
  scanf("%f", &v2);
 
 if ( v1 == v2){
      printf("Valores iguais");
  }
   else if (v1 > v2) {
      printf("Maior valor %.2f", v1);
  }
  else{
      printf("Maior valor %.2f", v2);
  }
  
  return 0;
}