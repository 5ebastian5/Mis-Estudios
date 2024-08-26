# Solicite una fecha al usuario. en formato día, mes y año. Dígale cuanto tiempo
# ha pasado desde esa fecha hasta hoy o cuanto falta para llegar a esa fecha si es
# posterior
from datetime import datetime

fecha_actual = datetime.now().date()
fecha_ingresada = input('Ingrese la fecha en formato día/mes/año (por ejemplo, 16/07/2024): ')
x = datetime.strptime(fecha_ingresada, '%d/%m/%Y').date()
diferencia = fecha_actual - x

if fecha_actual >= x:
    print('Han pasado ',diferencia.days,' días desde la fecha ingresada hasta hoy.')
else:
    print('Faltan ',-diferencia.days,' días para llegar a la fecha ingresada.')