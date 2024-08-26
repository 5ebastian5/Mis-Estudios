# Pedir una nota de 0 a 10 y mostrarla de la forma: Insuficiente, Suficiente, Bien, etc. Use la escala que prefiera, pero cerciórese que tiene 5 valores

nota = int(input('\n>>>Ingrese su nota del 0 a 10: '))
while nota<0 or nota>10:
    nota=int(input('Nota incorrecta. Ingrese una nota entre 0 y 10: '))
    
if nota == 0 or nota == 1 or nota == 2 or nota == 3 or nota == 4:
    print('\nInsuficiente\n')
elif nota == 5 or nota == 6 or nota == 7:
    print('\nSuficiente\n')
elif nota == 8 or nota == 9 or nota == 10:
    print('\nBien\n')
