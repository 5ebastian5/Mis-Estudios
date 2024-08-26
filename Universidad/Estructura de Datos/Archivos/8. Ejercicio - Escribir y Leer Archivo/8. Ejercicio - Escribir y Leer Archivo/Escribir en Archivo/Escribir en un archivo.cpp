//hacer un programa que entre a un archivo llamado datos.txt, hay ay numeros, el programa ira hasta haya habrira el archivo y mostrara los primeros 5 datos 

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	
char n[5];
FILE *p;

p=fopen("prueba.txt","w");
cin>>n;
fprintf(p,"%s",n);	

fclose(p);
	
return 0;
}
