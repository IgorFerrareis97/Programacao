vetor = []  


tamanho = int(input("Digite o tamanho do vetor: "))
if tamanho > 20:  
    
    print("O tamanho do vetor não pode ser maior que 20!")
    
    tamanho = int(input("Digite o tamanho do vetor: "))
for i in range(tamanho):  
    valor = int(input("Digite o valor: "))  
    vetor.append(valor)  

localizar = int(input("Digite o valor a ser localizado: "))

posicao = vetor.index(localizar)  

if posicao == -1:  
    
    print("Valor não encontrado!")
else:  
    print("O valor está na posição: ", posicao)  


print("Deseja fazer uma nova consulta? (S/N)")
resposta =input()  
resposta = resposta.upper()  
if resposta == "S":  
    
    localizar = int(input("Digite o valor a ser localizado: "))
    posicao = vetor.index(localizar)  
    if posicao == -1:  
       
        print("Valor não encontrado!")
    else: 
        print("O valor está na posição: ", posicao)  
else:  
    print("Programa encerrado!")  
    exit() 