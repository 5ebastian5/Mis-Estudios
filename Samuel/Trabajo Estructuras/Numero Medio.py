# Pedir 3 numeros e indicar cual de ellos es el valor del medio. Ej 11, 2 1000, el valor del medio es 11. No use operadores lógicos

numero1 = print('Deme el primer numero: ')
numero2 = print('Deme el segundo numero: ')
numero3 = print('Deme el tercer numero: ')
        
if numero1 > numero2:
    if numero1 < numero3:
        print('El numero medio entre los 3 dijitados es: ',numero1)
    elif numero2 > numero3:
        print('El numero medio entre los 3 dijitados es: ',numero2)
    else:
        print('El numero medio entre los 3 dijitados es: ',numero3)
else:
    if numero1 > numero3:
        print('El numero medio entre los 3 dijitados es: ',numero1)
    elif numero2 < numero3:
        print('El numero medio entre los 3 dijitados es: ',numero2)
    else:
        print('El numero medio entre los 3 dijitados es: ',numero3)