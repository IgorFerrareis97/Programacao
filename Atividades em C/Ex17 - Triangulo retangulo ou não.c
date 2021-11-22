#include <stdio.h>
 
int main(int argc, char *argv[]){
  float v1, v2, v3;
  
  printf("\n Digite o valor do cateto 01: ");
  scanf("%f", &v1);
 
  printf("\n Digite o valor do cateto 02: ");
  scanf("%f", &v2);
 
  printf("\n Digite o valor da hipotenusa: ");
  scanf("%f", &v3);
 
  if ( ((v1*v1) + (v2*v2)) == (v3*v3)) {
               printf("Triangulo Retangulo!");
            }
       
       else{
           printf("Nao é Triangulo Retangulo!");
       }
 
  return 0;
}
