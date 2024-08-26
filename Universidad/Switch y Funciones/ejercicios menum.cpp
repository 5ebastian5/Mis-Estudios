
#include<iostream>
#include<conio.h>
#include<cmath>
#include<string.h>

using namespace std;
void centro_comercial();
void secuencia();
void operacion_matematica();
void palindromo();
void ejecutar_menu(int opcion_ejercutar);

int mostrar_menu();

int main()
{
	int opcion_menu;
	do
	{
		opcion_menu=mostrar_menu();
		ejecutar_menu(opcion_menu);
	}while(opcion_menu>0 && opcion_menu<5);
	
	getch();
	return 0;
}


void centro_comercial()
/*
Enunciado: Realice un programa que determine por cada piso de un centro comercial de 3 pisos, el
total de dinero recolectado por ventas de cada uno de los locales por piso, también mostrar el
total de dinero recolectado en todo el centro comercial.

Analisis:
¿Que se pide?
Mostrar el total de dinero recolectado por ventas de cada local por piso y el numero total de
ventas en todo el centro comercial.
¿Como se llega a lo que se pide?
1. Se pide la informacion de cuantos locales hay por cada piso.
2. Se pregunta piso por piso, local por local el numero de ventas y total recolectado en cada local.
3. la informacion anterior se divide en -ventas por local-, -ventas por piso-, -ventas todo el centro comercial- y se muestra de esa manera.

¿Se llego a lo que se pide?
Si, se muestra el total de dinero recolectado por ventas de cada local por piso y el numero total de
ventas en todo el centro comercial.
*/



{
	int Loc1=0, Loc2=0, Loc3=0, NumVLoc1=0, NumVLoc2=0, NumVLoc3=0, TLoc1=0, TLoc2=0, TLoc3=0, TotalVP1=0, TotalVP2=0, TotalVP3=0, TotalDP1=0, TotalDP2=0, TotalDP3=0;
	setlocale(LC_ALL,"spanish");
//Saber el numero locales piso 1
	cout<<"\n¿Cuantos locales hay en el piso 1? ";
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

}

void secuencia()
{
	

/* Enunciado: Realice un programa que genere la siguiente serie. El tope de la serie lo debe poner el
usuario.
0,1,1,2,3,5,8,13,21….n

Analisis: 
¿Que se pide?: Se pide que se muestren los numeros desde 0 hasta un numero n ingresado por el usuario
con la condicion de que van aumentantando teniendo en cuenta el resultado de los dos numeros anteriores.

¿Como llego a lo que se pide?: 
-Primero se pide el numero limite al usuario.
-Como sin importar el numero que ponga el usuario la lista siempre empezara por 0 y 1 entonces se muestran estos numeros.
-entramos a un while el cual se repetira mientras el numero ultimo numero que se mostro sumado al primer numero que se sumo 
antes sea menor que el limite.
-dentro el while se hace el proceso de la suma de x + y (0 + 1) y se guarda en z, z se muestra, se guarda el valor de y 
en z y el de z en y y se repite con los nuevos valores. 

¿Llegue a lo que se pide?: Si, se muestra el listado de numeros siguiendo la secuencia de resultados de 
la suma de los dos numeros anteriores.

*/
using namespace std;

int main();
{
	setlocale(LC_ALL,"spanish");
	int Limite, x=0, y=1, z=0;
	
	cout<<"Digite el numero limite donde la lista puede acabar ";
	cin>>Limite;
	
	while(Limite<1){
		cout<<"\nDigite un numero valido como su limite ";
		cin>>Limite;
	}
	
	cout<<"0 1 "; 
	
	while(z+x<Limite){
		z = x + y;
		cout<<z<<" ";
		x = y;
		y = z;	
	}
	
	
	
	
}
	
	
	
	
}	

