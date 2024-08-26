#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	
	int dado1 = 0, dado2 = 0, estudiantes, turnos, puntos_ganador = 0, estudiante_ganador;
	
	cout<<"Ingrese la cantidad de estudiantes que participaran en el juego: ";
	cin>>estudiantes;
	cout<<""<<endl;
	
	while(estudiantes <= 0){
		
		cout<<"Ingrese una cantidad correcta por favor"<<endl;
		cin>>estudiantes;
	}

	for(int i=1; i <= estudiantes; i++){
		
		cout<<""<<endl;
		cout<<"Ingrese la cantidad de turnos que el estudiante "<<i<<" tiene: ";
		cin>>turnos;
		
		while(turnos <= 0 or turnos > 10){
			
			cout<<"Por favor digite una cantidad correcta"<<endl;
			cin>>turnos;
			
		}
		
		int puntos = 0;
		
		for( int o=1; o <= turnos;o++){
			
			dado1 = 1 + rand() % 6;
			dado2 = 1 + rand() % 6;
			
			if(dado1 == dado2){
				puntos += dado1;
			}
			cout<<""<<endl;
			cout<<"El estudiantes "<<i<<" en el turno "<<o<<" saco: "<<endl;
			cout<<"En el primer dado = "<<dado1<<endl;
			cout<<"Y en el segundo dado saco = "<<dado2<<endl;
			
			cout<<"tiene "<<puntos<<" puntos."<<endl;
		}
		
		if(puntos > puntos_ganador){
			estudiante_ganador = i;
			puntos_ganador = puntos; 
		}
		
	}
	cout<<""<<endl;
	cout<<"EL estudiante "<<estudiante_ganador<<" ha ganado con "<<puntos_ganador<<" puntos";
	
	return 0;
}
