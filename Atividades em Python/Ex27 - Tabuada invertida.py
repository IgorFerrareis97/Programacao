
multiplicador = int(input("Digite um valor: "))

while multiplicador < 0:
    multiplicador = int(input("Digite um valor: "))

intervalo_inicial = int(input("Digite o valor inicial: "))
intervalo_final = int(input("Digite o valor final: "))
while intervalo_final < intervalo_inicial:
    intervalo_final = int(input("Digite o valor final: "))
print("Tabuada do valor digitado:")
for i in range(intervalo_final, intervalo_inicial - 1, -1):
    print(multiplicador, "x", i, "=", multiplicador * i)