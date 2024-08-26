# Funcion Recibe un diccionario y una palabra que representa la clave (key), y nos retorna el valor asociado y el tipo de dato de ese valor. Si no existe debe indicarlo
diccionario = {
    'nombre': 'Juan',
    'edad': 25,
    'ciudad': 'Madrid',
    'profesion': 'Ingeniero',
    'hobby': 'Leer',
    'mascota': 'Perro'
}


def funcion(diccionario, key):
    return diccionario[key], type(diccionario[key])

print(funcion(diccionario,'edad'))