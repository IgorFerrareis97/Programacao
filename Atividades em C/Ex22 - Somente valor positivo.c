#include <stdio.h>
 
int main(int argc, char *argv[]){
  
  int Vp;

  printf("Digite um numero POSITIVO!!\n ");
  scanf("%i", &Vp);

  
  
 while (Vp <= 0) {
  printf("ERRO!!! Digite um numero POSITIVO!!!!!! ");
  scanf("%i", &Vp);
  }

 printf("Parabens voce digitou um numero POSITIVO!!!");

  return 0;
}