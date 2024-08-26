#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

struct Estudiante{
	int Codigo;
	char Nombre[20];
	float Promedio;
};

int main(){setlocale(LC_ALL,"spanish");
    Estudiante Curso[8];
    int Bandera=0, PromedioCurso=0, Sumas=0, Menu, a;
    FILE *AP;
    
    cout<<"Menu"<<endl;
    cout<<"1. Cargar estudiantes."<<endl;
    cout<<"2. Mostrar datos del curso."<<endl;
    cout<<"3. Mostrar promedio del curso."<<endl;
    cout<<"4. Estudiates con mayor y menor promedio."<<endl;
    cout<<"5. Salir."<<endl;
    cout<<"Escriba el numero de su opcion: "; cin>>Menu;
	while(Menu<1 ||Menu>5){
		cout<<"\nPor favor digitar una opcion que este en el rango \n\n Opcion: ";cin>>Menu;
	}
    do{
        switch(Menu){
    		case 1:
    			Bandera=1;
    			for(int i=0; i<8;i++){
        			cout<<"\n\nDatos del estudiante "<<i+1;
        			cout<<"\nIngrese codigo ";
        			cin>>Curso[i].Codigo;
        			cout<<"Ingrese nombre ";
        			cin>>Curso[i].Nombre;
        			cout<<"Ingrese promedio ";
					cin>>Curso[i].Promedio;
   				}		
			break;
   		
			case 2:
				if(Bandera==0){
					cout<<"Primero cargue estudiantes en la opcion 1 del menu.";
					getch();
					break;
				}
				cout<<"\n\n Los Estudiantes ingresados son \n";
    			for(int i=0; i<8;i++){
            		cout<<"\n\nNombre: "<<Curso[i].Nombre<<"\nCodigo: "<<Curso[i].Codigo<<"\nPromedio: "<<Curso[i].Promedio;  
				}
			break;
	
			case 3:
				if(Bandera==0){
					cout<<"Primero cargue estudiantes en la opcion 1 del menu.";
					break;
				}
				for(int i=0; i<8;i++){
					Sumas+=Curso[i].Promedio;
				}
				PromedioCurso=Sumas/8;
				cout<<"El promedio del curso es: "<<PromedioCurso;
			break;
		
			case 4:
				if(Bandera==0){
					cout<<"Primero cargue estudiantes en la opcion 1 del menu.";
					break;
				}
				cout<<"hola";
			break;
		
			case 5:
				cout<<"baibai";
		}	
	}while(Menu!=5);

    
    return 0;
}
