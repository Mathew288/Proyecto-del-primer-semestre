#include<locale.h>
#include<iostream>
#include<ctime>
#include<conio.h>
#include<cstdlib>
using namespace std;          
const string lineaLarga = "\t______________________________________________________\n\n";
const string lineaCorta = "--------------";
short opcionUsuario;


short Aleatorio(int A, int B);
void Bienvenida();
void Calcualdora();
void seleccionarDificultad();
void Opciones();

int main(){
	setlocale(LC_ALL,"spanish");
	srand(time(NULL));
	
	//cout<<Aleatorio(0,105);
	
	Bienvenida();
	Opciones();

	
	getch();
	return 0;
}

/*Genera un número aleatorio*/
short Aleatorio(int A, int B){
	short numeroAleatorio;
	numeroAleatorio = A + rand() % (B-A+1);
	return numeroAleatorio;
}

void Bienvenida(){
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

void seleccionarDificultad(){
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
				seleccionarDificultad();		
			break;
		default: 
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


