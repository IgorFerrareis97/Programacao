
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
int num=0, a=1, b=1, sum=0;

printf("\nDigite um numero positivo menor que 100: ");
scanf("%i",&num);

while(num<0){
printf("Digite um numero positivo: ");
scanf("%i",&num);
}
while(num>=100){
printf("Digite um numero menor que 100: ");
scanf("%i",&num);
}

for (int i=0; i<num; i++) {
a=a+b;
b=b+2;
sum=sum+a; }

printf("A soma dos numeros da sequencia e: %i",sum);
return 0;
}