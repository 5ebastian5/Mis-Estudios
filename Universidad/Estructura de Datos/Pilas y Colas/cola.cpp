#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct nodo{
	int n;
	nodo *siguiente;
};

main(){
	nodo *cabeza,*auxiliar,*p,*ultimo;
	cabeza=NULL;
	auxiliar=cabeza;
	int opcion;

    
    do{	    
    	cout <<"1. Push. \n2. Pop. \n3. Mostrar \n4. Invertir \n5. Eliminar cola \n6. Salir \n\nIngrese una opcion: ";cin >> opcion;   
        switch (opcion){
            case 1:	//PUSH
				p=(nodo*)malloc(sizeof(struct nodo));
				cout<<"ingrese dato de la cola: ";cin>>p->n;
				if(cabeza==NULL){
					p->siguiente=NULL;
					cabeza=p;
					ultimo=cabeza;
				}else{
					p->siguiente=cabeza;
					cabeza=p;
				}
				cout<<endl<<endl;
			break;
			case 2://POP
				auxiliar=cabeza;
				if(cabeza==NULL){
					cout<<"la pila esta vacia"<<endl;
				}else{
					cout<<"  "<<auxiliar->n;
					while(auxiliar->siguiente!=ultimo){
						auxiliar=auxiliar->siguiente;
						cout<<"  "<<auxiliar->n;
					}
					auxiliar->siguiente=NULL;
					ultimo=auxiliar;
	    		}
	    		cout<<endl<<endl;
			break;
		    case 3: //SEE ALL
				auxiliar=cabeza;
			    if(cabeza==NULL){
			    	cout<<"la pila esta vacia"<<endl;
				}else{
					while(auxiliar!=NULL){
						cout<<" "<<auxiliar->n;
						auxiliar=auxiliar->siguiente;
					}	
				}
				cout<<endl<<endl;
			break;
			case 4: //REVERSE
				nodo *auxcabeza,*auxiliar2,*p2;
				auxcabeza=p2=auxiliar2=NULL;
				auxiliar=cabeza;
				if(cabeza==NULL){
					cout<<"La pila esta vacia. "<<endl;
				}else{
					while(auxiliar!=NULL){
						auxiliar=cabeza;
						cabeza=cabeza->siguiente;
						p2=(nodo *)malloc(sizeof(struct nodo));
						p2->n=auxiliar->n;
						if(auxcabeza==NULL){
							p2->siguiente=NULL;
							auxcabeza=p2;
							ultimo=auxcabeza;
						}else{
							p2->siguiente=auxcabeza;
							auxcabeza=p2;
						}
						auxiliar=auxiliar->siguiente;
					}				
					auxiliar=auxiliar2;
					cabeza=auxcabeza;
					p=p2;
					cout<<"Invertido!"<<endl;
				}
				cout<<endl<<endl;
			break;
			case 5://DELETE ALL
				cout<<"Eliminando cola."<<endl;
				while(cabeza!=NULL){
            		auxiliar=cabeza;
            		cabeza=auxiliar->siguiente;
            		free(auxiliar);
            		cout<<".";
     			}
     			cabeza=NULL;
     			ultimo=NULL;
     			cout<<endl<<endl;
     		cout<<endl<<endl;
     		break;
		}
	}while (opcion!=6);
}
