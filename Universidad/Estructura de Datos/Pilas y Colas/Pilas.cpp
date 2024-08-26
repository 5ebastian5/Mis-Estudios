#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct nodo{
	int n;
	nodo *Sig;
};

main(){
	nodo *aux, *p, *tope;
	int Menu;
	do{	
		cout<<"1. Push. \n2. Pop. \n3. Mostrar. \n4. Invertir. \n5. Eliminar pila. \n6. Salir. ";cin>>Menu;
		cout<<endl<<endl;
		switch(Menu){
			case 1: 
				p=(nodo*)malloc(sizeof(struct nodo));
				cout<<"Ingrese dato: ";
				cin>>p->n;
				if(tope==NULL){
					p->Sig=NULL;
					tope=p;
				}else{
					p->Sig=tope;
					tope=p;
				}
			break;
			case 2: 
				if(tope==NULL)
					cout<<"Pila vacia";
				else{
					cout<<"Eliminando "<<tope->n;
					aux=tope;
					tope=tope->Sig;
					free(aux);
				}
			break;
			case 3:
				aux=tope;
				while(aux!=NULL){
					cout<<" "<<aux->n;
					aux=aux->Sig;
				}
			break;
		}
	}while(Menu=!6);
	

	
	



}
