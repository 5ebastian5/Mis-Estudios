#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct nodo{
	int numero;
	nodo *siguiente, *anterior;	
};

main(){
	nodo *primero, *ultimo, *p, *auxiliar, *auxiliar2, *auxiliar3;
	primero=ultimo=NULL;
	int menu, x;
	do{
		cout<<"1. Agregar nodo al inicio.\n2. Agregar al final.\n3. Recorrer desde el inicio.\n4. Recorrer desde el final.\n5. Insertar delante de. \n6. Insertar tras de. \n7. Eliminar. \n8. Salir.\nOpcion: ";cin>>menu;
		switch(menu){
			case 1:
				p=(nodo *)malloc(sizeof(struct nodo));
				cout<<endl<<endl;
				cout<<"Ingrese dato: ";cin>>p->numero;
				if(primero==NULL){
					p->siguiente=p->anterior=NULL;
					primero=ultimo=p;
				}else{
					p->siguiente=primero;
					primero->anterior=p;
					p->anterior=NULL;
					primero=p;
				}
				cout<<endl<<endl;
			break;
			case 2:
				p=(nodo *)malloc(sizeof(struct nodo));
				cout<<endl<<endl;
				cout<<"Ingrese dato: ";cin>>p->numero;
				if(primero==NULL){
					p->siguiente=p->anterior=NULL;
					primero=ultimo=p;
				}else{
					p->anterior=ultimo;
					ultimo->siguiente=p;
					p->siguiente=NULL;
					ultimo=p;
				}
				cout<<endl<<endl;
			break;
			case 3:
				auxiliar=primero;
				cout<<endl<<endl;
			    if(primero==NULL){
			    	cout<<"La lista esta vacia"<<endl;
				}else{
					while(auxiliar!=NULL){
						cout<<" "<<auxiliar->numero;
						auxiliar=auxiliar->siguiente;
					}	
				}
				cout<<endl<<endl;
			break;
			case 4:
				auxiliar=ultimo;
				cout<<endl<<endl;
			    if(ultimo==NULL){
			    	cout<<"La lista esta vacia"<<endl;
				}else{
					while(auxiliar!=NULL){
						cout<<" "<<auxiliar->numero;
						auxiliar=auxiliar->anterior;
					}	
				}
				cout<<endl<<endl;
			break;
			case 5:
				cout<<endl<<endl;
				cout<<"Delante de quien: ";cin>>x;
				if(x==ultimo->numero){
					cout<<"\n\nEste numero es el ultimo de la lista. \nPor favor ingrese la opcion 2 en el menu para agregar al final.\n"<<endl;
				}else{
					auxiliar=primero;
					while(auxiliar!=NULL){
						if(auxiliar->numero==x)
						break;
						auxiliar=auxiliar->siguiente;					
					}
					if(auxiliar!=NULL){
						p=(nodo *)malloc(sizeof(struct nodo));
						cout<<"Que numero va a insertar: ";cin>>p->numero;
						auxiliar2=auxiliar->siguiente;
						p->siguiente=auxiliar2;
						auxiliar->anterior=p;
						auxiliar->siguiente=p;
						p->anterior=auxiliar;
					}else{
						cout<<"No se encontro el digito. "<<endl;
					}
				}
				cout<<endl<<endl;
			break;
			case 6:
				cout<<endl<<endl;
				cout<<"Atras de quien: ";cin>>x;
				if(x==ultimo->numero){
					cout<<"\n\nEste numero es el primero de la lista. \nPor favor ingrese la opcion 1 en el menu para agregar al inicio.\n"<<endl;
				}else{
					auxiliar=primero;
					while(auxiliar!=NULL){
						if(auxiliar->numero==x)
						break;
						auxiliar=auxiliar->siguiente;					
					}
					if(auxiliar!=NULL){
						p=(nodo *)malloc(sizeof(struct nodo));
						cout<<"Que numero va a insertar: ";cin>>p->numero;
						auxiliar2=auxiliar->anterior;
						p->anterior=auxiliar2;
						auxiliar->siguiente=p;
						auxiliar->anterior=p;
						p->siguiente=auxiliar;
					}else{
						cout<<"No se encontro el digito. "<<endl;
					}
				}
				cout<<endl<<endl;
			break;				
			case 7:
				cout<<endl<<endl;
				cout<<"Cual se eliminara: ";cin>>x;
				auxiliar=primero;
				while(auxiliar!=NULL){
					if(auxiliar->numero==x)
					break;
					auxiliar=auxiliar->siguiente;					
				}
				if(auxiliar!=NULL){
					if(auxiliar==ultimo){
						auxiliar2=auxiliar->anterior;
						auxiliar2->siguiente=NULL;
						ultimo=auxiliar2;
						free(auxiliar);
						cout<<" \nSe borro el ultimo digito.\n ";
					}else{
						if(auxiliar==primero){
						auxiliar2=auxiliar->siguiente;
						auxiliar2->anterior=NULL;
						primero=auxiliar2;
						free(auxiliar);					
							cout<<"\nSe borro el primero digito.\n";
						}else{
							auxiliar2=auxiliar->anterior;
							auxiliar3=auxiliar->siguiente;
							auxiliar2->siguiente=auxiliar3;
							auxiliar3->anterior=auxiliar2;
							free(auxiliar);
							cout<<"\nSe borro el digito.\n";
						}
					}
				}
				cout<<endl<<endl;
			break;	
		}
	}while(menu!=8);
}
