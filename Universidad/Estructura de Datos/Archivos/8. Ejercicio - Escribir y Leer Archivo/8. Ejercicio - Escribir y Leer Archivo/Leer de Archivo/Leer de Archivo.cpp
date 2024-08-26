//hacer un programa que entre a un archivo llamado datos.txt, hay ay numeros, el programa ira hasta haya habrira el archivo y leera los datos

#include<iostream>
#include<stdio.h>

using namespace std;

main(){
FILE *p;	
int n;

p=fopen("datos.txt","r");

while(!feof(p)){
 fscanf(p,"%d",&n);
 cout<<" "<<n;
}	

fclose(p);
	
return 0;
}


