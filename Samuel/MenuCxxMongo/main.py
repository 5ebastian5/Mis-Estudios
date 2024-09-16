import pymongo

client = pymongo.MongoClient('mongodb://localhost:27017/')
database = client['resbar']
categoriaC = database['Categoria']
ordenC = database['orden']
productoC = database['Producto']


def menu():
    print('Bienvenido al menu de consulta')
    opcion = int(input('\t1. Enlistar productos segun precio.\n\t2. Filtro mesa/precio.\n\t3. Si un mesero en especifico vendio algo en especifico.\n\t4. Top mesas.\n\t5.blabla.\n\tOpcion:'))
    return opcion

def productoSegunPrecio():
    minimo = float(input('Ingrese el precio minimo: '))
    maximo = float(input('Ingrese el precio maximo: '))
    categoria = input('Ingrese la categoria que busca: ')
    query = productoC.find({'$and':[{'precio':{'$gte':minimo}}, {'precio':{'$lte':maximo}}, {'categoria.nombre':categoria}]})
    for x in query:
        print(x)

def mesaMayor():
    mesa = int(input('Ingrese la mesa especifica: '))
    minimo = float(input('Ingrese el precio minimo: '))
    maximo = float(input('Ingrese el precio maximo: '))
    query = ordenC.find({'$and':[{'precio':{'$gte':minimo}}, {'precio':{'$lte':maximo}},{'mesa':mesa}]})
    for x in query:
        print(x)

def meseroPedido():
    mesero = input('Ingrese el nombre del mesero: ')
    pedido = input('Ingrese el nombre del pedidio que busca: ')
    print(ordenC.find({'$and':[{'mesero':mesero}, {'detalleOrden.nombre':pedido}]}))
        
def topMesas():
    query = ordenC.find({{'mesa'}},{{'total':1}})
    for x in query:
        print(x)

def blabla():
    pass

opcion = menu()
match opcion:
    case 1:
        productoSegunPrecio()
    case 2:
        mesaMayor()
    case 3:
        meseroPedido()
    case 4:
        topMesas()
    case 5:
        blabla()
    case _:
        print('Opcion invalida')