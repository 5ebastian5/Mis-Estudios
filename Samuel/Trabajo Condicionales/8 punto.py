# Telefónica realiza los cálculos del costo de una llamada de teléfono siguiendo
# los cálculos así:
# Cuando se descuelga el teléfono los primeros 3 minutos (banderazo) cuestan
# 200 pesos y cada minuto adicional cuesta 50 pesos. Escriba un programa que
# permita calcular el costo de una llamada dados los minutos de duración.
min = int(input('\nIngrese el tiempo de llamada en minutos: '))
if min <= 3:
    print('El costo de la llamada es de: $200')
elif min > 3:
    mine = min - 3
    presioe = (mine * 50) + 200
    print('El costo de la llamada es de: ', presioe)