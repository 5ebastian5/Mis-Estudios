from Persona import*
from Pedido import*
from Libro import*
class Usuario (Persona):
    def __init__(self, nombre, direccion, telefono, identificacion,tipoUsuario,contraseña):
        super().__init__(nombre, direccion, telefono, identificacion,tipoUsuario,contraseña)

        