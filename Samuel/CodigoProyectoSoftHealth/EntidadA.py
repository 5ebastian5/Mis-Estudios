class Entidad():
    def __init__(self, nombre, nit, categoria, serviciosOfrecidos, direccion):
        self.nombre = nombre
        self.nit = nit
        self.categoria = categoria
        self.serviciosOfrecidos = serviciosOfrecidos
        self.direccion = direccion
        
    def registrarEntidad(self):
        print("Sobre la IPS/EPS: ",'☲'*40)
        self.nombre = input("Ingrese el nombre de la IPS/EPS: ")
        self.nit = input("Ingrese el NIT de la IPS/EPS: ")
        while self.categoria != "I" or self.categoria != "II" or self.categoria != "III" or self.categoria != "IV" or self.categoria != "V":
            self.categoria = input("Ingrese la categoría de la IPS/EPS (I, II, III, IV, V): ")
        self.serviciosOfrecidos = input("Ingrese los servicios ofrecidos por la IPS/EPS: ")
        self.direccion = input("Ingrese la dirección de la IPS/EPS: ")
        nuevaEntidad = Entidad(self.nombre, self.nitro, self.categoria, self.serviciosOfrecidos, self.direccion)
        self.añadirEntidad(nuevaEntidad)
        
    def añadirEntidad(self, nuevaEntidad):
        pass