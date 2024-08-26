//Taller 0; Estructura de datos.


#include<iostream>
#include<conio.h>
#include<cmath>
#include<string.h>
#include<math.h>

using namespace std;
void PerimetroCirculo();
void VolumenCono();
void NegocioNaturista();
void Grados();
void Alambre();
void ConvertidorSegundos();
void Cajero();
void ejecutar_menu(int opcion_ejercutar);

int mostrar_menu();

int main()
{
	int opcion_menu;
	do
	{
		opcion_menu=mostrar_menu();
		ejecutar_menu(opcion_menu);
	}while(opcion_menu>0 && opcion_menu<8);
	
	getch();
	return 0;
}

void PerimetroCirculo()
{setlocale(LC_ALL,"spanish");

	system("cls");
	float Radio, Pi=3.141592;
	
	cout<<"Introduzca radio el radio del circulo al que le quiere calcular el perimetro (en centimetros)"<<endl;cin>>Radio;
	cout<<"El perimetro es: "<<2*Pi*Radio;
	
	getch();
}

void VolumenCono()
{setlocale(LC_ALL,"spanish");
	
	system("cls");
	double Radio, Altura, AreaBase;

	cout<<"Ingrese el radio del cono "<<endl;cin>>Radio;
	cout<<"Ingrese el altura del cono "<<endl;cin>>Altura;
	AreaBase=M_PI*pow(Radio,2);
	cout<<"El volumen es: "<<(AreaBase*Altura)/3;
	getch();
}

void NegocioNaturista()
{setlocale(LC_ALL,"spanish");

	system("cls");
	int Hierbas=2000, Gotas=5000, Cremas=10000;
	int CantHierbas=0, CantGotas=0, CantCremas=0;
	
	cout<<"¿Cuantas hierbas compro el cliente? "<<endl;cin>>CantHierbas;
		while(CantHierbas<1||CantHierbas>1000){
			cout<<"Ingrese un numero de compras valido ";cin>>CantHierbas;
		}
	cout<<"¿Cuantas gotas compro el cliente? "<<endl;cin>>CantGotas;
		while(CantGotas<1||CantGotas>1000){
			cout<<"Ingrese un numero de compras valido ";cin>>CantGotas;
		}
	cout<<"¿Cuantas cremas compro el cliente? "<<endl;cin>>CantCremas;
		while(CantCremas<1||CantCremas>1000){
			cout<<"Ingrese un numero de compras valido ";cin>>CantCremas;
		}
	cout<<"Usted compró "<<CantHierbas<<" hierbas, por lo que pagara por las hierbas: "<<CantHierbas*Hierbas<<endl;
	cout<<"Usted compró "<<CantGotas<<" gotas, por lo que pagara por las gotas: "<<CantGotas*Gotas<<endl;
	cout<<"Usted compró "<<CantCremas<<" cremas, por lo que pagara por las cremas: "<<CantCremas*Cremas<<endl;
	cout<<"Su total a pagar es de: "<<(CantHierbas*Hierbas)+(CantGotas*Gotas)+(CantCremas*Cremas);
	getch();
}

void Grados()
{setlocale(LC_ALL,"spanish");

	cout<<"Hola mundo";

}

void Alambre()
{setlocale(LC_ALL,"spanish");

	cout<<"Hola mundo";

}

void ConvertidorSegundos()
{setlocale(LC_ALL,"spanish");

	system("cls");
	int Hora=0, Minutos=0, Segundos=0, SegundosT=0;
	
	cout<<"Ingrese la hora ";cin>>Hora;
		while(Hora<0||Hora>100){
			cout<<"Ingrese cantidad de horas valida ";cin>>Hora;
		}
	
	cout<<"Ingrese los minutos ";cin>>Minutos;
		while(Minutos<0||Minutos>60){
			cout<<"Ingrese una cantidad de minutos valida ";cin>>Minutos;
		}
		cout<<"Ingrese los segundos ";cin>>Segundos;
		while(Segundos<0||Segundos>60){
			cout<<"Ingrese una cantidad de segundos valida ";cin>>Segundos;
		}
	Minutos=+Hora*60;
	SegundosT=(Minutos*60)+Segundos;
	cout<<"La cantidad de segundos es: "<<SegundosT;
	

}

void Cajero()
{setlocale(LC_ALL,"spanish");

	
	
	

}

int mostrar_menu()
{setlocale(LC_ALL,"spanish");
	int respuesta;
	system("cls");
	cout<<"\n      MENU"<<endl;
	cout<<"¿Que punto desea ejecutar?"<<endl;
	cout<<"1. Saber perimetro del circulo."<<endl;
	cout<<"2. Saber volumen cono."<<endl;
	cout<<"3. Negocio naturista."<<endl;
	cout<<"4. Convertidor de grados."<<endl;
	cout<<"5. Figuras de alambre."<<endl;
	cout<<"6. Convertidor de segundos."<<endl;
	cout<<"7. Cajero."<<endl;
	cout<<"8. ejercicio 5 / Salir"<<endl;
	cout<<"Opcion: "; cin>>respuesta;
	while(respuesta <1 || respuesta >8)
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
			cout<<"\n";PerimetroCirculo();break;
		case 2:
			cout<<"\n";VolumenCono();break;
		case 3:
			cout<<"\n";NegocioNaturista();break;
		case 4:
			cout<<"\n";Grados();break;
		case 5:
			cout<<"\n";Alambre();break;
		case 6:
			cout<<"\n";ConvertidorSegundos();break;
		case 7:
			cout<<"\n";Cajero();break;
		case 8:
			cout<<"\nMuchas Gracias por usar este servicio xd";break;
	}
}

