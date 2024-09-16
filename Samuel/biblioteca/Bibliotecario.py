from Persona import*
class Bibliotecario (Persona):
    def __init__(self, nombre, direccion, telefono, identificacion, codigoEmpleado):
        super().__init__(nombre, direccion, telefono, identificacion)
        self.codigoEmp = codigoEmpleado
        
    def crearReserva (self,usuario,ids,i2):
        usuario.reservar(ids,i2)       
        