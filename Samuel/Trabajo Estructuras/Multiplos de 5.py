#Determinar cuales son los múltiplos de 5 comprendidos entre 1 y N. Suponiendo que N es dado por el usuario.

n=int(input('Ingrese un numero que sera N: '))
 
print('Los multiplos de 5 entre 1 hasta ',n,' son:\n')

for i in range(5, n, 5):
    print(i)