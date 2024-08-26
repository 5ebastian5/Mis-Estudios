#include<iostream>
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

int main()
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
	
	
	
	return 0;
}
