class Personal():
    def __init__(self, tipoPersonal, nombre1, nombre2, apellido1, apellido2, tipoDocumento, documento, diaNacimiento, mesNacimiento, añoNacimiento, celular, direccion, experienciaAcademica, experienciaLaboral, correo, contraseña):
        self.tipoPersonal = tipoPersonal
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
        self.experienciaAcademica = experienciaAcademica
        self.experienciaLaboral = experienciaLaboral
        self.correo = correo
        self.contraseña = contraseña
        
    def registrarPersonal(self):
        print("Sobre el personal: ",'☲'*40)
        self.tipoPersonal = input("Ingrese el tipo de persona (Doctor, Enfermera, Cirujano, etc.): ")
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
        self.experienciaAcademica = input("Registre su experiecia academica: ")
        self.experienciaLaboral = input("Registre su experiencia laboral: ")
        self.correo = input("Ingrese su correo electrónico: ")
        self.contraseña = input("Ingrese una contraseña: ")
        nuevaPersona = Personal(self.tipoPersonal, self.nombre1, self.nombre2, self.apellido1, self.apellido2, self.tipoDocumento, self.documento, self.diaNacimiento, self.mesNacimiento, self.añoNacimiento, self.celular, self.direccion, self.experienciaAcademica, self.experienciaLaboral, self.correo, self.contraseña)
        self.añadirPersonal(nuevaPersona)
        
    def añadirPersonal(self, nuevaPersona):
        pass