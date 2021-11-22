#include <stdio.h>
 
// Função principal do programa
int main(int argc, char *argv[]){
 
  // Declaração de variáveis
  float produto1, produto2, produto3, produto4, produto5, total, pagamento, troco;
 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "produto1"
  printf("Digite o valor do produto 1:");
  scanf("%f", &produto1);
 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "produto2"
  printf("Digite o valor do produto 2:");
  scanf("%f", &produto2);

   // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "produto3"
  printf("Digite o valor do produto 3:");
  scanf("%f", &produto3);

   // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "produto4"
  printf("Digite o valor do produto 4:");
  scanf("%f", &produto4);

   // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "produto5"
  printf("Digite o valor do produto 5:");
  scanf("%f", &produto5);

  // Faz o calculo do preço total
  total = produto1+produto2+produto3+produto4+produto5;

  // Exibe o valor total
  printf("O valor total: R$ %.2f", total);
  
   // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "pagamento"
  printf("\n Digite o valor de pagamento para que se verifique o valor do troco: ");
  scanf("%f", &pagamento);

  // Faz o calculo do troco
  troco = pagamento - total;
 
  // Exibe o resultado final
  printf("O troco vai ser: R$ %.2f", troco);
 
  return 0;
}
 