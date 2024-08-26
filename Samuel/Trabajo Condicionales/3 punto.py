# Pedir un número entre 0 y 9.999 y decir cuantas cifras tiene. Cuando el número exceda los límites emita un mensaje y finalice el programa

numero = int(input('\nIngrese un número entre 0 y 9999: '))
if 0 <= numero <= 9999:
    cifras = len(str(numero))
    print('El número ',numero,' tiene ',cifras,' cifras.\n')
else:
    print('El número supera el limite.\n')
