vetor = []
for i in range(20):
    vetor.append(int(input("Digite um valor: ")))
    

constante = int(input("Digite uma constante: "))

for i in range(20):
    vetor[i] = vetor[i] * constante

print(vetor)