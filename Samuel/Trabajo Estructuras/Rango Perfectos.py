#  Determinar cuales y cuantos números perfectos hay entre 1 y 1000?
for numero in range(1, 1000):
    suma=0
    for j in range(1, numero):
        if numero%j==0:
            suma=suma+j
    if suma==numero:
        print(numero)