# Diseñar e implementar un programa que solicite a su usuario un valor no negativo n y visualice la siguiente salida:
# 1 2 3 ........ n-1 n
# 1 2 3 ........ n-1
# .........
# 1 2 3
# 1 2
# 1 

n=1
while n<=1:
    n = int(input('Digite un numero no negativo '))

while n>0:
    for i in range(1, n+1):
        print(i, end=' ')
    n-=1
    print('')