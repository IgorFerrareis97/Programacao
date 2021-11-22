#include <stdio.h>
 
// Função principal do programa
int main(int argc, char *argv[]){
 
  // Declaração de variáveis
  float dolar, real;
 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "dolar"
  printf("Digite o valor em dolar: ");
  scanf("%f", &dolar);
 
  // Faz o calculo da conversão monetária, cotação no dia 23/08/2021
  real =  dolar * 5.38;
 
  // Exibe o resultado final
  printf("O valor em reais:R$ %.2f", real);
 
  return 0;
}