for numero in range(1, 1000):
    if numero <= 1:
        verificacion= False
    elif numero == 2:
        verificacion = True
    else:
        for i in range (2,numero):
            if numero % i == 0:
                verificacion= False
                break
            elif numero % i != 0:
                verificacion = True
    if verificacion == True:
        print(numero)
