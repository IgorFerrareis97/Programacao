#include<stdio.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{
 
int contant, resultado;

int numeros[20];


printf("\nDigite os 20 numeros:\n");
for (int i=0; i<20; i++){
    scanf("%i", &numeros[i]);
}
printf("Digite o valor da constante: ");
scanf("%i", &contant);


printf("O vetor multiplicado pela constante e:\n");
for (int i=0; i<20; i++){ 
    resultado=contant*numeros[i]; 
    printf("%i\n",resultado);  
}
return 0;
}
