# Calcular la operación x^n sin utilizar la función pow. Suponiendo que x y n son dados por el usuario.

xinicio=int(input('Ingrese un numero que sera X: '))
n=int(input('Ingrese un numero que sera N: '))
x=xinicio
for i in range(1,n):
    x= x*xinicio
print('El resultado de x^n cuando:\nx vale: ',xinicio,'  \nn vale: ',n,' \nes: ',x)
