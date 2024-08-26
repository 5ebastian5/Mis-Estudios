# Solicitar 2 números al usuario e imprimir el cociente y el residuo del mayor en el menor sin utilizar la división ni el mod. 
numero1 = int(input("Ingrese el primer número: "))
numero2 = int(input("Ingrese el segundo número: "))

if numero1 > numero2:
    mayor = numero1
    menor = numero2
else:
    mayor = numero2
    menor = numero1

cociente = 0
residuo = mayor

while residuo >= menor:
    residuo -= menor
    cociente += 1

print("El cociente de ",mayor,"dividido por ",menor, "es: ",residuo)
print("El residuo de ",mayor,"dividido por ",menor, "es: ",residuo)
