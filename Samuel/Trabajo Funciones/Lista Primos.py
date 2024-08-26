# Llenar una lista de tamaño aleatorio entre 10 y 25 elementos. Llene la lista con números aleatorios. Muestre cuales y cuantos son primos
from random import *
def funcion(lista):
    primos=0
    for numero in lista:
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

        if verificacion == False:
            print(f'-----------{numero} No es primo-----------')
        elif verificacion == True:
            print(f'-----------{numero} Sí es primo man-----------')
            primos+=1
    return primos 
lista = []
tamaño = randint(10,25)
for i in range(tamaño):
    lista.append(randint(1,100))
print(f'La lista es: {lista}')
primos=funcion(lista)
  

print(f'En la lista habian {primos} numeros primos')