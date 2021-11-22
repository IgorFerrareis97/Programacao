int main(int argc, char *argv[]){
  int a, b, i, n, aux;

a = 0;
b = 1;

printf("Serie FIBONACCI de 30 numeros\n");
printf("%i\n",b);
 for (i=0; i<=29; i++)
 { 
     aux = a + b;
     a = b;
     b = aux;
     printf ("%i\n",aux);
 }

  return 0;
}
