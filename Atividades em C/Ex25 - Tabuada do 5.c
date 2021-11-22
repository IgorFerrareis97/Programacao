int main(int argc, char *argv[]){
  int numero, i, r;
 
  printf("Tabuada do numero 5: \n");
  
  numero = 5;
  i = 1;
 
  while(i <= 10){
    r = numero * i;
    printf("%i x %i = %i\n", numero, i, r);
    i = i + 1;
  }
 
  return 0;
}
