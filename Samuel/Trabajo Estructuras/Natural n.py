#Encontrar un número natural n más pequeño tal que la suma de los n primeros números naturales (1 + 2 + 3 + 4…..) exceda de una cantidad (máximo) introducida por el teclado. 
#Es decir cuantos números de la serie de los naturales debo sumar para superar el dato máximo. 
suma=0
n=0
maximo = int(input('Ingrese el numero que sera el maximo: '))
while suma<maximo:
    n += 1
    suma += n

if suma==max:
    print('El numero de numeros necesarios para superar el maximo es:', n)
else:
    print('El numero de numeros necesarios para superar el maximo es:', n-1)
    