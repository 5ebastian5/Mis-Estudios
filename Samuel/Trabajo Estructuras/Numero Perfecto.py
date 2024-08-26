#Determinar si un número es o no es perfecto. Un numero es perfecto si la suma de sus divisores sin incluir el propio número es igual a este
suma=0
numero = int(input('Deme un numero para saber si es perfecto: '))

for i in range (1, numero):
    if numero%i == 0:
        suma= suma +i

if suma==numero:
    print('El numero es perfecto')
else:
    print('El numero no es perfecto')