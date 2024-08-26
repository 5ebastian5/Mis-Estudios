#include<iostream>
/*Mostrar los números divisores de 3 comprendidos entre n y z donde n y z son ingresados por
el usuario.
*/
using namespace std;

int main(){
	
	int divisores, principio, final, incremento;
	
	cout<<"Digite un numero donde quiere empezar la lista de numeros, hasta donde quiere terminar la lista y en cuanto se incrementara: "<<endl;
	cin>>principio>>final>>incremento;
	
	if(principio > final){
		cout<<"Los numeros multiplos de "<<incremento<<" son: ";
		
		principio = principio - 1;

		for (int i=principio; i>=final; i--){

			if(i%incremento == 0){

			cout<<i<<" ";
			}
		}		
	}
	else if(final > principio){
		cout<<"Los numeros multiplos de "<<incremento<<" son: ";

		principio = principio + 1;

		for (int i=principio; i<=final; i++){
		if(i%incremento == 0){
			
			cout<<i<<" ";
			}
		}		
	}

	return 0;
}
