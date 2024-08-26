# Solicite al usuario una cantidad numérica que expresa segundos (medida de
# tiempo). Exprésela (conviértala) en horas minutos y segundos. Según el caso
segundos = int(input('\nIngrese los segundos que desea convertir: '))
minutos = segundos // 60
horas = segundos // 3600

if horas == 0:
    print('\nSon ',minutos,' minuto(s).\n')
else:
    print('\nSon ',horas,' hora(s) y ',minutos,' minuto(s).\n')