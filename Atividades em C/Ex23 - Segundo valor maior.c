#include <stdio.h>
 
int main(int argc, char *argv[]){
  
  int v1,v2;

  printf("Digite um numero \n ");
  scanf("%i", &v1);

  printf("Digite um numero maior que o primeiro digitado \n ");
  scanf("%i", &v2);

  while (v2 <= v1) {
  printf("ERRO!!! Digite um numero MAIOR que o anterior!!!!!! ");
  scanf("%i", &v2);
  }

 printf("Parabens voce digitou um numero MAIOR que o anterior!!!");

  return 0;
}