#include<iostream>
#include<math.h>

using namespace std;

int main(){


int Terminos,Exponente=0,Signo=-1;
float x, Resultado=0, Factorial=1;

	 cout<<"Introduzca el angulo x "<<endl;cin>>x;
	 cout<<"Introduzca el numero de terminos "<<endl;cin>>Terminos;

	for(int i=0; i<=Terminos; i++){
		Factorial=1;
		for(int o=1;o<=Exponente; o++){                   
			Factorial*=o;
		}
			Signo*=-1; 
			Resultado=Resultado+Signo*pow(x,Exponente)/Factorial;
			cout<<Resultado<<" ";
			Exponente=Exponente+2;
		}
	cout<<"El coseno del angulo es "<<Resultado;
	return 0;
}    