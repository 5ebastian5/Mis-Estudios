# Llene una lista de n elementos con numeros aleatorios entre 0 y 100. el tamaño tambien es aleatorio, entre 5 y 20. diga la suma de los numeros pares de la lista y tambien la de los impares
import random
lista = []
tamaño = random.randint(5, 20)

for i in range(0, tamaño):
        numero = random.randint(0, 100)
        lista.append(numero)

print('\n\nEsta es su lista random:',lista,'\n\nSu tamaño es: ', tamaño, '\n')
pares = 0
impares = 0
for i in (lista):
        if i % 2 == 0:
                pares = pares + i
        else:
                impares = impares + i

print('La suma de todos los pares de la lista es: ', pares)
print('\nLa suma de todos los impares de la lista es: ', impares)
