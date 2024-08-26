/*
Caracteristicas de los arrglos:
1. Todos los datos son del mismo tipo
2. El tamaño es dinfinido, debe serlo antes de iniciar la jecucion

memoroia estatica, arreglos
memeoria dinamica, estructura de datos, madministramos la memoria
es mas facil manejar arreglos que estructura de datos

arreglo el ntamaño es en numero de elementos, no de arreglos, se abrira en memoria x espacios, que se enumeran del 0 al x-1 (0 al 9)

fisicamente en la memoria ram todos los eelkementos deben ser pegados, algo ue no pasa en la estructura de datos, hay puede quedar regadoslos elemenotos 

32 bits, 4 baits,

*/

#include<iostream>

using namespace std;

int main(){
/*	
int vec[8];	
	
for(int i=0;i<8;i++){
	 cout<<"\n"<<&vec[i];//& SIGNIFICA QUE NO MUIESTRE AL VALOR GUARDADO, WSI NO EXTRAIGA LA DIRECION DE ESA MEMORIA
	 //los enteros ocupan 4, aparee la c por que esta en sistema base 16, hay existe ehasta el 15
    }
//SI COLOCAS \ DENTRO DE UNAS COMILLAS, TODO LO DESPUES SE VUELVE EN AZUL
	
//cargar un arreglo con 8 datos, y calcular: 1

*/

int op,mayor,menor,div=0,promedio=0,o3=0;
int vec[8];
bool o2=false;

do{
	 cout<<"Menu"<<endl;
     cout<<"1. Cargar Datos"<<endl;
	 cout<<"2. Mostrar"<<endl;
	 cout<<"3. Mayor o Menor"<<endl;
	 cout<<"4. Promedio"<<endl;
	 cout<<"5. Comprobar Palindromo"<<endl;
     cout<<"10. Salir"<<endl;
     cout<<"Opcion: "; cin>>op;
     cout<<endl;
     //i en el main=se utiliza en todo el codigo
     //i dentro dee un for: existe esa variable y su valor dentro del for
     //en el resto del codigo se  usa la i del main
     switch(op){
         case 1: 
         for(int i=0;i<10;i++){
             cout<<"Ingrese el dato el dato de la pocision "<<i<<": "; cin>>vec[i];
     
             if(vec[i]>mayor){
     	         mayor=vec[i];
     	         cout<<"Mayor ahora es: "<<mayor<<endl;
	            }
	         if(vec[i]<menor){
     	         menor=vec[i];
     	         cout<<"Menor ahora es: "<<menor<<endl;
	            }
     
             div=div+vec[i];
             promedio=div/9;
             o2=true;
            }
         cout<<endl;
         break;
         case 2: 
		  if(o2==false){
		  	 cout<<"ERROR: NO HAY NUMEROS CARGADOS"<<endl;
		    }
		    else{
		  	 for(int i=0;i<10;i++){
                 cout<<vec[i]<<" ";
                }  
             cout<<endl;
		    }
		 
		 break;
         case 3: 
		  if(o2==false){
		  	 cout<<"ERROR: NO HAY NUMEROS CARGADOS"<<endl;
		    }
		    else{
		  	 cout<<"El mayor dato ingresao fue el: "<<mayor<<"\n";	
             cout<<"El menor dato ingresao fue el: "<<menor<<"\n";
			 cout<<endl; 
		    }
		 
		 break;
         case 4: 
		  if(o2==false){
		  	 cout<<"ERROR: NO HAY NUMEROS CARGADOS"<<endl;
		    }
		    else{
		  	 cout<<"El promedio es: "<<promedio<<endl;
		  	 cout<<endl;
		    }
		 
		 break;
		 case 5:
		  if(o2==false){
		  	 cout<<"ERROR: NO HAY NUMEROS CARGADOS"<<endl;
		    }
		    else{
		  	 for(int i=0;i<5;i++){
		  	 	 if(vec[i]==vec[9-i]){
		  	 	 	 o3=o3+1;
					}
			    }
			 if(o3==5){
				 cout<<"Es palindromo"<<endl;
				}
		  	 cout<<endl;
		    }
		 break;
         case 10: break;
        }	
    }while(op!=10);
return 0;
}
