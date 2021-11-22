#include<stdio.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{

int numeros[3][4];
int contant;

printf("\nDigite os numeros para a matriz 3x4:\n");
for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
    scanf("%i", &numeros[i][j]);
    }
}
printf("Digite o valor da constante: ");
scanf("%i",&contant);

printf("Os numeros digitados na matriz 3x4 multiplicados pela constante foram:\n");
for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
   printf("%i  ", numeros[i][j]*contant);
    }
printf("\n");
}
return 0;
}