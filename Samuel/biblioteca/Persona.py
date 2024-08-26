from Pedido import*
class Persona ():
    def __init__(self,nombre,direccion,telefono,identificacion,tipoUsuario,contraseña):
        self.__nombre = nombre
        self.__direccion = direccion
        self.__telefono = telefono
        self.__identificacion = identificacion
        self.__tipoUsuario = tipoUsuario
        self.__contraseña = contraseña
      
    def registrarPersona():
        print('Formulario Registro: ')
        nombre=input('Ingrese su nombre: ')
        direccion=input('ingrese su direccion: ')
        telefono=input('ingrese su telefono: ')
        identificacion=input('ingrese su identificacion: ')
        tipoUsuario=input('ingrese su tipo de usuario: ')
        contraseña=input('ingrese su contraseña: ')
        nuevaPersona=Persona(nombre, direccion, telefono, identificacion, tipoUsuario,contraseña)
        nuevaPersona.enviarArchivo()          
    def obtenerListaPersonaC():
        archivo = open('personaRegistrados.txt','r', encoding='utf-8')
        personaCompleta=archivo.readlines()
        archivo.close()
        return personaCompleta
    def obtenerListaPersonaS():
        personaSeparada=[]
        personaCompleta=Persona.obtenerListaPersonaC()
        for line in range(len(personaCompleta)):
            personaSeparada.append(personaCompleta[line].split(','))
        return personaSeparada
    def enviarArchivo(nuevaPersona):
        archivo = open('personaRegistrados.txt','a', encoding='utf-8')
        archivo.write(f'\n{nuevaPersona.__nombre},{nuevaPersona.__direccion},{nuevaPersona.__telefono},{nuevaPersona.__identificacion},{nuevaPersona.__tipoUsuario},{nuevaPersona.__contraseña}')
        archivo.close()
        
        
    
    
    
        