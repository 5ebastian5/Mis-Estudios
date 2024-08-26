#include<iostream>
#include<string.h>
#include<conio.h>
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

int main()
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
	return 0;
}
