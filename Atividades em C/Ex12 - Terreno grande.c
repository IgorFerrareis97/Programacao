#include <stdio.h>
 
// Função principal do programa
int main(int argc, char *argv[]){
 
  // Declaração de variáveis
  float base, altura, area;
 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "base"
  printf("Digite o valor da base do retangulo: ");
  scanf("%f", &base);
 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "altura"
  printf("Digite o valor da altura do retangulo: ");
  scanf("%f", &altura);
 
  // Faz o calculo da area do retangulo
  area = base *altura ;
 
  if (area > 100){
      printf("Terreno Grande!!!");
  }
  else{
      printf("Area de: %.2f", area);
  }
  
  return 0;
}

 