#include <stdio.h>
 
int main(int argc, char *argv[]){
  float a, V0, t, V;
  
  printf("\n Digite o valor da aceleracao:\n");
  scanf("%f", &a);
 
  printf("\n Digite o valor da velocidade inicial:\n ");
  scanf("%f", &V0);
 
  printf("\n Digite o valor do tempo: \n");
  scanf("%f", &t);

  V = ((V0 + (a*t)) /3.6);
     
          if (V <= 40) 
           
 {  printf("Velocidade de %.2f Km/h.Veiculo muito lento!\n",V );
            }
          else if ((V > 40) && (V <= 60))
 {  printf("Velocidade de %.2f Km/h.Velocidade permitida!\n",V); 
            }
          else if ((V > 60) && (V <= 80)) 
 {  printf("Velocidade de %.2f Km/h.Velocidade de cruzeiro!\n",V);
            }
          else if  ((V > 80) && (V <= 120))
 {  printf("Velocidade de %.2f Km/h.Veiculo rapido!\n",V);
            }
          
          else {
        printf("Velocidade de %.2f Km/h.Veiculo muito rapido!\n",V);
          }
          
  return 0;

}