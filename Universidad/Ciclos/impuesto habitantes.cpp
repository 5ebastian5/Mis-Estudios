#include<iostream>
/*Mostrar los números divisores de 3 comprendidos entre n y z donde n y z son ingresados por
el usuario.
*/
using namespace std;

int main(){
	
	int habitantes, salario, salario_minimo, hijos, pagar, impuesto_valor, impuesto;
	float porcentaje = 0.08, descuento;
	cout<<"Digite la cantidad de habitantes del pueblo: ";
	cin>>habitantes;
	
	cout<<"Digite el salario minimo legal vigente: ";
	cin>>salario_minimo;
	
	while(salario_minimo < 800000 or salario_minimo > 5000000){
		cout<<"Digite un salario minimo legal vigente valido: ";
		cin>>salario_minimo;
	}
	
	cout<<"Digite el valor del impuesto (diarios): ";
	cin>>impuesto_valor;
	
	while(impuesto_valor < 8200 && impuesto_valor > 23200){
		cout<<"Digite un salario minimo legal vigente valido: ";
		cin>>salario_minimo;	
	}

	for(int i=1; i<=habitantes; i++){
		porcentaje = 0.08;
		
		cout<<"Digite el salario de la persona: ";
		cin>>salario;
		
		while(salario < 50000){
			cout<<"el salario es invalido, por favor digite un salario valido: ";
			cin>>salario;
		}
		
		cout<<"Digite la cantidad de hijos que tiene: ";
		cin>>hijos;
		
		while(hijos < 0){
			cout<<"por favor digite una cantidad correcta: ";
			cin>>hijos;
		}
		
		if(salario <= salario_minimo && hijos > 0){
			cout<<"El ciudadano no paga impuestos."<<endl;
		}
		
		else if(salario == salario_minimo){
			porcentaje = 0.03;
			impuesto = 0.03 * impuesto_valor;
			descuento=impuesto_valor-impuesto;
			cout<<"El ciudadano va a pagar: "<<descuento<<endl;
			cout<<"El porcentaje que va a pagar es: "<<porcentaje<<endl;
			cout<<"el valor del descuento del impuesto es de: "<<impuesto<<endl;
		}
	
		else{
		
		for(int o=1,p=2;o<=50 && p<=50;o++,p++){
			if(salario > (o*salario_minimo) && salario < (p*salario_minimo)){
				impuesto = porcentaje * impuesto_valor;
				descuento=impuesto_valor-impuesto;
				cout<<"El ciudadano va a pagar: "<<descuento<<endl;
				cout<<"El porcentaje que va a pagar es: "<<porcentaje<<endl;
				cout<<"el valor del descuento del impuesto es de: "<<impuesto<<endl;		
				
			}
		porcentaje += 0.1;
		}
	}
	}
	return 0;
}

