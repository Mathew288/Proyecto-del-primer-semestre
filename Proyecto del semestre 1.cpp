#include<locale.h>
#include<iostream>
#include<ctime>
#include<conio.h>
#include<cstdlib>
using namespace std;          
const string lineaLarga = "\t______________________________________________________\n\n";
const string lineaCorta = "--------------";
short opcionUsuario;

/*Genera un n�mero aleatorio*/
short Aleatorio(int A, int B){
	short numeroAleatorio;
	numeroAleatorio = A + rand() % (B-A+1);
	return numeroAleatorio;
}

void Bienvenida(){
	cout<<lineaLarga;
	cout<<"\t�� Bienvenido al programa que calcula le Ley de Ohm !!"<<endl;
	cout<<lineaLarga;
}

void Calcualdora(){
	system("cls");
	cout<<"\n\t"<<lineaCorta<<"Has elegido la opci�n de la calculadora"<<lineaCorta<<"\n\n";
	short opcionCalculadora;
	
	cout<<"Ingrese 1 para calcular la tensi�n (E)."<<endl;
	cout<<"Ingrese 2 para calcular la corriente (I)."<<endl;
	cout<<"Ingrese 3 para calcular la resistencia (R)."<<endl;
	cout<<"Opci�n: "; cin>>opcionCalculadora;
	float tension, corriente, resistencia;

	switch(opcionCalculadora){
		case 1:
			cout<<"\nIngrese el valor de la Corriente (I): ";
			cin>>corriente;
			cout<<"Ingrese el valor de la resistencia (R): ";
			cin>>resistencia;
			cout<<"El valor de la tensi�n es: "<<corriente * resistencia<<"v";
			cout<<"\n\t La f�rmula para calcular la tensi�n de un circuito es: E = I * R"<<endl;

			
			break;
	}
	

}

/*Men� de opciones que manejar� al resto de funciones*/
void Opciones(){
	cout<<"�Qu� deseas hacer?"<<endl;
	cout<<"Presione 1 para usar la calculadora de Ohm."<<endl;
	cout<<"Presione 2 para jugar."<<endl;
	cout<<"Opci�n: "; cin>>opcionUsuario;
	
	switch(opcionUsuario){
		case 1:
				Calcualdora();
			
			break;
		case 2:
			
			break;
		default: 
			string opcionIncorrecta;
			cout<<"La opci�n que ha digitado no es correcta, �desea intentarlo de nuevo? si/no: "; cin>>opcionIncorrecta;
			
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

int main(){
	setlocale(LC_ALL,"spanish");
	srand(time(NULL));
	
	//cout<<Aleatorio(1,15);
	
	Bienvenida();
	Opciones();

	
	getch();
	return 0;
}
