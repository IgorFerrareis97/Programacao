acele = float(input("Digite a aceleração: "))
vel = float(input("Digite a velocidade inicial: "))
tempo = float(input("Digite o tempo de percurso: "))
vel_final = vel + (acele * tempo)

if vel_final <= 40:
    print("Veiculo muito lento")
elif vel_final > 40 and vel_final <= 60:
    print("Velocidade permitida")
elif vel_final > 60 and vel_final <= 80:
    print("Velocidade de cruzeiro")
elif vel_final > 80 and vel_final <= 120:
    print("Veiculo rápido")
elif vel_final > 120:
    print("Veiculo muito rápido")