#include <stdio.h>
 
// Função principal do programa
int main(int argc, char *argv[]){
 
  // Declaração de variáveis
  float peso, altura, imc;
 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "peso"
  printf("Digite o peso: ");
  scanf("%f", &peso);
 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "altura"
  printf("Digite a altura: ");
  scanf("%f", &altura);
 
  // Faz o calculo de IMC
  imc = peso/(altura * altura) ;
 
  // Exibe o resultado final
  printf("O IMC vai ser: %.2f", imc);
 
  return 0;
}
 
