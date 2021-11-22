
memoria = []
multiplicador = []

for i in range(20):
    memoria.append(int(input("Digite um valor: ")))

mult = int(input("Digite um valor para multiplicar: "))

multiplicador = [memoria[i] * mult for i in range(20)]

print(memoria)