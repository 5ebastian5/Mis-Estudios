/*
1. Agregar nodo al inicio.
2. Agregar nodo al final.
3. Insertar un nodo.
4. Eliminar nodo.
5. Contar y sumar nodos.
6. Mostrar lista.
7. Salir.
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct nodo{
	int n;
	nodo *sig;
};

main(){
	
	nodo *cab, *aux, *p, *ult;
	cab=ult=NULL;
	int Menu, x, Cont=0, Suma=0;
	
	
	do{
		cout<<"1. Agregar nodo al inicio.\n2. Agregar nodo al final.\n3. Insertar un nodo a la lista.\n4. Eliminar nodo.\n5. Contar y sumar .\n6. Mostrar lista. \n7. Salir.\nOpcion:"<<endl;cin>>Menu;cout<<"\n\n";
		switch(Menu){
			case 1:	
				do{
					p=(nodo *)malloc(sizeof(struct nodo));
					cout<<"Ingrese un entero ";cin>>p->n;
					if(cab==NULL){
						p->sig=NULL;
						cab=p;
					}else{
						p->sig=cab;
						cab=p;
					}
				}while(p->n!=0);
cout<<"\n\n";	
getch();
break;
			case 2:
				do{
					p=(nodo *)malloc(sizeof(struct nodo));
					cout<<"Ingrese un entero ";cin>>p->n;
					if(cab==NULL){
						p->sig=NULL;
						cab=p;
					}else{
						ult->sig=p;
						p->sig=NULL;
						ult=p;
					}
				}while(p->n!=0);	
cout<<"\n\n";
getch();
break;	
			case 3:
				aux=cab;
				if(aux!=NULL){
					cout<<"Insertar nodo";	
				}else{
					cout<<"La lista esta vacia.\n";
					Menu=1;
				}	
cout<<"\n\n";
getch();
break;	
			case 4:
				aux=cab;
				if(aux!=NULL){
					cout<<"Ingrese el numero a eliminar. ";cin>>x;
					aux=cab;
					while(aux->sig!=NULL){
						if(aux->sig->n==x)
							break;
						aux=aux->sig;
					}
					if(aux->sig!=NULL){
						p=aux->sig;
						aux->sig=p->sig;
						free(p);
					}	
				}else{
					cout<<"La lista esta vacia.\n";
					Menu=1;
				}
cout<<"\n\n";
getch();
break;
			case 5:
				aux=cab;
				if(aux!=NULL){
					while(aux!=NULL){
						Cont++;
						Suma=Suma+aux->n;
						aux=aux->sig;
					}
					cout<<"La cantidad de nodos que hay es de: "<<Cont<<endl;
					cout<<"La suma de los nodos da: "<<Suma;
				}else{
					cout<<"La lista esta vacia.\n";
					Menu=1;
				}
cout<<"\n\n";
getch();
break;
			case 6:
				aux=cab;
				if(aux!=NULL){
					while(aux!=NULL){
						cout<<" "<<aux->n;
						aux=aux->sig;
					}	
				}else{
					cout<<"La lista esta vacia.\n";
					Menu=1;
				}
cout<<"\n\n";
getch();
break;
		}	
	}while(Menu<7&&Menu>0);

}

