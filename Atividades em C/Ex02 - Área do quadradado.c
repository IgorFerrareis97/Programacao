#include <stdio.h>
 
// Função principal do programa
int main(int argc, char *argv[]){
 
  // Declaração de variáveis
  float aresta, area;
 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "aresta"
  printf("Digite o valor da aresta do quadrado: ");
  scanf("%f", &aresta);

 
  // Faz o calculo da area do triangulo
  area = aresta * aresta ;
 
  // Exibe o resultado final
  printf("A area do quadrado: %.2f", area);
 
  return 0;
}
 
