//TALLER CICLOS.


#include<iostream>
#include<conio.h>
#include<cmath>
#include<string.h>
#include<math.h>

using namespace std;
void Contador15a32();
void ContadorPersonalizado();
void SumaContador();
void ContadorPares();
void Multiplos();
void ContadorCifras();
void SumaContadorCifras();
void Divisores();
void SumaDivisores();
void Primos();
void PrimosAnteriores();
void SumaPrimos();
void Tablas();
void TablasAntes();
void Fibonacci();
void FibonacciUsuario();
void MostrarPares();
void Reversa();
void ejecutar_menu(int opcion_ejercutar);

int mostrar_menu();

int main()
{
	int opcion_menu;
	do
	{
		opcion_menu=mostrar_menu();
		ejecutar_menu(opcion_menu);
	}while(opcion_menu>0 && opcion_menu<19);
	
	getch();
	return 0;
}

void Contador15a32(){setlocale(LC_ALL,"spanish");/*1.	Escriba el listado de números del 15 al 32 en forma ascendente, luego en forma descendente.*/
system("cls");
	int Opcion, Ll=15, Lr=32;
	
	cout<<"1 iniciar.\nOtro salir."<<endl;cin>>Opcion;
		while(Opcion==1){
			
system("cls");
			cout<<"Ascendente: "<<endl;
				while(Ll<=32){
				cout<<Ll<<" ";
				Ll++;
				}
			cout<<"\nDescendete: "<<endl;
				while(Lr>=15){
				cout<<Lr<<" ";
				Lr--;
				}
			break;
		}
	
	getch();
}

void ContadorPersonalizado(){setlocale(LC_ALL,"spanish");/*2.	Leer los enteros a y b y escribir todos los enteros entre a y b de forma ascendente y luego de forma descendente.*/
system("cls");
	
		int a, b, a1, b1;
	
	cout<<"De un valor inicial ";cin>>a;
	cout<<"De otro valor ";cin>>b;
	a1=a;
	b1=b;
system("cls");
	if(a<b){
		cout<<"Ascendente: "<<endl;
			while(a<=b){
			cout<<a<<" ";
			a++;
			}
		cout<<"\nDescendete: "<<endl;
			while(b1>=a1){
			cout<<b1<<" ";
			b1--;
			}
	}else{
			cout<<"Ascendente: "<<endl;
			while(b<=a){
			cout<<b<<" ";
			b++;
			}
		cout<<"\nDescendete: "<<endl;
			while(a1>=b1){
			cout<<a1<<" ";
			a1--;
			}
	
	}
	getch();
}

void SumaContador(){setlocale(LC_ALL,"spanish");/*3. Para el ejercicio anterior calcule la suma de los números del listado.*/
system("cls");
	
	int a, b, a1, b1, aT=0, bT=0, a1T=0, b1T=0;
	
	cout<<"De un valor inicial ";cin>>a;
	cout<<"De otro valor ";cin>>b;
	a1=a;
	b1=b;
	
	if(a<b){
		cout<<"Ascendente: "<<endl;
			while(a<=b){
			cout<<a<<" ";
			aT+=a;
			a++;
			}
		cout<<"\nEl total de la suma de la lista es: "<<aT<<endl;
		cout<<"\nDescendete: "<<endl;
			while(b1>=a1){
			cout<<b1<<" ";
			b1T+=b1;
			b1--;
			}
		cout<<"\nEl total de la suma de la lista es: "<<b1T<<endl;
	}else{
			cout<<"Ascendente: "<<endl;
			while(b<=a){
			cout<<b<<" ";
			bT+=b;
			b++;
			}
			cout<<"\nEl total de la suma de la lista es: "<<bT<<endl;
		cout<<"\nDescendete: "<<endl;
			while(a1>=b1){
			cout<<a1<<" ";
			aT+=a1;
			a1--;
			}
		cout<<"\nEl total de la suma de la lista es: "<<aT<<endl;
	}
	getch();
}

void ContadorPares(){setlocale(LC_ALL,"spanish");/*4.	Pida al usuario ingresar números, termine cuando haya ingresado 5 pares, calcule y escriba la suma de los 5 pares. */
system("cls");
	int Numero, CONTPares=0, Suma=0;
	
	while(CONTPares<5){
		cout<<"Ingrese un numero "<<endl;cin>>Numero;
		if(Numero%2==0)
			{
				Suma+=Numero;
				CONTPares++;
			}
	}
	cout<<"\nLa suma de los numeros pares es de: "<<Suma;
	getch();
}

void Multiplos(){setlocale(LC_ALL,"spanish");/*5.	Pida al usuario los enteros a,b,c.  Escriba en pantalla los múltiplos de a que estén entre b y c.*/
system("cls");
	
	int a, b, c;
	cout<<"Digite 3 numeros "<<endl;cin>>a;cin>>b;cin>>c;
	if(b<c){
		b+=a;
		while(b<c) 
		{
			cout<<b<<" "; 
			b+=a; 
		}
		
	}
	else if(c<b){
		c+=a;
		while(c<b)
		{
			cout<<c<<" "; 
			c+=a; 
		}
	}
	
	getch();	
}

