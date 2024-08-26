# Algoritmo para hallar el m.c.d de dos números m y n por el algoritmo de Euclides.
m = int(input('ingrese el numero m'))
n = int(input('ingrese el n'))

while n != 0:
    temp = n
    n = m % n
    m = temp

print('El m.c.d. de', 56, 'y', 98, 'es', m)
