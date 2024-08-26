# Llenar una lista de tamaño aleatorio entre 10 y 25 elementos. Llene la lista con números aleatorios. Ordenar el arreglo, de mayor a menor y de menor a mayor (algoritmo de la burbuja)
from random import *
def funcion(lista, tamaño):
    x=0
    for i in range(tamaño):
        for j in range(tamaño-1):
            if lista[j]>lista[j+1]:
                lista[j], lista[j+1] = lista[j+1], lista[j]
    return lista
lista = []
tamaño = randint(10,25)
for i in range(tamaño):
    lista.append(randint(1,100))
print(f'La lista es: {lista}')

            
print(funcion(lista, tamaño))