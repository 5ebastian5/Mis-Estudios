#include<iostream>
#include<string.h>
#include<conio.h>

using namespace std;

int main(){
	
	int empleados, tiempo, ganador = 0, candidato, candidato_tiempo,h, m, s, bandera = 1;
	char nombre,ganador_nombre, candidato_nombre;

	
	do{
		
		cout<<"Digite el nombre del empleado y el tiempo (en segundos) en que se demoro en realizar la tarea "<<endl;
		cin>>nombre;
		cin>>tiempo;

		while(bandera == 1){
			
			candidato = 0;
			
		if(tiempo > candidato){
	
			candidato_nombre = nombre;
			candidato = tiempo;
		}	
		bandera = 2;
		}
		
		if(tiempo <= candidato){
			
			ganador_nombre = nombre;
			ganador = tiempo;
		}
		cout<<"si hay otro empleado en la competencia ingrese 1, si no ingrese otro valor: ";
		cin>>empleados;
		cout<<""<<endl;
		
	}while(empleados == 1);
	
	h = ganador/3600;
	ganador = ganador%3600;
	m = ganador / 60;
	s = ganador % 60;
	
	cout<<"El ganador de la competencia y de la table es el empleado "<<ganador_nombre<<" en un tiempo de "<<h<<" horas, "<<m<<" minutos y "<<s<<" segundos"<<endl<<endl;
	cout<<"Muchas gracias por competir";
	
	getch();
	return 0;
}
