from Recurso import*

class Libro (Recurso):
    def __init__(self, titulo, autor, editorial, identificacionRecurso,tipoLiteratura):
        super().__init__(titulo, autor, editorial, identificacionRecurso)
        self.__tipoLiteratura = tipoLiteratura
        
    def obtenerListaLibrosC():
        archivo = open('librosDisponibles.txt','r', encoding='utf-8')
        librosCompleta=archivo.readlines()
        archivo.close()
        return librosCompleta
    def obtenerListaLibrosS():
        librosSeparada=[]
        librosCompleta=Libro.obtenerListaLibrosC()
        for line in range(len(librosCompleta)):
            librosSeparada.append(librosCompleta[line].split(','))
        return librosSeparada
    
    def añadirLibro(seleccion):
        librosSeparada=Libro.obtenerListaLibrosS()
        librosCompleta=Libro.obtenerListaLibrosC()
        for line in range(0,len(librosCompleta)):
            if seleccion==int(librosSeparada[line][3]):
                usercode= input('Digite su codigo de usuario: ')
                archivo=open('pedidos.txt','a', encoding='utf-8')
                archivo.write(f'{usercode} {seleccion}\n')
                archivo.close()
                return ('Se añadio su libro a su lista de pedidos.\n')  
        
        
        