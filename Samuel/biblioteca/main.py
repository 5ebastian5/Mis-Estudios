from Usuario import*
from Libro import*
from Pedido import*
from Bibliotecario import*


def app():
    opcion=0
    seleccion=0
    print("Biblioteca","-"*40)
    print("  Menú")
    print("     1. Hacer un pedido")
    print("     2. Historial de pedidos")
    print("     3. Registrar usuario")
    while opcion > 3 or opcion<1:
        opcion = int(input("   Seleccione una opción: "))
    if opcion == 1:
        librosSeparada=Libro.obtenerListaLibrosS()
        librosCompleta=Libro.obtenerListaLibrosC()
        print('Los libros disponibles son:\n')
        for line in range(0,len(librosCompleta)):
            print(librosSeparada[line][3],' Nombre: ',librosSeparada[line][0],'\n     Autor: ',librosSeparada[line][1])
        while seleccion<1 or seleccion>len(librosCompleta):
            seleccion=int(input("digite el codigo de libro que desea: "))  
        print(Libro.añadirLibro(seleccion) )
                          
    elif opcion == 2:
        librosSeparada=Libro.obtenerListaLibrosS()
        librosCompleta=Libro.obtenerListaLibrosC()
        pedidosSeparados=Pedido.obtenerPedidosS()
        pedidosCompletos=Pedido.obtenerPedidosC()
        personaSeparados=Persona.obtenerListaPersonaS()
        personaCompletos=Persona.obtenerListaPersonaC()
        print("-"*20)
        print("El historial de pedidos son:")     
        for line in range(0,len(pedidosCompletos)):
            print(f'Numero pedido {line+1}: ')
            codi,codl=pedidosSeparados[line][0],pedidosSeparados[line][1]
            for lineP in range(0,len(personaCompletos)):
                if codi==personaSeparados[lineP][3]:
                    print(f'    Usuario: {personaSeparados[lineP][0]}')
            for lineL in range(0,len(librosCompleta)):
                if codl==librosSeparada[lineL][3]:
                    print(f'    Pedido: {librosSeparada[lineL][0]}')

    elif opcion == 3:
        Persona.registrarPersona()
        print('Se registró')
app()
        
        
        
    
    
    
    