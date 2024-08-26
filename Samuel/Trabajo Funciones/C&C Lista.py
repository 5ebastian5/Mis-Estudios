#C&C Lista
# escriba una funcion que reciba una lista llena como parametro; la funcion debe decir: cuales y cuantos tipos de datos diferente hay en la lista

lista = [5, 'Cinco', True, 2.5,9,8,7,4,3,2,9,92]
def funcion(list):
    sint=0
    sstr=0
    sbool=0
    sfloat=0
    for indice in list:
        td=type(indice)
        if td==int:
            sint+=1
        elif td==str:
            sstr+=1
        elif td==bool:
            sbool+=1
        elif td==float:
            sfloat+=1
    diccionario = {'int':sint,'string':sstr,'booleano':sbool,'Float':sfloat}
    return diccionario
print(funcion(lista))




