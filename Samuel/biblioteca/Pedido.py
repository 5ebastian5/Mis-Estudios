from Libro import*

class Pedido ():
    def __init__(self, identificacionPedido) :
        self.__identificacionPedido = identificacionPedido
        
    def obtenerPedidosC():
        archivo = open('pedidos.txt','r', encoding='utf-8')
        pedidosCompleta=archivo.readlines()
        archivo.close()
        return pedidosCompleta
    def obtenerPedidosS():
        pedidosSeparada=[]
        pedidosCompleta=Pedido.obtenerPedidosC()
        for line in range(len(pedidosCompleta)):
            pedidosSeparada.append(pedidosCompleta[line].split())
        return pedidosSeparada
        
        
    
    
    