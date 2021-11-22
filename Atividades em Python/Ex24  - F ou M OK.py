sexo = input('Digite seu sexo: ')
sexo=sexo.upper()

while (sexo != 'F' and sexo != 'M'):
    print('Sexo inválido!')
    sexo = input('Digite seu sexo: ')
    sexo=sexo.upper()