#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>

using namespace std;

int main(){
	
	int personas;
	float distancia1 = 0, distancia2 = 0, distancia3 = 0, puntos, x1, x2, x3, y1, y2, y3,h,a,b, resultado;
	
	
	cout<<"Digite la cantidad de personas que retara: ";
	cin>>personas;
	
	while(personas < 0)
	{
		cout<<"por favor digite un calor valido: ";
		cin>>personas;
	}
	
	if(personas == 0)
	{
		cout<<"Al no haber personas al quien pedir los vertices, no hay respuesta"<<endl;
	}
	else
	{
		for(int i=1;i<=personas;i++)
		{
			cout<<"para la personas "<<i<<endl;
			puntos = 0;
			resultado = 0;
			cout<<"Por favor digite tres coordenadas en el plano cartesiano"<<endl;
			cout<<"digite la primera coordenada:"<<endl;
			cout<<"X = ";
			cin>>x1;
			cout<<"Y = ";
			cin>>y1;
		
			cout<<"Digite la segunda coordenada: "<<endl;
			cout<<"X = ";
			cin>>x2;
			cout<<"Y = ";
			cin>>y2;
		
			cout<<"Digite la tercera coordenada: "<<endl;
			cout<<"X = ";
			cin>>x3;
			cout<<"Y = ";
			cin>>y3;
		
			distancia1= sqrt(pow(x1-x2,2)+pow(y1-y2,2));
		
			distancia2= sqrt(pow(x2-x3,2)+pow(y2-y3,2));
		
			distancia3= sqrt(pow(x3-x1,2)+pow(y3-y1,2));
		
		
			if(distancia1 > distancia2 && distancia2 > distancia3)
			{
		
				h = distancia1;
				a = distancia2;
				b = distancia3;
			}
			if(distancia2 > distancia1 && distancia2 > distancia3)
			{
			
				h = distancia2;
				a = distancia1;
				b = distancia3;
			}
			if(distancia3 > distancia1 && distancia3 > distancia2);
			{
			
				h = distancia3;
				a = distancia2;
				b = distancia1;
			}
			
			resultado = sqrt(pow(a,2)+pow(b,2));
			cout<<"El triangulo: ";
			
			if(resultado == h);
			{
				cout<<"ES RECTANGULO"<<endl;
				puntos += 50;
			}
			if(distancia1 == distancia2 && distancia2 == distancia3 && distancia3 == distancia1)
			{
				puntos += 30;
				cout<<"ES EQUILATERO"<<endl;
			}
			if(puntos == 0)
			{
				cout<<"ES ESCALENO"<<endl;
				puntos += 0;
			}
			
			if(puntos > 0)
			{
				cout<<"La personas "<<i<<" si tuvo puntuacion y fue de "<<puntos<<endl;
			}
			
			if(puntos == 0)
			{
				cout<<"La personas "<<i<<" no tuvo puntuacion y fue de "<<puntos<<endl;
			}
		}
	}
	getch();
	return 0;
}
