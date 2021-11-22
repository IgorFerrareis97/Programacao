
cat1 = float(input("Digite o primeiro cateto: "))
cat2 = float(input("Digite o segundo cateto: "))
hip = float(input("Digite a hipotenusa: "))

if (cat1 ** 2 + cat2 ** 2 == hip ** 2):
    print("É um triângulo retângulo.")
else:
    print(" Não forma um triângulo retângulo.")