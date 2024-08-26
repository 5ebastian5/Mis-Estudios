# . Solicite un Angulo al usuario en grados. Diga en que cuadrante está. Diga
# además en que vuelta está sabiendo que cada 360 grados se completa una
# vuelta a la circunferencia. Además diga el resultado en radianes.
angulo = int(input("\nIngrese un ángulo en grados: "))

if angulo >= 0 and angulo < 90:
    cuadrante = "primer cuadrante"
elif angulo >= 90 and angulo < 180:
    cuadrante = "segundo cuadrante"
elif angulo >= 180 and angulo < 270:
    cuadrante = "tercer cuadrante"
elif angulo >= 270 and angulo < 360:
    cuadrante = "cuarto cuadrante"
else:
    cuadrante = "en el eje o en una posición repetida"

vueltas_completas = int(angulo // 360)
if vueltas_completas == 0:
    vuelta = "primera vuelta"
else:
    vuelta = f"{vueltas_completas + 1}ª vuelta"

pi = 3.1416
angulo_radianes = (pi / 180) * angulo

print(f'\nEl ángulo {angulo}° grados está en el {cuadrante} y pertenece a la {vuelta}.')
print(f'\nEn radianes, el ángulo es aproximadamente {angulo_radianes} radianes.\n')