void ContadorCifras(){setlocale(LC_ALL,"spanish");/*6.	Pida al usuario ingresar un número entero, escriba en pantalla el número de cifras que tiene.*/
system("cls");
	
	int Numero, CONTNumero=1;
		cout<<"Ingrese un numero "<<endl;cin>>Numero;
			while(Numero>=10||Numero<=-10){
				Numero=Numero/10;
				CONTNumero++;
			}
	cout<<"El numero de cifras del numero digitado es: "<<CONTNumero;
	getch();
}

void SumaContadorCifras(){setlocale(LC_ALL,"spanish");/*7.	Para el ejercicio anterior calcule la sumatoria de los dígitos del número.*/
system("cls");

	int Numero, CONTNumero=1, SumaDigitos;
	cout<<"Ingrese un numero "<<endl;cin>>Numero;
	if(Numero>0){
		SumaDigitos=1;
		while(Numero>=10){
			SumaDigitos=SumaDigitos+Numero%10;
			Numero=Numero/10;
			CONTNumero++;
		}	
	}else{
		SumaDigitos=-1;
		while(Numero<=-10){
			SumaDigitos=SumaDigitos+Numero%10;
			Numero=Numero/10;
			CONTNumero++;
		}
	}
	cout<<"El numero de cifras del numero digitado es: "<<CONTNumero<<endl;
	cout<<"La suma de los digitos del numero es: "<<SumaDigitos;

getch();	
}

void Divisores(){setlocale(LC_ALL,"spanish");/*8.	Para un entero positivo ingresado, escriba el listado de todos sus divisores.*/
system("cls");

	int Numero, i=1;
	
	cout<<"Ingrese un numero del cual quiera saber los divisores."<<endl;cin>>Numero;
	while(Numero<0){
		cout<<"Ingrese un valor positivo."<<endl;cin>>Numero;
	}
	while(i<=Numero){
		if(Numero%i==0){
			cout<<i<<" ";
		}
		i++;
	}
	

getch();
}

void SumaDivisores(){setlocale(LC_ALL,"spanish");/*9.	Para el ejercicio anterior, escriba la cantidad de divisores que tiene.*/
system("cls");

	int Numero, i=1, CONTDivisores=0;
	
	cout<<"Ingrese un numero del cual quiera saber los divisores."<<endl;cin>>Numero;
	while(Numero<0){
		cout<<"Ingrese un valor positivo."<<endl;cin>>Numero;
	}
	while(i<=Numero){
		if(Numero%i==0){
			cout<<i<<" ";
			CONTDivisores++;
		}
		i++;
	}
	cout<<"\nEl total de divisores que tiene el numero es: "<<CONTDivisores;

getch();
}

void Primos(){setlocale(LC_ALL,"spanish");
system("cls");

	int Numero, i=1, Contador=0;
	
	cout<<"Ingrese el numero que quiere comprobar "<<endl;cin>>Numero;
	while(Numero<0){
		cout<<"Ingrese un valor positivo."<<endl;cin>>Numero;
	}
		while(i<=Numero){
			if(Numero%i==0){
				Contador++;
			}
		i++;
		}
	if(Contador==2){
		cout<<"El numero es primo.";
	}else{
		cout<<"El numero no es primo.";
	}

getch();
}

void PrimosAnteriores(){setlocale(LC_ALL,"spanish");
system("cls");

	int Limite;
		
	cout<<"Ingrese el numero limite "<<endl;cin>>Limite;
	while(Limite<0){
		cout<<"Ingrese un valor positivo."<<endl;cin>>Limite;
	}
	for(int i=2;i<Limite;i++){
		int Numero=2;
		bool Primo=true;
		
		while(Primo&&Numero<i){
			if(i%Numero==0){
				Primo=false;
			}else{
				Numero++;
			}
		}
		if(Primo){
			cout<<i<<" ";
		}
	}

getch();
}

void SumaPrimos(){setlocale(LC_ALL,"spanish");
system("cls");
	
		int Limite, iT=0;
		
	cout<<"Ingrese el numero limite "<<endl;cin>>Limite;
	while(Limite<0){
		cout<<"Ingrese un valor positivo."<<endl;cin>>Limite;
	}
	for(int i=2;i<Limite;i++){
		int Numero=2;
		bool Primo=true;
		
		while(Primo&&Numero<i){
			if(i%Numero==0){
				Primo=false;
			}else{
				Numero++;
			}
		}
		if(Primo){
			cout<<i<<" ";
			iT+=i;
		}
	}
	cout<<"\nLa suma de todos los primos es: "<<iT;
	
	getch();
}

void Tablas(){setlocale(LC_ALL,"spanish");
system("cls");
	
	int Numero, Mul=0;

	cout<<"Ingrese un numero entero positivo ";cin>>Numero;
	while(Numero<0){
		cout<<"Ingrese un valor positivo."<<endl;cin>>Numero;
	}
	while(Mul<=10){
		cout<<Mul*Numero<<" ";
		Mul++;
	}
	
	getch();
}

