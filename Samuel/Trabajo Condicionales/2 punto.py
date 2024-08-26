# Escribe un programa que pida tres números y que escriba si son los tres iguales, si hay dos iguales o si son los tres distintos

x=int(input('\n>>>Digite un número: '))
y=int(input('>>>Digite un número: '))
z=int(input('>>>Digite un número: '))

if x == y == z:
    print("\nLos tres números son iguales.\n")
elif x == y or x == z or y == z:
    print("\nHay dos números iguales.\n")
else:
    print("\nLos tres números son distintos.\n")