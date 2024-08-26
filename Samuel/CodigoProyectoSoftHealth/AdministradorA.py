class Administrador():
    
    def __init__(self, nombre1, nombre2, apellido1, apellido2, tipoDocumento, documento, diaNacimiento, mesNacimiento, añoNacimiento, celular, direccion, correo, contraseña):
        self.nombre1 = nombre1
        self.nombre2 = nombre2
        self.apellido1 = apellido1
        self.apellido2 = apellido2
        self.tipoDocumento = tipoDocumento
        self.documento = documento
        self.diaNacimiento = diaNacimiento
        self.mesNacimiento = mesNacimiento
        self.añoNacimiento = añoNacimiento
        self.celular = celular
        self.direccion = direccion
        self.correo = correo
        self.contraseña = contraseña
        
    def registrarAdministrador(self):
        self.diaNacimiento=0
        self.mesNacimiento=0
        self.añoNacimiento=0
        print("Sobre Usted (Informacion del Administrador):",'☲'*20)
        self.nombre1 = input("Ingrese el primer nombre: ")
        self.nombre2 = input("Ingrese el segundo nombre: ")
        self.apellido1 = input("Ingrese el primer apellido: ")
        self.apellido2 = input("Ingrese el segundo apellido: ")
        while self.tipoDocumento != "C.C" or self.tipoDocumento != "T.I" or self.tipoDocumento != "C.E" or self.tipoDocumento != "P.A":
            self.tipoDocumento = input("Ingrese el tipo de documento (C.C, T.I, C.E, P.A): ")
        self.documento = input("Ingrese el número de documento: ")
        while self.diaNacimiento < 1 or self.diaNacimiento>31:
            self.diaNacimiento = int(input("Ingrese el día de nacimiento (dd): "))
        while self.mesNacimiento<1 or self.mesNacimiento>12:
            self.mesNacimiento = int(input("Ingrese el mes de nacimiento (mm): "))
        while self.añoNacimiento<1900 or self.añoNacimiento>2011:
            self.añoNacimiento = int(input("Ingrese el año de nacimiento (yyyy): "))
        self.celular= input("Ingrese el número de celular: ")
        self.direccion = input("Ingrese la dirección: ")
        self.correo = input("Ingrese el correo electrónico: ")
        self.contraseña = input("Ingrese una contraseña: ")
        nuevoAdministrador = Administrador(self.nombre1, self.nombre2, self.apellido1, self.apellido2, self.tipoDocumento, self.documento, self.diaNacimiento,self.mesNacimiento,self.añoNacimiento,self.celular,self.direccion,self.correo,self.contraseña)
        self.añadirAdministrador(nuevoAdministrador)
        

    def añadirAdministrador(nuevoAdministrador):
        pass