void TablasAntes(){setlocale(LC_ALL,"spanish");
system("cls");
	
	int Numero, Mul=0,  i=0;

	cout<<"Ingrese un numero entero positivo ";cin>>Numero;
	while(Numero<0){
		cout<<"Ingrese un valor positivo."<<endl;cin>>Numero;
	}
	for(int o=1; o<=Numero;){ 
			while(i<=10){
				cout<<i*o<<" "; 
				i++; 
		}
		o++;
		cout<<"\n";i=0;
	}	
getch();
}

void Fibonacci(){setlocale(LC_ALL,"spanish");
system("cls");

	int antes=0, despues=1, n=0,resultado=0;
	cout<<"Ingrese el tope de la serie: "; cin>>n;
	
	cout<<antes<<" "<<despues<<" ";
	for(int i=3;i<=n;i++)
	{
		resultado=antes+despues;
		antes=despues;
		despues=resultado;
		cout<<resultado<<" ";
	}

getch();
}

void FibonacciUsuario (){setlocale(LC_ALL,"spanish");
system("cls");

	int antes, despues, n=0,resultado=0;
	cout<<"Ingrese el antes: ";cin>>antes;
	cout<<"Ingrese el despues: ";cin>>despues;
	cout<<"Ingrese el tope de la serie: "; cin>>n;
	
	cout<<antes<<" "<<despues<<" ";
	for(int i=3;i<=n;i++)
	{
		resultado=antes+despues;
		antes=despues;
		despues=resultado;
		cout<<resultado<<" ";
	}

getch();
}

void MostrarPares(){setlocale(LC_ALL,"spanish");
system("cls");

		int Numero, NumerosPares, Num, Digito;
	
	cout<<"Digite un numero positivo"<<endl;cin>>Numero;
	while(Numero<0){
		cout<<"Ingrese un valor positivo."<<endl;cin>>Numero;
	}
	while(Numero%10>0){
		Digito=Numero%10;
		if(Digito%2==0){
			cout<<Digito<<" ";
		}	
		Numero=Numero/10;
	}	
	
getch();
}

void Reversa(){setlocale(LC_ALL,"spanish");
system("cls");

	int Numero, Digito;
	
	cout<<"Digite un numero positivo"<<endl;cin>>Numero;
	while(Numero<0){
		cout<<"Ingrese un valor positivo."<<endl;cin>>Numero;
	}
	while(Numero%10>0){
		Digito=Numero%10;
			cout<<Digito;
		Numero=Numero/10;
	}

getch();
}

int mostrar_menu(){setlocale(LC_ALL,"spanish");
	int respuesta;
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                    MENU"<<endl;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n                                     (ingrese cualquier tecla para empezar)"<<endl;
getch();
system("cls");
	cout<<"-----------------------------------¿Que punto desea ejecutar?-----------------------------------"<<endl;
	cout<<"1. Contador del 15 al 32 y viceversa."<<endl;
	cout<<"2. Contador personalizado."<<endl;
	cout<<"3. Suma del contador."<<endl;
	cout<<"4. Contador de numeros pares."<<endl;
	cout<<"5. Multiplos."<<endl;
	cout<<"6. Contador de cifras "<<endl;
	cout<<"7. Contador cifras y su suma."<<endl;
	cout<<"8. Divisores."<<endl;
	cout<<"9. Cantidad de divisores."<<endl;
	cout<<"10. Numeros primos."<<endl;
	cout<<"11. Lista Primos antes de."<<endl;
	cout<<"12. Suma de la lista de primos."<<endl;
	cout<<"13. Tablas de multiplicar. "<<endl;
	cout<<"14. Tablas de multiplicar antes de."<<endl;
	cout<<"15. Fibonacci."<<endl;
	cout<<"16. Fibonacci Usuario."<<endl;
	cout<<"17. Mostrar numero par."<<endl;
	cout<<"18. Numero al reves."<<endl;
	cout<<"19. Salir."<<endl;
	cout<<"\n\n\n\n\n\n\n\n                                     Escriba el numero de su opcion: "; cin>>respuesta;
	while(respuesta <1 || respuesta >19)
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
			Contador15a32();break;
		case 2:
			ContadorPersonalizado();break;
		case 3:
			SumaContador();break;
		case 4:
			ContadorPares();break;
		case 5:
			Multiplos();break;
		case 6:
			ContadorCifras();break;
		case 7:
			SumaContadorCifras();break;
		case 8:
			Divisores();break;
		case 9:
			SumaDivisores();break;
		case 10:
			Primos();break;
		case 11:
			PrimosAnteriores();break;
		case 12:
			SumaPrimos();break;
		case 13:
			Tablas();break;
		case 14:
			TablasAntes();break;
		case 15: 
			Fibonacci();break;
		case 16:
			FibonacciUsuario();break;
		case 17:
			MostrarPares();break;
		case 18:
			Reversa();break;
		case 19:
			system("cls");
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                         Muchas Gracias por usar este servicio xd";break;
	}

}
	
	


