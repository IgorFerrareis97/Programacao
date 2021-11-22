#include<stdio.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{

int numeros[2][3];

printf("\nDigite 6 numeros para a matriz 2x3:\n");
for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
    scanf("%i", &numeros[i][j]);
    }
}
printf("Os numeros digitados na matriz 2x3 foram:\n");
for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
    printf("%i ", numeros[i][j]);
    }
printf("\n");
}

return 0;
}