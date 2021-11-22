soma = 2
n=int(input("Digite um valor: "))

while n<0 or n>=100:
    n=int(input("Digite um valor: "))

for i in range(1,n):
    soma=soma+i**2

print(soma)