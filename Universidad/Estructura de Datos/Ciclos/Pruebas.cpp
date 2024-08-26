#include<iostream>
using namespace std;

int main(){
	
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


	return 0;
}

//2648
