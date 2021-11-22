int main(int argc, char *argv[]){
  int numero, r, a, b;
 
  printf("Digite um numero para tabuada:\n");
  scanf("%i", &numero);
 
  while(numero <= 0){
    printf("Erro! Apenas numeros positivos. Digite novamente:\n");
    scanf("%i", &numero);
  }
  printf("Digite o intervalo minimo:\n ");
  scanf("%i", &a);

  printf("Digite um o intervalo maximo:\n");
  scanf("%i", &b);

  while (b<= a) {
      printf("Erro! O intervalo maximo devera ser maior que o intervalo minimo:\n");
    scanf("%i", &b);
  }
 
  for (int i=b; i >= a; i--){
    r = numero * i;
    printf("%i x %i = %i\n", numero, i, r);
  }
 
  return 0;
}