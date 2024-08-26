#include <iostream>
#include <conio.h>

using namespace std;

main(){setlocale(LC_ALL,"spanish");
	
	int NLetras,Aciertos=0,Bandera=0,Fallos=0;
	char sec[20],Copia[20],Letra,Palabra;
system("color d");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                               ¡Bienvenido a Ahorcado!"<<endl;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n                                        (ingrese cualquier tecla para empezar)"<<endl;
getch();

system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                                                 Ingrese una palabra"<<endl;
	cout<<"                                            (Para finalizar ponga punto)"<<endl;
	cout<<"\n\n\n\n                                                   ";
	for(int i=0;i<20;i++){
		sec[i]=toupper(getch());
		Palabra+=sec[i];
		Copia[i]='-';
		if(sec[i]=='.'){
			NLetras=i;
			break;
		}
		cout<<"*";
	}

system("cls");
cout<<"                                                  ¡Inicia el juego!"<<endl;
	while(Aciertos<NLetras&&Fallos<5){
		cout<<"\n\n\n\n\n\n\n\n\n\n\n                                                       ";
		for(int i=0;i<NLetras;i++){
			cout<<Copia[i];
		}
		cout<<"\n                                                  Aciertos: "<<Aciertos<<"\n                                                    Fallos: "<<Fallos<<"\n                                              Ingrese una letra: ";
		Letra=toupper(getche());
system("cls");
		Bandera=0;
		
		for(int i=0;i<NLetras;i++){
			if(sec[i]==Letra&&Copia[i]=='-'){
				Bandera=1;
				Aciertos++;
				Copia[i]=Letra;
				cout<<"\n\n\n\n\n\n\n\n\n\n\n\n                                               ¡Esa letra es correcta!";
				cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n                                        (Ingrese cualquier tecla para continuar)";
getch();
system("cls");
			}
		}	
		if(Bandera==0){
			Fallos++;
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n                                               ¡Esa letra es incorrecta!";
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n                                        (Ingrese cualquier tecla para continuar)";
getch();
system("cls");
		}
	}
	
	if(Aciertos==NLetras){
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n                                               ¡Usted ha ganado!"<<endl;
getch();
system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n                                              La palabra era: ";
	for(int i=0;i<NLetras;i++)
	cout<<sec[i];
	cout<<"\n                                                  Aciertos: "<<Aciertos<<"\n                                                    Fallos: "<<Fallos<<endl;
getch();
	}
	if(Fallos==5){
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n                                               ¡Usted ha perdido!"<<endl;
getch();
system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n                                              La palabra era: ";
	for(int i=0;i<NLetras;i++)
	cout<<sec[i];
	cout<<"\n                                                  Aciertos: "<<Aciertos<<"\n                                                    Fallos: "<<Fallos<<endl;
getch();
	}
system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n                                               ¡Vuelva pronto!"<<endl;
getch();
return 0;
}
/*pedir palabra
acietos y errores gana cuando termina 
pierde con 5 errores
mensaje de perder y de ganar*/
