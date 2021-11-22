
valor1= float(input("Digite o primeiro valor: "))
valor2= float(input("Digite o segundo valor: "))
valor3= float(input("Digite o terceiro valor: "))

if valor1 == valor2 and valor2 == valor3:
    print("O triângulo é equilátero")
elif valor1 == valor2 or valor2 == valor3 or valor1 == valor3:
    print("O triângulo é isósceles")
else:
    print("O triângulo é escaleno")