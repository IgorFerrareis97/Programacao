#include <stdio.h> <conio.h>
         
 
int main(int argc, char *argv[]){
  char sexo;

  toupper();
  tolower();
  
  printf("Digite o sexo M/F: ");
  scanf("%s", &sexo);

  while((toupper(sexo) != 'M') && (toupper(sexo) != 'F')){
      printf("Erro! Sexo invalido! Digite novamente: ");
      scanf("%s", &sexo);
      
  }
if ( toupper(sexo) == 'M') 
  {
    printf("Homem\n");
}
  
else {
    printf("Mulher\n");

}

  return 0;
}