#Escriba una funcion que reciba un diccionario como parametro, diga el tipo de dato de cada uno de los valores en una lista.

diccionario={1:'Hola',2:45,3:4.5}

def funcion(diccionario):
    lista = []
    for indice in diccionario:
        lista.append(type(diccionario[indice]))
    return lista
print(funcion(diccionario))
    