from AdministradorA import Administrador
from EntidadA import Entidad
from PersonalA import Personal
formulario={'1. Sobre Usted      ': False,'2. Sobre la IPS/EPS ': False,'3. Sobre el personal': False}
administradores=[]
VIP=Administrador('Juan','Sebastian','Riaño','Rivera','C.C','1032392643','14','02','01','2005','3506666940','Sebastian','piopio')
administradores.append(VIP)
def base():
    print('\n')
    print('≛'*50,'\n')
    print('☲'*12,'Bienvenido a SoftHealth','☲'*12)
    if primeraVez() == True:
        if personaOadministrador()== True:
            print('Por favor, registre su información personal y de contacto.')
        else:
            seParteDeNosotrosRegistro(seParteDeNosotros(formulario),formulario)
    else:
        print('Por favor, siga las instrucciones para acceder a su cuenta.')

def primeraVez():
    opcion=0
    while opcion<1 or opcion>2:
        opcion=int(input(('¿Es primera vez en SoftHealth?\n\t1. Sí.\n\t2. No.\nDigite su respuesta: ')))
    if opcion==1:
        return True
    else:
        return False
def personaOadministrador():
    opcion=0
    while opcion<1 or opcion>2:
        opcion=int(input(('¿Quien intenta registrarse en SoftHealth?\n\t1. Usuario/Paciente.\n\t2. Administrador IPS/EPS.\nDigite su respuesta: ')))
    if opcion==1:
        return True
    else:
        return False 
def seParteDeNosotros(formulario):
    opcion=0
    print('\nCompleta los tres registros para continuar.','☲'*20)
    for indice in formulario:
        print('       ',indice,' - Estado:', formulario[indice])
    while opcion<1 or opcion>3:
        opcion=int(input(('Opcion: ')))
    print('☲'*100)
    return opcion
def seParteDeNosotrosRegistro(opcion, formulario):
    if opcion==1:
        Administrador.registrarAdministrador()
        formulario[0]=True
        return formulario
    elif opcion==2:
        Entidad.registrarEntidad()
        formulario[1]= True
        return formulario
    else:
        Personal.registrarPersonal()
        formulario[2]= True
        return formulario
    
    
    
base()
