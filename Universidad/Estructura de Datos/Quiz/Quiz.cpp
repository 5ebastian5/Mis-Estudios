#include <iostream>
#include <conio.h>
#include <stdlib.h>

struct nodo{
    	int x;
    	nodo *izq,*der;
    };
       
void enlazar(nodo *aux, nodo *n);
void mostrarinorden(nodo *aux);
void mostrarpreorden(nodo *aux);
void mostrarpostorden(nodo *aux);
nodo *raiz;

using namespace std;       
main(){
    int op;
    do{
    	aux=raiz;
        cout<<"\n\nMENU\n\n1.Agregue nodos\n2.Arbol inorden\n3.Arbol preorden\n4.Arbol postorden\n5.Salir\n\n Digite su opcion. ";
        cin>>op;
        switch(op){
            case 1:	
				nodo *aux,*p;
      			raiz=NULL;
      			do{
         			p=(nodo *) malloc (sizeof(struct nodo));
         			cout<<"Dato ";
         			cin>>p->x;
         			p->izq=p->der=NULL;
         			enlazar(raiz,p);
                }while(p->x!=0);
        	break;
        	case 2:	
				mostrarinorden(raiz);
        		getch();
      		break;
      		case 3:	
			  	mostrarpreorden(raiz);
      			getch();
      		break;
      		case 4:	
			  	mostrarpostorden(raiz);
      			getch();
			break; 
      	}
	}while (op!=5);
}

void enlazar(nodo *aux, nodo *n){
	if(aux==NULL)
		raiz=n;
    else{
        if(n->x<aux->x)
            if(aux->izq==NULL)
                aux->izq=n;
            else
                enlazar(aux->izq,n);
        else         
            if(aux->der==NULL)
                aux->der=n;
            else
                enlazar(aux->der,n);
    }
}
void mostrarinorden(nodo *aux){
    if(aux==NULL)
        return;
    mostrarinorden(aux->izq);
    cout<<" "<<aux->x;
    mostrarinorden(aux->der);  
    return;
}
void mostrarpreorden(nodo *aux){
	if(aux==NULL)
        return;
    cout<<" "<<aux->x;
    mostrarpreorden(aux->izq);
    mostrarpreorden(aux->der);  
    return;
}
void mostrarpostorden(nodo *aux){
    if(aux==NULL)
        return;
    mostrarpostorden(aux->izq);
    mostrarpostorden(aux->der);
    cout<<" "<<aux->x;
    return;
}

