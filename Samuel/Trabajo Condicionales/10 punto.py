# Solicite al usuario la hora en formato hh:mm:ss (hora militar, 24 horas). El programa debe responder que hora será un segundo después. Ej: ingreso 11:59:59, el programa responde 12:00:00. 
horacadena = input('\n>>>Ingrese la hora en el formato(hh:mm:ss): ')



horas = int(horacadena[0:2])
minutos = int(horacadena[3:5])
segundos = int(horacadena[6:8])
segundos+=1
if segundos == 60:
    segundos = 00
    minutos += 1
    if minutos == 60:
        minutos = 00
        horas += 1
        if horas == 24:
            horas = 00


print('\nLa hora un segundo después es: ',horas,':',minutos,':',segundos)