#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int dato=1;
FILE *p;

main(){
	p=fopen("prueba.txt","w");
	cout<<"\t\t\t\tSe a  creado un archivo con el nombre <<entrada.txt>>."<<endl<<endl<<endl;
	while(dato!=0){
    	cout<<"Digite un dato para poner en el archivo: ";
        cin>>dato;
        fprintf(p,"%d",dato);
 	}
	fclose(p);
}
