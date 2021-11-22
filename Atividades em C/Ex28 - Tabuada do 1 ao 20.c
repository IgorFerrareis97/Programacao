int main(int argc, char *argv[]){
  int numero, i, r;
 
  numero = 1;
  while (numero<=20){

  for (int i=0; i <= 10; i++){
    r = numero * i;
    printf("%i x %i = %i\n", numero, i, r);}
    numero = numero+1;
    printf ("Precione qualquer tecla do alfabeto para proseguir\n");
    scanf("%s");

  }
  
  return 0;
}
