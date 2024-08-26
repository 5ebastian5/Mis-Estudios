archivo = 'Viejo Farol.txt'
def contarPalabras(archivo):
    with open(archivo, 'r', encoding='utf-8') as f:
        texto = f.read()
    palabras = texto.split()
    return len(palabras)

def aguda(palabra):
    if palabra.endswith(('á', 'é', 'í', 'ó', 'ú')):
        return True
    if len(palabra) > 1 and palabra[-2] not in 'aeiou':
        return True
    return False

def grave(palabra):
    if len(palabra) > 1 and palabra[-2] in 'aeiou' and palabra[-1] not in 'áéíóú':
        return True
    return False

def esdrujula(palabra):
    for i in range(len(palabra)-2):
        if palabra[i] in 'áéíóú':
            return True
    return False

def sobreesdrujula(palabra):
    return esdrujula(palabra) and len(palabra) > 3 and palabra[-4] in 'áéíóú'

def quePalabraEs(archivo):
    agudas = []
    graves = []
    esdrujulas = []
    sobresdrujulas = []
    with open(archivo, 'r', encoding='utf-8') as f:
        palabras = f.read().split()
    for palabra in palabras:
        if aguda(palabra):
            agudas.append(palabra)
        elif grave(palabra):
            graves.append(palabra)
        elif esdrujula(palabra):
            esdrujulas.append(palabra)
        elif sobreesdrujula(palabra):
            sobresdrujulas.append(palabra)

    with open('agudas.txt', 'w', encoding='utf-8') as agudasA:
        agudasA.write('\n'.join(agudas))
    with open('graves.txt', 'w', encoding='utf-8') as gravesA:
        gravesA.write('\n'.join(graves))
    with open('esdrujulas.txt', 'w', encoding='utf-8') as esdrujulasA:
        esdrujulasA.write('\n'.join(esdrujulas))
    with open('sobreesdrujulas.txt', 'w', encoding='utf-8') as sobresdrujulasA:
        sobresdrujulasA.write('\n'.join(sobresdrujulas))

NumeroPalabras = contarPalabras(archivo)
print(f'El archivo tiene {NumeroPalabras} palabras.')

quePalabraEs(archivo)
print('Las palabras se han clasificado y guardado en los archivos correspondientes.')
