c1 = float(input("Digite o valor do produto 1: "))
c2 = float(input("Digite o valor do produto 2: "))
c3 = float(input("Digite o valor do produto 3: "))
c4 = float(input("Digite o valor do produto 4: "))
c5 = float(input("Digite o valor do produto 5: "))

pagamento = float(input("Digite o valor do pagamento: "))

troco = pagamento - (c1 + c2 + c3 + c4 + c5)

print("O troco é de: R$ %.2f" % troco)