#include <stdio.h> <conio.h>
         
 
int main(int argc, char *argv[]){
  float peso, altura, imc;
  char sexo;

  toupper();
  tolower();
  
  printf("Digite o sexo M/F: ");
  scanf("%s", &sexo);

  while((toupper(sexo) != 'M') && (toupper(sexo) != 'F')){
      printf("Erro! Sexo invalido! Digite novamente: ");
      scanf("%s", &sexo);
      
  }
if ( toupper(sexo) == 'M') {
    printf("Homem\n");

  printf("Digite o seu peso:\n");
  scanf("%f", &peso);
 
  printf("Digite a sua altura:\n");
  scanf("%.2f", &altura);
 
  imc = peso / (altura*altura);
 
  if (imc < 20){
      printf("Abaixo do peso!");
  }
  else if(imc < 25){
      printf("Peso ideal");
  }
  else{
      printf("Acima do peso!");
  }
}
if ( toupper(sexo) == 'F') {
    printf("Mulher\n");

  printf("Digite o seu peso:\n");
  scanf("%f", &peso);
 
  printf("Digite a sua altura:\n");
  scanf("%2.f", &altura);
 
  imc = peso / (altura*altura);
 
  if (imc < 19){
      printf("Abaixo do peso!");
  }
  else if(imc < 24){
      printf("Peso ideal");
  }
  else{
      printf("Acima do peso!");
  }
}
  return 0;
}