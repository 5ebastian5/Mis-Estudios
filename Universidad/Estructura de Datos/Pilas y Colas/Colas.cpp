#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct nodo{
	int n;
	nodo *Sig;
};
struct pila{
	
	int nI;
	pila *Sig;
};

main(){
	nodo *aux, *p, *Primero, *Ultimo;
	pila *auxI, *pI, *PrimeroI, *UltimoI;
	Primero=Ultimo=NULL;
	int Menu;
	
	do{	
		cout<<"1. Push. \n2. Pop. \n3. Mostrar. \n4. Invertir. \n5. Eliminar cola. \n6. Salir. ";cin>>Menu;
		cout<<endl<<endl;
		switch(Menu){
			case 1: 
				p=(nodo*)malloc(sizeof(struct nodo));
				cout<<"Ingrese dato: ";
				cin>>p->n;
				if(Primero==NULL){
					p->Sig=NULL;
					Primero=p;
				}else{
					Ultimo->Sig=p;
					p->Sig=NULL;
					Ultimo=p;
				}
			break;
			case 2: 
				if(Primero==NULL)
					cout<<"Cola vacia";
				else{
					cout<<"Eliminando "<<Primero->n;
					aux=Primero;
					Primero=Primero->Sig;
					free(aux);
				}
			break;
			case 3:
				aux=Primero;
				if(aux!=NULL){
					while(aux!=NULL){
						cout<<" "<<aux->n;
						aux=aux->Sig;
					}	
				}else{
					cout<<"La lista esta vacia.\n";
					Menu=1;
				}
			break;
		}		
		cout<<endl<<endl;
	}while(Menu<6&&Menu>0);
	
}
