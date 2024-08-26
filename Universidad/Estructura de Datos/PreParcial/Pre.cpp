#include<iostream>
#include<stdio.h>

using namespace std;
struct vendedor{
	int cod;
	char nombre[20];
	float ventas;
	float comision;
};

main(){
	vendedor socios[8];
	float Venta1,Venta2,Venta3, TotalVentas, comision;
	FILE *p;
	p=fopen("ventas.txt","r");
	for(int i=0;i<8;i++){
		fscanf(p,"%d %s %f %f %f",&socios[i].cod,&socios[i].nombre,&Venta1,&Venta2,&Venta3);
		TotalVentas=Venta1+Venta2+Venta3;
		if(TotalVentas>10)
			comision=TotalVentas*0.08;
		else
			comision=TotalVentas*0.05;
		socios[i].ventas=TotalVentas;
		socios[i].comision=comision;
	//cout<<"\n"<<socios[i].cod<<"\t"<<socios[i].nombre<<"\t"<<socios[i].ventas<<"\t"<<socios[i].comision;
	}
	
	for(int i=0;i<8;i++){
		cout<<"\n"<<socios[i].cod<<"\t"<<socios[i].nombre<<"\t"<<socios[i].ventas<<"\t"<<socios[i].comision;
	}
	return 0;
}
