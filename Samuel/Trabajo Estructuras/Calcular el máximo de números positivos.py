#Calcular el máximo de números positivos introducidos por teclado, sabiendo que metemos números hasta que introduzcamos uno negativo. El negativo no cuenta. 
numero = 1
contador = 0
print('En este software se le pedira que dijite un numero repetidamente hasta que el numero dado sea negativo, hasta entonces el software no se detendra.\n')
while numero > 0:
    numero=int(input('Ingrese un numero: '))
    contador+=1

print('El maximo de numeros que dijito antes del negativo fue: ',contador-1)
