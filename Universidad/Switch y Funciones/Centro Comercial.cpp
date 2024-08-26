#include<iostream>
/*
Enunciado: Realice un programa que determine por cada piso de un centro comercial de 3 pisos, el
total de dinero recolectado por ventas de cada uno de los locales por piso, tambièn mostrar el
total de dinero recolectado en todo el centro comercial.

Analisis:
Â¿Que se pide?
Mostrar el total de dinero recolectado por ventas de cada local por piso y el numero total de
ventas en todo el centro comercial.
Â¿Como se llega a lo que se pide?
1. Se pide la informacion de cuantos locales hay por cada piso.
2. Se pregunta piso por piso, local por local el numero de ventas y total recolectado en cada local.
3. la informacion anterior se divide en -ventas por local-, -ventas por piso-, -ventas todo el centro comercial- y se muestra de esa manera.

¿Se llego a lo que se pide?
Si, se muestra el total de dinero recolectado por ventas de cada local por piso y el numero total de
ventas en todo el centro comercial.
*/

using namespace std;

int main()
{
	int Loc1=0, Loc2=0, Loc3=0, NumVLoc1=0, NumVLoc2=0, NumVLoc3=0, TLoc1=0, TLoc2=0, TLoc3=0, TotalVP1=0, TotalVP2=0, TotalVP3=0, TotalDP1=0, TotalDP2=0, TotalDP3=0;
	setlocale(LC_ALL,"spanish");
//Saber el numero locales piso 1
	cout<<"¿Cuantos locales hay en el piso 1? ";
	cin>>Loc1;
	
	while(Loc1<1||Loc1>70)
	{
		cout<<"\ningrese un numero valido de locales ";
		cin>>Loc1;
	}
//Saber numero de locales piso 2
	cout<<"\n¿Cuantos locales hay en el piso 2? ";
	cin>>Loc2;
	
	while(Loc2<1||Loc2>70)
	{
		cout<<"\ningrese un numero valido de locales ";
		cin>>Loc2;
	}
//Saber numero de locales piso 3
	cout<<"\n¿Cuantos locales hay en el piso 3? ";
	cin>>Loc3;
	
	while(Loc3<1||Loc3>70)
	{
		cout<<"\ningrese un numero valido de locales ";
		cin>>Loc3;
	}
//Saber Total dinero y ventas piso 1
	for (int i=1; i<=Loc1; i++){
		cout<<"\nDigite el numero de ventas del local y el total del dinero recaudado del local "<<i<<" de el piso 1 "<<endl;
		cin>>NumVLoc1>>TLoc1;
		
		while(NumVLoc1<1||NumVLoc1>999||TLoc1<49||TLoc1>999999999)
		{
			cout<<"\nRevise los datos y digite otra vez porfavor "<<endl;
			cin>>NumVLoc1>>TLoc1;
		}
		TotalVP1+=NumVLoc1;  //total_piso1=total_piso1+numero_ventas_local1  
		TotalDP1+=TLoc1; 
   }
//Saber Total dinero y ventas piso 2
	for (int i=1; i<=Loc2; i++){
		cout<<"\nDigite el numero de ventas del local y el total del dinero recaudado del local "<<i<<" de el piso 2 "<<endl;
		cin>>NumVLoc2>>TLoc2;
		
		while(NumVLoc2<1||NumVLoc2>999||TLoc2<49||TLoc2>999999999)
		{
			cout<<"\nRevise los datos y digite otra vez porfavor "<<endl;
			cin>>NumVLoc2>>TLoc2;
		}
		
		TotalVP2+=NumVLoc2;  //total_piso1=total_piso1+numero_ventas_local1  
		TotalDP2+=TLoc2;
	}
//Saber Total dinero y ventas piso 3
	for (int i=1; i<=Loc3; i++){
		cout<<"\nDigite el numero de ventas del local y el total del dinero recaudado del local "<<i<<" de el piso 3 "<<endl;
		cin>>NumVLoc3>>TLoc3;
		
		while(NumVLoc3<1||NumVLoc3>999||TLoc3<49||TLoc3>999999999)
		{
			cout<<"\nRevise los datos y digite otra vez porfavor "<<endl;
			cin>>NumVLoc3>>TLoc3;
		}
		
		TotalVP3+=NumVLoc3;  //total_piso1=total_piso1+numero_ventas_local1  
		TotalDP3+=TLoc3;
	}
	
	
	cout<<"\nLa cantidad de ventas en el piso 1 es "<<TotalVP1<<"\nLa cantidad de Dinero en el piso 1 es "<<TotalDP1<<endl;
	cout<<"\nLa cantidad de ventas en el piso 2 es "<<TotalVP2<<"\nLa cantidad de Dinero en el piso 2 es "<<TotalDP2<<endl;
	cout<<"\nLa cantidad de ventas en el piso 3 es "<<TotalVP3<<"\nLa cantidad de Dinero en el piso 3 es "<<TotalDP3<<endl;
	cout<<"\nEl numero de ventas en todo el centro comercial fue de "<<TotalVP1+TotalVP2+TotalVP3<<"\nLa cantidad de dinero en todo el centro comercial es de "<<TotalDP1+TotalDP2+TotalDP3<<endl;
	return 0;
}
