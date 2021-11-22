#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{


int i, res,qtde,cons,valor=0;


int *numeros;

do
{
system("cls");

printf("Armazena no MAX 20 valores e consulta lugar do valor pedido");

printf("\nDigite a quantidade de valores: ");
scanf("%i", &qtde);


while(qtde>20 || qtde<0){
printf("Erro!\nFora da faixa possivel de valores. Digite novamente: ");
scanf("%i",&qtde);
}

numeros = (int*)malloc(qtde*sizeof(int));

printf("Digite os numeros:\n");
for(i=0; i<qtde; i++){
    scanf("%i", &numeros[i]);
}

printf("Digite um numero para consulta: ");
scanf("%i", &cons);


for(i=0; i<qtde; i++){ 

   if (cons==numeros[i]){ 
       printf("O Numero %i se encontra na Posicao %i do vetor",cons,i);
   }

   else {valor++; 
   }

   if(valor==qtde){
       printf("Valor nao encontrado!");
       valor=0; 
   }
}
printf("\nDigite 1 para nova consulta ou 2 para sair: ");
    scanf("%i",&res); 
}while(res !=2);

return 0;
}