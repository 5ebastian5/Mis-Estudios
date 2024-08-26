# Cree una lista y conviértala a tupla con los valores de su nombre completo.
opcion = int(input('Elija un punto '))

if opcion == 1:
    nombrecompleto = ['Juan','Sebastian','Riaño','Rivera']

    tuplanombrecompleto = tuple(nombrecompleto)
 
    print (tuplanombrecompleto)
# ⁠cree dos tuplas y concatenelas
elif opcion == 2:
    positivos = 1,2,3,4
    negativos = -4,-3,-2,-1
    enteros=negativos+positivos
    print(enteros)
# ⁠haga una tupla de 10 valores y realice la desempaquetización
elif opcion ==3:
    tupla = 'Albert', 'Julian', 'Fabrizio', 'Nicolai','Nick','Dan','Wayne','Ben','Platzman','Tom'
    nombre1, nombre2, nombre3, nombre4, nombre5,nombre6, nombre7, nombre8, nombre9, nombre10 = tupla
    
    print(nombre3)

# Cree una tupla y use el método index que busque desde la posición 1 y encuentre el valor en la posición 8
elif opcion == 4:
    tupla = 1,2,3,4,5,6,7,8,9
    print(tupla.index(8, 1))
    
# cree una tupla usando el método count y que de como resultado 3
elif opcion == 5:
    tupla = 1,2,1,4,5,6,1,8,9
    print(tupla.count(1))
    
# Hay dos conjuntos de números.
# conj1 = set({1,2,3,4})
# conj2 = set({3,4,5,6})
# Encuentra los números repetidos y súmalos.

elif opcion ==6:
    conj1 = set({1,2,3,4})
    conj2 = set({3,4,5,6})
    valores=conj1.intersection(conj2)
    a, b= valores
    print(a+b)
    
# El encargado de un supermercado tuvo problemas al acomodar sus productos y el quiere saber cuales son los productos que se alcanzaron a pasar a las otras áreas.
# aseo = set({'Clorox','Jabón','Suavitel','Fabuloso','Fab','Varsol','Limpiavidrios'})
# granel = set({'Arroz','Harina','Clorox,'Lenteja','Café','Fab','Maíz'})

elif opcion==7:
    aseo = set({'Clorox','Jabón','Suavitel','Fabuloso','Fab','Varsol','Limpiavidrios'})
    granel = set({'Arroz','Harina','Clorox','Lenteja','Café','Fab','Maíz'})
    print(aseo.intersection(granel))
    
# En un colegio tenemos el curso 704 y el curso 705, el curso 705 tiene muy pocos estudiantes {Pepe, Luis, Juan, Pedro} por este motivo el curso se unirá con el 704 que son {Carlos, Felipe, Valentina, Maria, Yeferson y Camila}. Una los dos salones.
elif opcion == 8:
    curso704 = {'Carlos', 'Felipe', 'Valentina', 'Maria', 'Yeferson', 'Camila'}
    curso705 = {'Pepe', 'Luis', 'Juan', 'Pedro'}
    nuevocurso = curso705.union(curso704)
    print(nuevocurso)
#  En un conjuto de datos de una empresa se sabe que tiene estos productos {Aceites, Refrigerantes, Llantas, Radios, Limpia Pisos} el dueño quiere eliminar el 'Limpia Pisos' por que no va con su negocio.
elif opcion == 9:
    productos = {'Aceites', 'Refrigerantes', 'Llantas', 'Radios', 'Limpia Pisos'}
    productos.remove('Limpia Pisos')
    print(productos)
    
# Conj1 = set({1,2,3,4,5,6})
# Conj2 = set({7,8,9,10})
# Únalos, conviértalos en una lista y multiplíquelos
elif opcion == 10:
    multi=0
    Conj1 = set({1,2,3,4,5,6})
    Conj2 = set({7,8,9,10})
    conj3 = Conj1.union(Conj2)
    for i in conj3:
     multi=multi*conj3[i]
     
    print(multi)