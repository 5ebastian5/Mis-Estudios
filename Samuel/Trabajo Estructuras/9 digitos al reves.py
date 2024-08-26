# Solicitar al usuario un número de hasta 9 dígitos e imprimirlo en orden contrario. Ej. digito 6754 imprimo 4576 
numero='ksdjvbnodisjsaf'
while len(numero)>9:
    numero = input("Digite un número de hasta 9 dígitos: ")

longitud = len(numero)
numeroinvertido = ''

for i in range(longitud - 1, -1, -1):
    numeroinvertido += numero[i]
    
print("El número invertido es: ",numeroinvertido)

