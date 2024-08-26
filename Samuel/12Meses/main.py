
import random
meses=['Enero', 'Febrero', 'Marzo', 'Abril', 'Mayo', 'Junio', 'Julio', 'Agosto', 'Septiembre', 'Octubre', 'Noviembre', 'Diciembre']

def sumaProm(lista):
    suma=0
    for i in range(1,len(lista)):
        suma=+suma+int(lista[i])
        promedio=suma//len(lista[1:])
    return promedio

def maximo(promedios):
    x=0
    for i in range(len(promedios)):
        for j in range(len(promedios)-1):
            if promedios[j]>promedios[j+1]:
                promedios[j], promedios[j+1] = promedios[j+1], promedios[j]
    return promedios

def llenarMes():
    return random.randint(7,22)
    
def llenarAño(line):
    with open('archivo.txt','a',encoding='utf-8') as archivo:
        archivo.write(f'{meses[line]}: ')
        for i in range(30):
            if i == 29:
                archivo.write(f'{llenarMes()}')
            else:
                archivo.write(f'{llenarMes()} ')
        archivo.write('\n')

def promedio(archivo):
    temperaturas= []
    promedios = []
    listaAnual=(archivo.readlines())
    for line in range(12):
        temperaturas.append(listaAnual[line].split())
    for line in range(12):
        promedios.append(sumaProm(temperaturas[line]))
    
    return promedios
    

def mayor(archivo):
    promedios=promedio(archivo)
    return maximo(promedios)

input('\nSe creara un archivo con los 12 meses del año y se llenara con temperaturas diarias al azar. (Enter para continuar)')
for line in range(12):
    llenarAño(line)
input('El archivo se ha creado. (Enter para continuar)\n')

print('La siguiente muestra los promedios de temperatura de cada mes: ')
archivo= open('archivo.txt', 'r', encoding='utf-8')
print(promedio(archivo))
archivo.close()
input('(Enter para continuar)\n')

print('La siguiente muestra la temperatura máxima y mínima de cada mes: ')
archivo= open('archivo.txt', 'r', encoding='utf-8')
print('La mayor temperatura fue: ',mayor(archivo)[0])
archivo.close()

archivo= open('archivo.txt', 'r', encoding='utf-8')
print('La menor temperatura fue: ',mayor(archivo)[-1])
archivo.close()
input('(Enter para salir)')

    

    
           

    