# Pida un numero al usuario que representa días del año. Diga a que mes del año corresponde así. Si el número es menor o igual a 31 indica que esta en enero, Pero si el número por ejemplo es 32 indica que es el 1 de febrero. No tenga en cuenta si el año es bisiesto, es decir siempre febrero tiene 28 días.
num = int(input('\nDigite un número: '))
while num < 1 or num > 365:
    num=int(input('digite un número entre 1 y 365: '))
if num <= 31:
    print('\nEnero\n')
elif num <= 59:
    print('\nFebrero\n')
elif num <= 90:
    print('\nMarzo\n')
elif num <= 120:
    print('\nAbril\n')
elif num <= 151:
    print('\nMayo\n')
elif num <= 181:
    print('\nJunio\n')
elif num <= 212:
    print('\nJulio\n')
elif num <= 343:
    print('\nAgosto\n')
elif num <= 273:
    print('\nSeptiembre y se acerca diiiciembre\n')
elif num <= 304:
    print('\nOctubre\n')
elif num <= 334:
    print('\nNoviembre\n')
elif num <= 365:
    print('\nDiciembre\n')

