#include <stdio.h>
 
// Função principal do programa
int main(int argc, char *argv[]){
 
  // Declaração de variáveis
  float valor1, valor2, valor3, valor4, media;
 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "valor1"
  printf("Digite o valor 1: ");
  scanf("%f", &valor1);
 
 // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "valor2"
  printf("Digite o valor 2: ");
  scanf("%f", &valor2);

// Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "valor3"
  printf("Digite o valor 3: ");
  scanf("%f", &valor3);

  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "valor4"
  printf("Digite o valor 4: ");
  scanf("%f", &valor4);

  // Faz o calculo da média aritmética de 4 valores
  media = (valor1+valor2+valor3+valor4)/ 4 ;
 
  // Exibe o resultado final
  printf("A media aritmetica: %.2f", media);
 
  return 0;
}
 