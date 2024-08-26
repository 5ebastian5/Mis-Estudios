#include<iostream>
/*Mostrar el nombre y salario de los n empleados de una empresa que ganan 3 veces un valor
ingresado por el dueño de la empresa
*/
using namespace std;

int main(){
	
	int empleados,salario,SMLV, final;
	char nombre[50];
	
	do{    	
      cout<<"ingrese el salario minimo legal vigente"<<endl;
	  cin>>SMLV;
	}while(SMLV>800000 && SMLV<1300000);
	
	do
	{
		cout<<"digite el nombre del empleado y el salario del emplado: "<<endl;
		cin>>nombre>>salario;
		
		while(salario <800000){
			cout<<"Digite un salario valido"<<endl;
			cin>>salario;
		}
		
		
		if (salario >= (SMLV*3)){
			cout<<"el empleado: "<<nombre<<" gana "<<salario<<endl;
		}
		else{
			cout<<"usted no cumple con el requesito para mostrar su nombre"<<endl;
		}
		
		cout<<"si hay mas empleados 1 sino otro valor"<<endl;
	    cin>>empleados;
	}while(empleados == 1);
	return 0;
}
