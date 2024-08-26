/*Un establecimiento que vende n productos desea conocer cual es el mas vendido, tambie el total de ganancia obtenida por el establecimiento sabiendo que al precio de compra se le hace un incrementono mayor al 50%.
Para obtener el precio de venta se debe realizar la factura de cada cliente por compra realizada. teniendo en cuenta que el proceso de venta se lleva a cabo hasat que el cliente lo deseey con la cantidad de productos que este lo requiera,
lo debe pagar el cliente y este no se tiene en cuenta como ganancia para el establecimiento. 

Analisis.
*Primero se pide la informacion de si ingreso un cliente o no, y se hace un while en el cual se entrara solo si la variable "ingresodeclentes" es uno.

 */
 
#include<iostream>
#include<conio.h>
#include<cstdlib>

using namespace std;

int main(){
	setlocale(LC_ALL,"spanish");
	
system("color d");
	////////////////////////////////////////////////////////BIENVENIDO AL SOFTWARE/////////////////////////////////////////////////////
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n                                               ¡Bienvenido!"<<endl;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n                                   (ingrese cualquier tecla para empezar)"<<endl;
	getch();
	
	//////////////////////////////////////////////////////////////REGISTRO DE COMPRAS POR CLIENTE//////////////////////////////////////////////////////////
system("cls");
int ingresodeclientes;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                Ingrese 1 para registrar un cliente, si no ingrese otro valor. "<<endl;
	cin>>ingresodeclientes;
	while(ingresodeclientes==1){
		mostrarlista(void);
		
	}
	
return 0;
}

mostrarlista(void){
	cout<<"                               Esta es la lista de productos:\n"
}
