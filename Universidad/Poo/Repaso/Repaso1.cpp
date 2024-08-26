/*Ejercicio: Determinar si el total de ventas realizadas en un establecimiento durante un dia es superior a $5000000, 
de ser asi se debe decir cual es el porcentaje de ganancia sabiendo que este es el 10% del valor vendido.
tenga en cuenta que el proceso de venta se lleva a cabo de la siguiente manera: 
*si llega un cliente a comprar puede realizar este proceso cuantas veces quiera y con la cantidad de productos que requiera.
 en el dia podran llegar muchos clientes que realizaron compras en el establecimiento en ese dia y determinar
 cuantos de ellos pagaron con tarjeta de credito ya que ellos deben pagar un excedente del 5% por la compra realizada por lo tanto se debe mostrar 
 cuanto dinero se recaudo por compras con tarjeta.
 
 Analisis:
 -Determinar si el total de ventas realizadas en un establecimiento durante un dia es superior a $5000000.-(teniendo en cuanta el 5% porciento mas de las tarjetas).
 -¿cual es el porcentaje de ganancia? sabiendo que este es el 10% del valor vendido.-(teniendo en cuanta el 5% porciento mas de las tarjetas).
 -mostrar cuanto dinero se recaudo por compras con tarjeta.-
 -¿Cuantos pagaron con tarjeta?.-
 -¿Cual es el producto mas vendido?.-
  
 Procesos:
 -Primero se pide la informacion de si ingreso un cliente o no, y se hace un  en el cual confirmaremos si entro un cliente o no.
 -Luego preguntaremos cuantos productos (Bombo = 100.000, Caja = 150.000, Tomb = 80.000, Cencerro = 40.000, Crash = 300.000, Ride = 300.000, HiHat = 200.000)
 de la tienda compro el cliente; esto preguntando producto por producto y validando la informacion recibida con un while.
 -Para validar si el cliente pago con tarjeta o no hacemos un sistema similar al de validar si entro un cliente o no.
 -Y para saber que cantidad total de productos fueron compraddos durante la semana al final del while se sumara la variable que contiene el producto 
 comprado por el cliente y el total guardando el resultado en el total.
 -Para mostrar el total de dinero que gano el local simplemente hacemos una multiplicacion entre el precio de el objeto y la cantidad que compro y 
 la guardamos en una variable por producto; las cuales sumaremos y 
 aÃ±adiremos a una variable mas que acumulara el dinero para despues sumarlo al de otros clientes y asi tener el total.
 -Y para determinar si este es mayor a 5000000 pondremos un if que reconozca esto y se lo muestre al usuario.
 -Para Saber las ganancias simplemente se hace un cout que muestre el resultado de la division de el valor total de dinero que obtuvo la tienda y 
 10 que es el porcentaje dicho en el enunciado.
 -Para los clientes que pagaron con tarjeta se hace un procedimiento parecido al que se hace para saber el total de dinero ganado con la excepcion de 
 que la linea que suma todos los productos esta dentro del while que comprueba las tarjetas.
 -
 */
 
#include<iostream>
#include<conio.h>
#include<cstdlib>

using namespace std;

