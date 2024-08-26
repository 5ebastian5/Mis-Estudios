#include<iostream>
/*Mostrar los divisores de un número ingresado por el usuario. Tenga en cuenta que el numero
ingresado no puede ser primo.
*/
using namespace std;

int main()
{
	
	int divisores, principio,contador;
	
	cout<<"Digite un numero del cual quiera saber sus divisores: "<<endl;
	cin>>principio;
	
	if(principio == 0)
	{
		cout<<"el numero 0 tiene infinitos divisores.";
	}
	else
	{
		if(principio > 0)
		{
			
			for(int o=1; o<=principio;o++)
			{
				
				if(principio%o == 0)
				{
					
					contador++;
				}
			}
			if(contador == 2)
			{
				cout<<"el numero es primo por ende es invalido";
			}
			else
			{
				cout<<"los divisores de "<<principio<<" son: ";

				for (int i=1; i<=principio; i++){
					
					if(principio%i == 0){
						
						cout<<i<<" ";
					}
				}
			}	
		}
		else
		{
			for(int o=1; o<=principio;o++)
			{
				
				if(principio%o == 0)
				{
					
					contador++;
				}
			}
			if(contador == 2)
			{
				cout<<"el numero es primo por ende es invalido";
			}
			else
			{
				cout<<"los divisores de "<<principio<<" son: ";

				for (int i=1; i<=principio; i++){
					
					if(principio%i == 0){
						
						cout<<i<<" ";
					}
				}
			}	
		}
	}

	return 0;
}