void operacion_matematica()
{
/*
Analisis
el problema nos pide resolver una ecuacion con un numero puesto por el ususario.
como se llega a lo que se pide:
el numero n se va a usar dentro de las operaciones y el numero m es el numero de cuantas operaciones se van a hacer
el primer for se hace para que nos diga cuantas veces se va a hacer una operacion
el segundo for se usa para sacar el factorial del numero puesto
donde dice el numero 2 elevado a la n para cumplir lo que nos pide el ejercicio
para sacar el total se usa el factorial sobre el denominador que usamos anteriormente y lo elevamos a n+1
se hace un condicional para que todas las operaciones que esten en la posocion par se resten, y si no, que se sumen
y se incrementan las variables al final, y muestra el re-sultado
 
{[(2!)/(3ˆn)]ˆ(n+1)} - {[(3!)/(5ˆn)]ˆ(n+1)} + {[(4!)/(7ˆn)]ˆ(n+1)} -...+...-...+... m veces
*/
	
	float n,m,Num1=2,Num2=3,Fac=1,Den,Total,R,Res,Elevado,Elevado2;
	cout<<"Ingrese un numero 'n' y el numero m que se hara la operacion veces "<<endl;
	cin>>n;
	cin>>m;
	
	for(int i=1; i<=m;i++) 
	{
		Fac=1;
		Elevado=Num2;
		
		for(int o=1; o<=Num1;o++)
		{
			Fac = Fac * o;
		}
		
		for(int p=1;p<n;p++)
		{
			
			Num2= Num2 * Elevado;
		}
		
		R=Fac/Num2;
		cout<<"ESTE ES R= "<<R<<endl;
		Elevado2=R;
		
		for(int p=1;p<(n+1);p++)
		{
			cout<<"ESTE ES R ANTES"<<R<<endl;
			cout<<"ESTE ES Res ANTES"<<Res<<endl;

			Res = R * Elevado2;
			
						cout<<"ESTE ES R"<<R<<endl;
									cout<<"ESTE ES Res"<<Res<<endl;
		}
		
		if(i%2==0)
		{
			Total-=Res;
		}
		else
		{
			Total+=Res;
		}
		
		Num1+=1;
		Num2+=2;
	}
	
	cout<<"El resultado de la operación es: "<<Res;
	getch();
}	



void palindromo()
{
/*
Enunciado: Determine si una palabra ingresada por el usuario es palíndrome. Recuerde que una palabra
palíndrome es aquella que se lee igual de derecha a izquierda y de izquierda a derecha ejemplo
Reconocer, ana, oso

Analisis:
¿Que se pide? 
Identificar si una palabra es palíndrome (la palabra es ingresada por el usuario).

¿Como se llega a lo que se pide?

¿Llegue a lo que se pide?
Si, el programa identifica si la palabra ingresada por el usuario es palíndrome.

*/

using namespace std;

int main();
{
	string Palabra; 
	string PalabraR;
	int i=0; 
	
	setlocale(LC_ALL,"spanish");
	
	cout<<"Ingrese la palabra la cual quiera saber si es palindromo "<<endl;
	cin>>Palabra;
	
	for( i=0;i<Palabra.size();i++)
	{
		if(Palabra[i]<97&&Palabra[i]<65||Palabra[i]>90&&Palabra[i]>122||Palabra[i]>90&&Palabra[i]<97)
		{
			cout<<"Inserte un caracter valido ";
		}
	}
	
	
	
	for(i=Palabra.size() - 1; i>=0; i--)
	{
		PalabraR += Palabra[i];
	}
	
	if(Palabra == PalabraR)
	{
		cout<<"La palabra "<<Palabra<<" es palindroma"<<endl;
	}
	else
	{
		cout<<"La palabra "<<Palabra<<" no es palindroma";
	}
	
	getch();

	}
	
}


int mostrar_menu()
{
	int respuesta;
	cout<<"      MENU      "<<endl;
	cout<<"Que punto desea ejecutar?"<<endl;
	cout<<"1. ejercicio 1 / Centro comercial"<<endl;
	cout<<"2. ejercicio 2 / Serie Fibonacci"<<endl;
	cout<<"3. ejercicio 3 / Operacion matematica"<<endl;
	cout<<"4. ejercicio 4 / Palabra palindroma"<<endl;
	cout<<"5. ejercicio 5 / Salir"<<endl;
	cout<<"Opcion: "; cin>>respuesta;
	while(respuesta <1 || respuesta >5)
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
			cout<<"\n";centro_comercial();break;
		case 2:
			cout<<"\n";secuencia();break;
		case 3:
			cout<<"\n";operacion_matematica();break;
		case 4:
			cout<<"\n";palindromo();break;
		case 5:
			cout<<"\nMuchas Gracias por usar este servicio xd";break;
	}
}
