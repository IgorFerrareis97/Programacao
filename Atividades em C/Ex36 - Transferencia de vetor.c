#include<stdio.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{

int contant;
int v1[20];
int v2[20];


printf("\nDigite 20 numeros:\n");
for (int i=0; i<20; i++){
    scanf("%i", &v1[i]);
}
printf("Digite o valor da constante: ");
scanf("%i", &contant);


printf("\nExibindo vetor 1:\n");
for (int i=0; i<20; i++){
    printf("%i\n",v1[i]);
}

printf("\nResultado do vetor 2:\n");
for (int i=0; i<20; i++){ 
    v2[i] = contant * v1[i]; 
    printf("%i\n",v2[i]);  
}
return 0;
}