#Escribir un programa que visualice la siguiente figura, utilizando ciclos. El usuario decide cuantas líneas quiere imprimir
# *
# * *
# * * *
# * * * *
# * * * * *
# * * * * * *
# * * * * * * *
# * * * * * * * *
# * * * * * * * * *

filas = int(input('Digite el numero de filas que desea hacer.\n'))
asteriscos = 1
for i in range(0, filas):
    for j in range(0,asteriscos):
        print('*',end=' ')
    asteriscos+=1
    print('')