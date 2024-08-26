# Hacer diccionarios español ingles, ingles español de animales. 
# Escriba funciones que permitan alimentar estos diccionarios y usarlos. Genere un menú para cada una de las 4 opciones. 
# Alimentar cada diccionario (2 funciones) Usar cada diccionario (2 funciones)

animalesei = {
    'Mariposa': 'Butterfly',
    'Escorpión': 'Scorpion',
    'Medusa': 'Jellyfish',
    'Cangrejo': 'Crab',
    'Tortuga': 'Turtle'
}

animalesie = {
    'Butterfly': 'Mariposa',
    'Scorpion': 'Escorpión',
    'Jellyfish': 'Medusa',
    'Crab': 'Cangrejo',
    'Turtle': 'Tortuga'
}
def alimentarei():
    espanol = input('Introduzca el nombre del animal en español: ')
    ingles = input('Introduzca el nombre del animal en inglés: ')
    animalesei[espanol] = ingles

def alimentarie():
    ingles = input('Introduzca el nombre del animal en inglés: ')
    espanol = input('Introduzca el nombre del animal en español: ')
    animalesie[ingles] = espanol
   
def usarei():
    busca = input('Introduzca el nombre del animal en español que desea traducir: ')
    if busca in animalesei:
        print(f'{busca} es {animalesei[busca]}')
    else:
        print('No se encuentra en el diccionario el animal introducido')


def usarie():
    busca = input('Introduzca el nombre del animal en inglés que desea traducir: ')
    if busca in animalesie:
        print(f'{busca} es {animalesie[busca]}')
    else:
        print('No se encuentra en el diccionario el animal introducido')

# Menú principal--------------------------------------------------------
def menu():
    while True:
        print('\nMenú de opciones')
        print('1. Alimentar diccionario Español a Inglés')
        print('2. Alimentar diccionario Inglés a Español')
        print('3. Usar diccionario Español a Inglés')
        print('4. Usar diccionario Inglés a Español')
        print('5. Salir')

        opcion = input('Selecciona una opción (1-5): ')

        if opcion == '1':
            alimentarei()
        elif opcion == '2':
            alimentarie()
        elif opcion == '3':
            usarei()
        elif opcion == '4':
            usarie()
        elif opcion == '5':
            print('Saliendo del programa...')
            break
        else:
            print('Por favor selecciona una opción del 1 al 5.')

# Ejecutar el menú
menu()

