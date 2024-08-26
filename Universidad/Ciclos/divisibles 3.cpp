#include<iostream>
/*Mostrar los números divisores de 3 comprendidos entre n y z donde n y z son ingresados por
el usuario.
*/
using namespace std;

int main(){
	
	int divisores, principio, final;
	
	cout<<"Digite un numero desde donde quiere empezar la lista hasta donde quiere terminar la lista: "<<endl;
	cin>>principio>>final;
	
	cout<<"Los numeros divisibles por 3 son: ";
	
		for (int i=principio; i<=final; i++){
		
			if(i%3 == 0){
			cout<<i<<" ";
			}
		}		

		for (int i=final; i<=principio; i++){
		
			if(i%3 == 0){
			cout<<i<<" ";
			}
		}		

	return 0;
}

