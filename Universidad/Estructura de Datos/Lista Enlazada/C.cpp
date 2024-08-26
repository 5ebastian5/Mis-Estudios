#include<iostream>
#include<conio.h>
#include<stdlib.h>

//7:40

/* 
1. Agregar nodo en LA.
2. Agregar nodo en LB.
3. Mostrar Listas.
4. Calcular y sumar la interseccion de los elementos.
5. Union
6. Salir.
*/

struct LA{
	int nA;
	LA *SigA;
};
struct LB{
	int n;
	LB *Sig;
};
struct LC{
	int nC;
	LC *SigC;
};

using namespace std;

main(){
	
LA *cabA, *auxA, *pA;
LB *cab, *aux, *p;
LC *cabC, *auxC, *pC;
cabA=NULL;
cab=NULL;
cabC=NULL;
int Menu;
	
	
		do{
		cout<<"1. Agregar nodo en LA.\n2. Agregar nodo en LB.\n3. Mostrar listas.\n4. Calcular y sumar la interseccion de los elementos \5. Union \n6. Salir.\nOpcion: ";cin>>Menu; cout<<"\n\n";
		cout<<endl;
		switch(Menu){
			case 1:
			 
				do{
					pA=(LA *)malloc(sizeof(struct LA));
					cout<<"Ingrese un entero ";cin>>pA->nA;
					if(cabA==NULL){
						pA->SigA=NULL;
						cabA=pA;
					}else{
						pA->SigA=cabA;
						cabA=pA;
					}
					
				}while(pA->nA!=0);		 
cout<<"\n\n";	
break;
			case 2:
				do{
					p=(LB *)malloc(sizeof(struct LB));
					cout<<"Ingrese un entero ";cin>>p->n;
					if(cab==NULL){
						p->Sig=NULL;
						cab=p;
					}else{
						p->Sig=cab;
						cab=p;	
					}
				}while(p->n!=0);	
cout<<"\n\n";
break;	
			case 3:
				auxA=cabA;
				cout<<" Lista A"<<endl;
				if(auxA!=NULL){
					while(auxA!=NULL){
						if(auxA->nA==0){
							cout<<" ";
							auxA=auxA->SigA;
						}else{
							cout<<" "<<auxA->nA;
							auxA=auxA->SigA;	
						}
					}
				}else{
					cout<<"La lista esta vacia.\n";
					Menu=1;
				}
				aux=cab;
				cout<<endl;
				cout<<" Lista B"<<endl;
				if(aux!=NULL){
					while(aux!=NULL){
						if(aux->n==0){
							cout<<" ";
							aux=aux->Sig;
						}else{
							cout<<" "<<aux->n;
							aux=aux->Sig;
						}
					}
				}else{
					cout<<"La lista esta vacia.\n";
					Menu=1;
				}
cout<<"\n\n";
getch();
break;	
			case 4:
			auxA=cabA;
			aux=cab;	
			cout<<"Calcular y mostrar la interseccion."<<endl;
			cout<<" Lista C"<<endl;
			if(auxA!=NULL&&aux!=NULL){
				 while(auxA!=NULL){
					 while(aux!=NULL){
						 if(auxA->nA==aux->n){
						     cout<<" "<<auxA->nA;	    	
						    }
						 aux=aux->Sig;
					    }
					 aux=cab;
					 auxA=auxA->SigA;
					}
				}else{
				 cout<<"La lista esta vacia.\n";
				 Menu=1;
				}
cout<<"\n\n";
getch();
break;

		}	
	}while(Menu<5&&Menu>0);
}

	
	
	
	

