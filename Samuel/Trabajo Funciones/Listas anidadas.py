

#Escriba una funcion que reciba una lista como parametro, diga si tiene sublistas y cuantos niveles de profundidad tiene.

lista=[1,5,[3,5,[9,5,[5],1,4],7,8],9,8]

def funcion(lista):
    profundidad=0
    for i in lista:
        if type(i)==list:
            tiene=True
            break
        else:
            tiene=False
    while tiene == True:
        for indice in lista:
            if type(indice)==list:
                x=indice
                print(x)
                profundidad+=1
            else:
                tiene = False
    return profundidad, tiene

prof, tie= funcion(lista)

if tie == True:
    print(f'Sí tiene sublistas, con {prof} niveles de profundidad')
else:
    print(f'Sí tiene sublistas, con {prof} niveles de profundidad')