int main(){
	setlocale(LC_ALL,"spanish");
	int IngresoDeClientes, ComprobanteTarjeta, CONTCliente=1, CONTClientesTarjeta=0, CONTDinero=0,CONTDineroTar=0;
	int Bombo=100000, Caja=150000, Tomb=80000, Cencerro=40000, Crash=300000, Ride=300000, HiHat=200000;
	int BombosCompradosC=0, CajasCompradosC=0, TombsCompradosC=0, CencerrosCompradosC=0, CrashCompradosC=0, RideCompradosC=0, HiHatCompradosC=0;
	int BombosCompradosT=0, CajasCompradosT=0, TombsCompradosT=0, CencerrosCompradosT=0, CrashCompradosT=0, RideCompradosT=0, HiHatCompradosT=0;
	int PagarBombo=0, PagarCaja=0, PagarTomb=0, PagarCencerro=0, PagarCrash=0, PagarRide=0, PagarHiHat=0;
system("color d");
	////////////////////////////////////////////////////////BIENVENIDO AL SOFTWARE/////////////////////////////////////////////////////
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n                                     ¡Bienvenido a su caja registradora!"<<endl;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n                                   (ingrese cualquier tecla para empezar)"<<endl;
	getch();
	
	//////////////////////////////////////////////////////////////REGISTRO DE COMPRAS POR CLIENTE//////////////////////////////////////////////////////////
system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                Ingrese 1 para registrar un cliente, si no ingrese otro valor. "<<endl;
	cin>>IngresoDeClientes;
	while(IngresoDeClientes==1){
system("cls");
		cout<<"-------------------------------------------------CLIENTE "<<CONTCliente<<"-------------------------------------------------";
		cout<<"\n¿Cuantos bombos compro el cliente "<<CONTCliente<<"? "<<endl;
		cin>>BombosCompradosC;
		while(BombosCompradosC<0||BombosCompradosC>33){
			cout<<"Ingrese un numero de compras valido. "<<endl;
			cin>>BombosCompradosC;
		}
		PagarBombo=Bombo*BombosCompradosC;
		
		cout<<"\n¿Cuantas cajas compro el cliente "<<CONTCliente<<"? "<<endl;
		cin>>CajasCompradosC;
		while(CajasCompradosC<0||CajasCompradosC>33){
			cout<<"Ingrese un numero de compras valido. "<<endl;
			cin>>CajasCompradosC;
		}
		PagarCaja=Caja*CajasCompradosC;
		
		cout<<"\n¿Cuantos tombs compro el cliente "<<CONTCliente<<"? "<<endl;
		cin>>TombsCompradosC;
		while(TombsCompradosC<0||TombsCompradosC>33){
			cout<<"Ingrese un numero de compras valido. "<<endl;
			cin>>TombsCompradosC;
		}
		PagarTomb=Tomb*TombsCompradosC;
		
		cout<<"\n¿Cuantos cencerros compro el cliente "<<CONTCliente<<"? "<<endl;
		cin>>CencerrosCompradosC;
		while(CencerrosCompradosC<0||CencerrosCompradosC>33){
			cout<<"Ingrese un numero de compras valido. "<<endl;
			cin>>CencerrosCompradosC;
		}
		PagarCencerro=Cencerro*CencerrosCompradosC;
		
		cout<<"\n¿Cuantos Crash compro el cliente "<<CONTCliente<<"? "<<endl;
		cin>>CrashCompradosC;
		while(CrashCompradosC<0||CrashCompradosC>33){
			cout<<"Ingrese un numero de compras valido. "<<endl;
			cin>>CrashCompradosC;
		}
		PagarCrash=Crash*CrashCompradosC;
		
		cout<<"\n¿Cuantos ride compro el cliente "<<CONTCliente<<"? "<<endl;
		cin>>RideCompradosC;
		while(RideCompradosC<0||RideCompradosC>33){
			cout<<"Ingrese un numero de compras valido. "<<endl;
			cin>>RideCompradosC;
		}
		PagarRide=Ride*RideCompradosC;
		
		cout<<"\n¿Cuantos HiHat compro el cliente "<<CONTCliente<<"? "<<endl;
		cin>>HiHatCompradosC;
		while(HiHatCompradosC<0||HiHatCompradosC>33){
			cout<<"Ingrese un numero de compras valido. "<<endl;
			cin>>HiHatCompradosC;
		}
		PagarHiHat=HiHat*HiHatCompradosC;
		
		//////////////////////////////////////////COMPROBANTE DE TARJETA////////////////////////////////////////////
system("cls");
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n                            ¿El cliente "<<CONTCliente<<" pago con tarjeta? ingrese 1 si es asi y otro digito si no. "<<endl;
		cin>>ComprobanteTarjeta;
		while(ComprobanteTarjeta==1){
			CONTClientesTarjeta++;
			CONTDineroTar+=PagarBombo+PagarCaja+PagarTomb+PagarCencerro+PagarCrash+PagarRide+PagarHiHat;
			CONTDineroTar=CONTDineroTar+((CONTDineroTar*5)/100);
			break;
		}
		
		////////////////////////////////////////////CONTADOR DE OBJETOS COMPRADOS EN TOTAL/////////////////////////////////////////////////////
		CONTCliente++;
		BombosCompradosT+=BombosCompradosC;
		CajasCompradosT+=CajasCompradosC;
		TombsCompradosT+=TombsCompradosC;
		CencerrosCompradosT+=CencerrosCompradosC;
		CrashCompradosT+=CrashCompradosC;
		RideCompradosT+=RideCompradosC;
		HiHatCompradosT+=HiHatCompradosC;
		CONTDinero+=PagarBombo+PagarCaja+PagarTomb+PagarCencerro+PagarCrash+PagarRide+PagarHiHat;
		
		///////////////////////////////////////////////////OPCION DE OTRO CLIENTE/////////////////////////////////////////////////////////
system("cls");
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n                               Ingrese 1 para registrar un cliente, si no ingrese otro valor. "<<endl;
		cin>>IngresoDeClientes;
	}
	
	
	///////////////////////////////////////////////////////////TOTAL DINERO///////////////////////////////////////////////
system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                   El numero de clientes que pago con tarjeta es de "<<CONTClientesTarjeta<<"."<<endl;
	cout<<"\n                             El total de dinero recibido por ventas en tarjetas es de $"<<CONTDineroTar<<"."<<endl;
	cout<<"\n                  El total de dinero recibido en el dia es de $"<<CONTDinero<<" (quitando el excedente por uso de tarjeta).";

getch();
		if(CONTDinero>5000000){
			system("cls");
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                   ¡Los ingresos son mayores a $50000000! ";
			cout<<"\n                                   Sus ganancias son de "<<CONTDinero/10<<".";
		}else{
			system("cls");
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                   Sus ingresos no son mayores a $5000000. ";
			cout<<"\n                                   Sus ganancias son de "<<CONTDinero/10<<".";
		}
getch();
		
	////////////////////////////////////////CANTIDAD DE PRODUCTOS COMPRADOS (PARA SABER EL MAS COMPRADO)///////////////////////////////////////////
	system("cls");
	cout<<"\n\n\n\n\n\n\n                                   La cantidad de bombos comprados es de: "<<BombosCompradosT<<".";
	cout<<"\n                                   La cantidad de cajas comprados es de: "<<CajasCompradosT<<".";
	cout<<"\n                                   La cantidad de tombs comprados es de: "<<TombsCompradosT<<".";
	cout<<"\n                                   La cantidad de cencerros comprados es de: "<<CencerrosCompradosT<<".";
	cout<<"\n                                   La cantidad de crash comprados es de: "<<CrashCompradosT<<".";
	cout<<"\n                                   La cantidad de ride comprados es de: "<<RideCompradosT<<".";
	cout<<"\n                                   La cantidad de HiHat comprados es de: "<<HiHatCompradosT<<".";
getch();
	
system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                   ¡Que tenga linda jornada laboral!";
getch();
system("cls");
	
	
	return 0;
}
