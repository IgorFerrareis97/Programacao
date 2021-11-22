#include <stdio.h>
 
// Função principal do programa
int main(int argc, char *argv[]){
 
  // Declaração de variáveis
  float celsius, fahrenheit;
 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "celsius"
  printf("Digite a temperatura em Celsius: ");
  scanf("%f", &celsius);
 
  // Faz o calculo da conversão de temperatura
  fahrenheit =  (celsius * 1.8) + 32;
 
  // Exibe o resultado final
  printf("A temperatura em Fahrenheit: %.2f F", fahrenheit);
 
  return 0;
}