# Llene una lista con la serie de Fibonacci. La cantidad de elementos de la lista la debe ingresar el usuario. Mínimo debe tener 5 elementos y máximo 20.
def fibonacci(cantidad, lista):
    a, b = 0, 1
    for indice in range(cantidad):
        lista.append(a)
        a, b = b, a + b
    return lista

cantidad=0
while cantidad<5 or cantidad>20:
    cantidad = int(input('Ingrese la cantidad de elementos que tendra la lista.(5 a 20) '))
lista=[]
fibonacci(cantidad, lista)
print('La lista de Fibonacci con', cantidad, 'elementos es: ', lista)


