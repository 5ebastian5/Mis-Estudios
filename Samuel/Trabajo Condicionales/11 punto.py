#Escribir un algoritmo que pida un valor entero que equivale a una cantidad de
# DINERO y calcule a cuantos billetes de 50.000, 20.000, 10.000, 5.000, 2.000, y
# 1.000 equivalen. Si el usuario digita 282000 el programa debe responder cinco
# billetes de 50.000, un billete de veinte mil, un billete de diez mil, un billete de dos mil.
valor = int(input('\nDigite un valor: '))
billete50000 = 0
billete20000 = 0
billete10000 = 0
billete5000 = 0
billete2000 = 0
billete1000 = 0

while valor >= 50000:
  valor -= 50000
  billete50000 += 1

while valor >= 20000:
  valor -= 20000
  billete20000 += 1

while valor >= 10000:
  valor -= 10000
  billete10000 += 1

while valor >= 5000:
  valor -= 5000
  billete5000 += 1

while valor >= 2000:
  valor -= 2000
  billete2000 += 1

while valor >= 1000:
  valor -= 1000
  billete1000 += 1

print('\nEl valor en billetes equivale a: \n')
if billete50000 > 0:
  print(billete50000,' billete(s) de 50.000\n')
if billete20000 > 0:
  print(billete20000,' billete(s) de 20.000\n')
if billete10000 > 0:
  print(billete10000,' billete(s) de 10.000\n')
if billete5000 > 0:
  print(billete5000,' billete(s) de 5.000\n')
if billete2000 > 0:
  print(billete2000,' billete(s) de 2.000\n')
if billete1000 > 0:
  print(billete1000,' billete(s) de 1.000\n')