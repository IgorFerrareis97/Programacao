
multiplicador = int(input("Digite um número: "))
while multiplicador < 0:
    multiplicador = int(input("Digite um número positivo: "))
print("Tabuada do número digitado:")
for i in range(1, 11):
    print(multiplicador, "x", i, "=", multiplicador * i)