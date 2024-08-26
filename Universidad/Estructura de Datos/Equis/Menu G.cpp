#include<iostream>
#include<conio.h>

using namespace std;

//////////////////THINGS///////////////////
int Factorial(int a);
float Potencia(float b, int e);
float GradosRadianes(int a);
//////////////////------//////////////////
//////////////////Menu//////////////////
float Seno(int a);
float Coseno(int);
void ejecutar_menu(int opcion_ejercutar);
int mostrar_menu();
/////////////////----//////////////////
int main()
{
	int opcion_menu;
	do
	{
		opcion_menu=mostrar_menu();
		ejecutar_menu(opcion_menu);
	}while(opcion_menu>0 && opcion_menu<2);
	
	getch();
	return 0;
}
/////////////////////////////////////////////////////////////////////////BIG///////////////////////////////////////////////////////////////////
float Seno(int a){setlocale(LC_ALL,"spanish");
system("cls");

	float x, Resultado=0;
	
	x=GradosRadianes(a);
	for(int n=0; n<=4;n++)
		Resultado+=Potencia(-1,n)*Potencia(x,2*n+1)/Factorial(2*n+1);
	return Resultado;	

getch();
}

//////////////////////////////////////////////////////////////////////---/////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////MENU////////////////////////////////////////////////////////////////////
int mostrar_menu(){setlocale(LC_ALL,"spanish");
	int respuesta;
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                    MENU"<<endl;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n                                     (ingrese cualquier tecla para empezar)"<<endl;
getch();
system("cls");
	cout<<"-----------------------------------¿Que punto desea ejecutar?-----------------------------------"<<endl;
	cout<<"1. Seno."<<endl;
	cout<<"2. Coseno."<<endl;
	cout<<"3. Salir."<<endl;
	cout<<"\n\n\n\n\n\n\n\n                                     Escriba el numero de su opcion: "; cin>>respuesta;
	while(respuesta<1||respuesta>3)
	{
		cout<<"\nPor favor digitar una opcion que este en el rango \n\n Opcion: ";cin>>respuesta;
	}
	return respuesta;
}

void ejecutar_menu(int opcion_ejecutar)
{
	switch(opcion_ejecutar)
	{
		case 1:
			Seno(int a);break;
		case 2:
			Coseno();break;
		case 3:
			system("cls");
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                         Muchas Gracias por usar este servicio xd";break;
	}

}
//////////////////////////////////////////////////////////////////////////----///////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////THINGS//////////////////////////////////////////////////////////////////////
int Factorial(int a){
	int Resultado=1;
		
		if(a<=0){
			for(int i=0;i<=a;i++)
				Resultado*=i;
		}else{
			Resultado=-1;cout<<endl<<"Valor no permitido"<<endl;
		}
return Resultado;
}

float Potencia(float b, int e){
	float Resultado=1;
	
		for(int i=1; i<=e; i++){
			Resultado*=b;
		}
return Resultado;
}

float GradosRadianes(int a){
return a*3.141592/180;
}
///////////////////////////////////////////////////////////////////////------//////////////////////////////////////////////////////////////////////////////


