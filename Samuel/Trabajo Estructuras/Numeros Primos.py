#1. Solicite un numnero al usuario y determine si es o no es primo. divisores son uno y el numero

numero = int(input('Ingrese un numero para verificar si es primo:\n'))
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
    print('-----------No es primo-----------')
elif verificacion == True:
    print('-----------Sí es primo man-----------')






