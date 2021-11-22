#include <stdio.h>
 
int main(int argc, char *argv[]){
  float p1, p2, m;
  
  printf("Sua media final devera ser no minimo de 5!!!\n ");
  printf("Digite a nota da P1: ");
  scanf("%f", &p1);
 
  m = 5;
  p2 = (m*2) - p1;
 
  printf("Sua nota P2 devera ser no minimo de %.2f:\n ",p2);
  
  return 0;
}