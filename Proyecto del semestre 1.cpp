#include<locale.h>
#include<iostream>
#include<ctime>
#include<conio.h>
#include<cstdlib>
#include <windows.h>

using namespace std; 
         
const string lineaLarga = "\t______________________________________________________\n\n";
const string lineaCorta = "--------------";
short opcionUsuario; /*variable global donde se almacenará la opcion del usuario*/
int bip = Beep(150,400);
const string soloDosDecimales = "\n\n\tLA RESPUESTA DEBE TENER SOLO DOS DECIMALES\n";
const string respuestaCorrecta = "\n\t¡¡ FELICITACIONES, RESPUESTA CORRECTA !!\n";

short Aleatorio(int A, int B);
void Bienvenida();
void Calcualdora();
void seleccionarDificultad();
void Opciones();
void cuentaRegresiva(int minutos);

int main(){
	setlocale(LC_ALL,"spanish");
	srand(time(NULL));
	
	system("title Juego/Calculadora de Ley de Ohm");
	system("color 5f");

	Bienvenida();
	Opciones();
	
	getch();
	return 0;
}

/*void cuentaRegresiva(int minutos){
	int ii;

	for(int j=minutos-1 ; j>= 0; j--){
   		ii = 59;
 		for(int i = ii;  i >= 0; i--){
	  		system("cls");
  			cout << j << ":" << i << endl;
 			cout << "\a";
  			Sleep(1000);
 	}
 }
}
*/
/*Genera un número aleatorio*/
short Aleatorio(int A, int B){
	short numeroAleatorio;
	numeroAleatorio = A + rand() % (B-A+1);
	return numeroAleatorio;
}

void Bienvenida(){
	bip;
	cout<<lineaLarga;
	cout<<"\t¡¡ Bienvenido al programa que calcula le Ley de Ohm !!"<<endl;
	cout<<lineaLarga;
}
/*Funcion para calcular la ley de ohm*/
void Calcualdora(){
	system("cls"); /*Limpia la consola*/
	cout<<"\n\t"<<lineaCorta<<"Has elegido la opción de la calculadora"<<lineaCorta<<"\n\n";
	short opcionCalculadora; /*Guarda la opcion del usuario en la variable*/
	
	cout<<"Ingrese 1 para calcular la tensión (E)."<<endl;
	cout<<"Ingrese 2 para calcular la corriente (I)."<<endl;
	cout<<"Ingrese 3 para calcular la resistencia (R)."<<endl;
	cout<<"Opción: "; cin>>opcionCalculadora; /*Guarda la opcion del usuario en la variable*/
	float tension, corriente, resistencia;
	
	switch(opcionCalculadora){
		case 1:
			cout<<"\nIngrese el valor de la Corriente (I): ";
			cin>>corriente;
			cout<<"Ingrese el valor de la resistencia (R): ";
			cin>>resistencia;
			cout<<"El valor de la tensión es: "<<corriente * resistencia<<"v"; /*Imprime el resultado y la fórmula*/
			cout<<"\n\t La fórmula para calcular la tensión de un circuito es: E = I * R"<<endl;
			break;
		//case 2:
			
		
	}

}
void Ejercicios(){
	
	int a = Aleatorio(1,1);
	float resultado;
	float respuestaUsuario;
	int opcionConocerResultado;
	switch(a){
		case 1:
			system("cls");
			cout<<soloDosDecimales;
			cout<<endl<<endl;
			cout<<"\t"<<lineaCorta<<"Ejercicio número 1:"<<lineaCorta<<endl<<endl;
			cout<<"¿Cuál es la intensidad de la corriente que circula por un conductor de 50 Ohms de resistencia"<<endl;
			cout<<"cuando en sus extremos se aplica una diferencia de potencial de 120 volts?"<<endl<<endl;
			cout<<"\nDigite su posible respuesta aquí: ";
			cin>>respuestaUsuario;
			resultado = 2.4;
			
			if(respuestaUsuario == resultado){
				cout<<respuestaCorrecta;
			} else {
				cout<<"\nUps, respuesta incorrecta.\n\n";
				cout<<"Presione 1 para conocer el resultado correcto.\n";
				cout<<"Presione 2 para conocer la respuesta junto con su proceso\n\n";
				cout<<"Opcion:";
				cin>>opcionConocerResultado;
				
				if(opcionConocerResultado == 1){
					cout<<"\n\tEl resultado correcto es: "<<resultado;
				}
				
			}
			break;
		case 2: 
		
			break;
		case 3:
			
			break;
		case 4:
			
			break;
		case 5: 
		
			break;
		case 6:
			
			break;
		case 7:
			
			break;
	}
}

void menuJuego(){
	short opcionDificultad;
	system("cls");
	cout<<endl;
	cout<<lineaCorta<<"¡¡ Has elegido la opción de jugar !!"<<lineaCorta<<endl<<endl;
	cout<<"\tPresione 1 para la seleccionar la dificultad FÁCIL"<<endl;
	cout<<"\tPresione 2 para la seleccionar la dificultad MEDIO"<<endl;
	cout<<"\tPresione 3 para la seleccionar la dificultad DIFÍCIL"<<endl;
	cout<<"\tPresione 4 para la seleccionar la dificultad EXPERTO"<<endl;
	cout<<"\tPresione 5 para regresar al menú principal."<<endl<<endl;
	cout<<"Opción: ";cin>>opcionDificultad;
	
	
	switch(opcionDificultad){
		case 1:
				Ejercicios();
							
			break;
		case 2:
		
			break;
		case 3:
			
			break;
		case 4:
			
			break;
		case 5:
			system("cls");
			Bienvenida();
			Opciones();
			break;
	}
	
	
}

/*Menú de opciones que manejará al resto de funciones*/
void Opciones(){
	cout<<"\t¿Qué deseas hacer?"<<endl<<endl;
	cout<<"\tPresione 1 para usar la calculadora de Ohm."<<endl;
	cout<<"\tPresione 2 para jugar."<<endl;
	cout<<"Opción: "; cin>>opcionUsuario;
	
	switch(opcionUsuario){
		case 1:
				Calcualdora();
			
			break;
		case 2:
				menuJuego();		
			break;
		default: 
			cout<< "\a";
			string opcionIncorrecta;
			cout<<"La opción que ha digitado no es correcta, ¿desea intentarlo de nuevo? si/no: "; cin>>opcionIncorrecta;
			
			if(opcionIncorrecta == "si" || opcionIncorrecta == "SI" || opcionIncorrecta == "Si" || opcionIncorrecta =="sI"){
				system("cls");
				Bienvenida();
				Opciones();
			} else if(opcionIncorrecta == "no" || opcionIncorrecta == "NO" || opcionIncorrecta == "No" || opcionIncorrecta =="nO"){
				system("cls");
				cout<<"\n\n\tHa finalizado el programa, gracias por usarlo :)"<<endl;
			} else {
				system("cls");				
				cout<<"\n\n\tNo has digitado ni 'si' o 'no', por ende, el programa finaliza."<<endl;				
			}
	}
	
}
