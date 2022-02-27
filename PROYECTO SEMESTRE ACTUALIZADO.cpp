#include<locale.h>
#include<iostream>
#include<ctime>
#include<conio.h>
#include<cstdlib>
#include <windows.h>

using namespace std; 
         
const string lineaLarga = "\t______________________________________________________\n";
const string lineaCorta = "--------------";
short opcionUsuario; /*variable global donde se almacenará la opcion del usuario*/
const string respuestaCorrecta = "\n\t¡¡ FELICITACIONES, RESPUESTA CORRECTA !!\n";

short Aleatorio(int A, int B);
void Bienvenida();
void Calcualdora();
void seleccionarDificultad();
void Opciones();
void cuentaRegresiva(int minutos);
void regresarMenuPrincipal();
void intentarloDeNuevo();
void Facil();
void Medio();
void Dificil();

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
	
	cout<<"Ingrese 1 para calcular la tensión (V)."<<endl;
	cout<<"Ingrese 2 para calcular la corriente (I)."<<endl;
	cout<<"Ingrese 3 para calcular la resistencia (R)."<<endl;
	cout<<"Ingrese 4 para regresar al menú principal."<<endl;
	cout<<"Opción: "; cin>>opcionCalculadora; /*Guarda la opcion del usuario en la variable*/
	float tension, corriente, resistencia;
	
	switch(opcionCalculadora){
		case 1:
			cout<<"\nIngrese el valor de la Corriente (I): ";
			cin>>corriente;
			cout<<"Ingrese el valor de la resistencia (R): ";
			cin>>resistencia;
			cout<<"El valor de la tensión es: "<<corriente * resistencia<<"v"; /*Imprime el resultado y la fórmula*/
			cout<<"\n\t La fórmula para calcular la tensión de un circuito es: V = I * R"<<endl;
			regresarMenuPrincipal();
			break;
		case 2:
			cout<<"\nIngrese el valor de la Tension  (V): ";
			cin>>tension;
			cout<<"Ingrese el valor de la resistencia (R): ";
			cin>>resistencia;
			cout<<"El valor de la corriente es: "<<tension / resistencia<<"v"; /*Imprime el resultado y la fórmula*/
			cout<<"\n\t La fórmula para calcular la corriente  de un circuito es: I = V / R"<<endl;
			regresarMenuPrincipal();
			break;
			
		case 3:
			cout<<"\nIngrese el valor de la Tension (V): ";
			cin>>tension;
			cout<<"Ingrese el valor de la Corriente (I): ";
			cin>>corriente;
			cout<<"El valor de la resistencia es: "<<tension / corriente<<"v"; /*Imprime el resultado y la fórmula*/
			cout<<"\n\t La fórmula para calcular la resistencia  de un circuito es: R = V / I"<<endl;
			regresarMenuPrincipal();
			break;
		
		case 4:
			system("cls");
			Bienvenida();
			Opciones();
			
		default:
			system("cls");
			cout<<"\n\t\tError, la opción que usted ha digitado es incorrecta, inténtelo de nuevo.\n";
			Sleep(5000);
			Calcualdora();
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
	cout<<"\tPresione 4 para regresar al menú principal."<<endl<<endl;
	cout<<"Opción: ";cin>>opcionDificultad;
	
	
	switch(opcionDificultad){
		case 1:
				Facil();
							
			break;
		case 2:
				Medio();
				
		
			break;
		case 3:
			Dificil();
			
			break;
		case 4:
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
	cout<<"\tPresione 2 para practicar."<<endl;
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
void regresarMenuPrincipal(){
	string regresarAlMenu;
	cout<<"\n¿Deseas regresar al menú principal? si/no : ";
	cin>>regresarAlMenu;
	
	if(regresarAlMenu == "si" || regresarAlMenu == "SI" || regresarAlMenu == "sI" || regresarAlMenu == "Si"){
		system("cls");
		Bienvenida();
		Opciones();
	} else if(regresarAlMenu == "no" || regresarAlMenu == "NO" || regresarAlMenu == "No" || regresarAlMenu == "nO"){
		cout<<"\n\tEl programa ha finalizado.";
	}
}

void intentarloDeNuevo(){
	string intertarlodenuevo;
	cout<<"\n¿Deseas intentarlo de nuevo? si/no : ";
	cin>>intertarlodenuevo;
	
	if(intertarlodenuevo == "si" || intertarlodenuevo == "SI"){
		system("cls");
		Bienvenida();
		Opciones();
	} else if(intertarlodenuevo == "no" || intertarlodenuevo == "NO"){
		cout<<"\n\tEl programa ha finalizado.";
	}
	
}
void Dificil(){
	int a = Aleatorio(1,5);
	float resultado;
	float respuestaUsuario;
	int opcionConocerResultado;
	switch(a){
		case 1:
			system("cls");
			cout<<endl<<endl;
			cout<<"\t"<<lineaCorta<<"Ejercicio número 1:"<<lineaCorta<<endl<<endl;
			cout<<"¿Cuál es la intensidad de la corriente que circula por un conductor de 50 Ohms de resistencia"<<endl;
			cout<<"cuando en sus extremos se aplica una diferencia de potencial de 120 volts?"<<endl<<endl;
			cout<<"\nDigite su posible respuesta aquí: ";
			cin>>respuestaUsuario;
			resultado = 2.4;
			
			if(respuestaUsuario == resultado){
				cout<<respuestaCorrecta;
				regresarMenuPrincipal();
			} else {
				cout<<"\nUps, respuesta incorrecta.\n\n";
				cout<<"Presione 1 para conocer el resultado correcto.\n";
				cout<<"Presione 2 para conocer la respuesta junto con su proceso\n\n";
				cout<<"Opcion:";
				cin>>opcionConocerResultado;
				
				if(opcionConocerResultado == 1){
					cout<<"\n\tEl resultado correcto es: "<<resultado;
					regresarMenuPrincipal();
				} else if(opcionConocerResultado == 2){
					cout<<"\nCalculando";
					Sleep(700);
					cout<<".";
					Sleep(700);
					cout<<".";
					Sleep(700);
					cout<<"."<<endl<<endl;
					Sleep(700);
					cout<<"\nLa fórmula es: I = E/R. Se reemplazan los valores, es decir:  120/50 = 2.4\n";
					regresarMenuPrincipal();
				}				
				
			}
			break;
		case 2: // EJERCICIO REALIZADO POR GQ//
			system("cls");
			cout<<endl<<endl;
			cout<<"\t"<<lineaCorta<<"Ejercicio número 2:"<<lineaCorta<<endl<<endl;
			cout<<"La tensión de  corriente  que circula por un circuito es de 230V y el valor de la resistencia es de 100 Ohms."<<endl;
			cout<<"¿Qué valor tiene la corriente que circula por el circuito?"<<endl<<endl;
			cout<<"\nDigite su posible respuesta aquí: ";
			cin>>respuestaUsuario;
			resultado = 2.3;
			
			if(respuestaUsuario == resultado){
				cout<<respuestaCorrecta;
				regresarMenuPrincipal();
			} else {
				cout<<"\nUps, respuesta incorrecta.\n\n";
				cout<<"Presione 1 para conocer el resultado correcto.\n";
				cout<<"Presione 2 para conocer la respuesta junto con su proceso\n\n";
				cout<<"Opcion:";
				cin>>opcionConocerResultado;
				
				if(opcionConocerResultado == 1){
					cout<<"\n\tEl resultado correcto es: "<<resultado;
					regresarMenuPrincipal();
				} else if(opcionConocerResultado == 2){
					cout<<"\nCalculando";
					Sleep(700);
					cout<<".";
					Sleep(700);
					cout<<".";
					Sleep(700);
					cout<<"."<<endl<<endl;
					Sleep(700);
					cout<<"\nLa fórmula es: I = V/R. Se reemplazan los valores, es decir:  230/100 = 2.3\n";
					regresarMenuPrincipal();
				}				
				
			}
			break;
		case 3: //EJERCICIO REALIZADO POR GQ
			system("cls");
			cout<<endl<<endl;
			cout<<"\t"<<lineaCorta<<"Ejercicio número 3:"<<lineaCorta<<endl<<endl;
			cout<<"La luna térmica de un automóvil consume 3 A con una tensión de 12 V"<<endl;
			cout<<"¿Qué resistencia tiene dicha luna?"<<endl<<endl;
			cout<<"\nDigite su posible respuesta aquí: ";
			cin>>respuestaUsuario;
			resultado = 4;
			
			if(respuestaUsuario == resultado){
				cout<<respuestaCorrecta;
				regresarMenuPrincipal();
			} else {
				cout<<"\nUps, respuesta incorrecta.\n\n";
				cout<<"Presione 1 para conocer el resultado correcto.\n";
				cout<<"Presione 2 para conocer la respuesta junto con su proceso\n\n";
				cout<<"Opcion:";
				cin>>opcionConocerResultado;
				
				if(opcionConocerResultado == 1){
					cout<<"\n\tEl resultado correcto es: "<<resultado;
					regresarMenuPrincipal();
				} else if(opcionConocerResultado == 2){
					cout<<"\nCalculando";
					Sleep(700);
					cout<<".";
					Sleep(700);
					cout<<".";
					Sleep(700);
					cout<<"."<<endl<<endl;
					Sleep(700);
					cout<<"\nLa fórmula es: R = V/I. Se reemplazan los valores, es decir:  12/3 = 4\n";
					regresarMenuPrincipal();
				}				
				
			}
			break;
			case 4: //EJERCICIO REALIZADO POR GQ//
			system("cls");
			cout<<endl<<endl;
			cout<<"\t"<<lineaCorta<<"Ejercicio número 4:"<<lineaCorta<<endl<<endl;
			cout<<"En un conductor circula una intensidad de 4 A y tiene una resistencia de 2 ohmios. "<<endl;
			cout<<"¿Qué tensión tendrá en los extremos?"<<endl<<endl;
			cout<<"\nDigite su posible respuesta aquí: ";
			cin>>respuestaUsuario;
			resultado =8;
			
			if(respuestaUsuario == resultado){
				cout<<respuestaCorrecta;
				regresarMenuPrincipal();
			} else {
				cout<<"\nUps, respuesta incorrecta.\n\n";
				cout<<"Presione 1 para conocer el resultado correcto.\n";
				cout<<"Presione 2 para conocer la respuesta junto con su proceso\n\n";
				cout<<"Opcion:";
				cin>>opcionConocerResultado;
				
				if(opcionConocerResultado == 1){
					cout<<"\n\tEl resultado correcto es: "<<resultado;
					regresarMenuPrincipal();
				} else if(opcionConocerResultado == 2){
					cout<<"\nCalculando";
					Sleep(700);
					cout<<".";
					Sleep(700);
					cout<<".";
					Sleep(700);
					cout<<"."<<endl<<endl;
					Sleep(700);
					cout<<"\nLa fórmula es: V = I*R. Se reemplazan los valores, es decir:  4*2= 8\n";
					regresarMenuPrincipal();
				}
			}
					break;
			case 5: //EJERCICIO REALIZADO POR GQ//
			system("cls");
			cout<<endl<<endl;
			cout<<"\t"<<lineaCorta<<"Ejercicio número 5:"<<lineaCorta<<endl<<endl;
			cout<<"Una pila de 9.5 V se conecta mediante un cable de resistencia despreciable a una resistencia"<<endl;
			cout<<" ¿Cuál es la intensidad que circula por el circuito si la resistencia es de 20 Ohm?"<<endl<<endl;
			cout<<"\nDigite su posible respuesta aquí: ";
			cin>>respuestaUsuario;
			resultado =0.475;
			
			if(respuestaUsuario == resultado || respuestaUsuario ==0.47){
				cout<<respuestaCorrecta;
				regresarMenuPrincipal();
			} else {
				cout<<"\nUps, respuesta incorrecta.\n\n";
				cout<<"Presione 1 para conocer el resultado correcto.\n";
				cout<<"Presione 2 para conocer la respuesta junto con su proceso\n\n";
				cout<<"Opcion:";
				cin>>opcionConocerResultado;
				
				if(opcionConocerResultado == 1){
					cout<<"\n\tEl resultado correcto es: "<<resultado;
					regresarMenuPrincipal();
				} else if(opcionConocerResultado == 2){
					cout<<"\nCalculando";
					Sleep(700);
					cout<<".";
					Sleep(700);
					cout<<".";
					Sleep(700);
					cout<<"."<<endl<<endl;
					Sleep(700);
					cout<<"\nLa fórmula es: I = V/R. Se reemplazan los valores, es decir:  9.5/20 = 0.475\n";
					regresarMenuPrincipal();			
				
			}	
		}
	}
}

void Medio(){	
	int a = Aleatorio(1,5);
	float resultado;
	float respuestaUsuario;
	int opcionConocerResultado;
	switch(a){
		case 1:
			system("cls");
			cout<<endl<<endl;
			cout<<"\t"<<lineaCorta<<"Ejercicio número 1:"<<lineaCorta<<endl<<endl;
			cout<<"Calcula el voltaje, entre dos puntos del circuito de una plancha, por el\n";
			cout<<"que atraviesa una corriente de 4 amperios y presenta una resistencia de 10 ohmios";
			cout<<"\nDigite su posible respuesta aquí: ";
			cin>>respuestaUsuario;
			resultado = 40;
						
			if(respuestaUsuario == resultado){
				cout<<respuestaCorrecta;
				regresarMenuPrincipal();
			} else {
				cout<<"\nUps, respuesta incorrecta.\n\n";
				cout<<"Presione 1 para conocer el resultado correcto.\n";
				cout<<"Presione 2 para conocer la respuesta junto con su proceso\n\n";
				cout<<"Opcion:";
				cin>>opcionConocerResultado;
				
				if(opcionConocerResultado == 1){
					cout<<"\n\tEl resultado correcto es: "<<resultado;
					regresarMenuPrincipal();
				} else if(opcionConocerResultado == 2){
					cout<<"\nCalculando";
					Sleep(500);
					cout<<".";
					Sleep(500);
					cout<<".";
					Sleep(500);
					cout<<"."<<endl<<endl;
					Sleep(500);
					cout<<"\nLa fórmula es: V = I * R. Se reemplazan los valores, es decir:  4*10 = "<<resultado<<endl;
					regresarMenuPrincipal();
				}				
				
			}
			break;
		case 2: 
		    system("cls");
			cout<<endl<<endl;
			cout<<"\t"<<lineaCorta<<"Ejercicio número 2:"<<lineaCorta<<endl<<endl;
			cout<<"Que resistencia ofrece un conductor cuando se le aplica una\n";
			cout<<"intensidad de 10 amperios y 90 voltios";
			cout<<"\nDigite su posible respuesta aquí: ";
			cin>>respuestaUsuario;
			resultado = 9;
			
			
			if(respuestaUsuario == resultado){
				cout<<respuestaCorrecta;
				regresarMenuPrincipal();
			} else {
					cout<<"\nUps, respuesta incorrecta.\n\n";
				cout<<"Presione 1 para conocer el resultado correcto.\n";
				cout<<"Presione 2 para conocer la respuesta junto con su proceso\n\n";
				cout<<"Opcion:";
				cin>>opcionConocerResultado;
				
				if(opcionConocerResultado == 1){
					cout<<"\n\tEl resultado correcto es: "<<resultado;
					regresarMenuPrincipal();
				} else if(opcionConocerResultado == 2){
					cout<<"\nCalculando";
					Sleep(500);
					cout<<".";
					Sleep(500);
					cout<<".";
					Sleep(500);
					cout<<"."<<endl<<endl;
					Sleep(500);
					cout<<"\nLa fórmula es: R = V / I. Se reemplazan los valores, es decir:  90/10 = "<<resultado<<endl;
					regresarMenuPrincipal();
				}
			}
		
			break;
		case 3:	
		 system("cls");
			cout<<endl<<endl;
			cout<<"\t"<<lineaCorta<<"Ejercicio número 3:"<<lineaCorta<<endl<<endl;
			cout<<"Calcule la intensidad de la corriente que llega a una lavadora industrial que trabaja\n";
			cout<<"a una diferencia de potencial de 400 voltios y presenta una resistencia es de 200 ohmios";
			cout<<"\nDigite su posible respuesta aquí: ";
			cin>>respuestaUsuario;
			resultado = 2;
			
			
			if(respuestaUsuario == resultado || respuestaUsuario == 2 ){
				cout<<respuestaCorrecta;
				regresarMenuPrincipal();
			} else {
					cout<<"\nUps, respuesta incorrecta.\n\n";
				cout<<"Presione 1 para conocer el resultado correcto.\n";
				cout<<"Presione 2 para conocer la respuesta junto con su proceso\n\n";
				cout<<"Opcion:";
				cin>>opcionConocerResultado;
				
				if(opcionConocerResultado == 1){
					cout<<"\n\tEl resultado correcto es: "<<resultado;
					regresarMenuPrincipal();
				} else if(opcionConocerResultado == 2){
					cout<<"\nCalculando";
					Sleep(500);
					cout<<".";
					Sleep(500);
					cout<<".";
					Sleep(500);
					cout<<"."<<endl<<endl;
					Sleep(500);
					cout<<"\nLa fórmula es: I = V / R. Se reemplazan los valores, es decir:  400/200 = "<<resultado<<endl;
					regresarMenuPrincipal();
				}
			}
			break;
		case 4:	//EJERCICIO REALIZADO POR GQ//
		 system("cls");
			cout<<endl<<endl;
			cout<<"\t"<<lineaCorta<<"Ejercicio número 4:"<<lineaCorta<<endl<<endl;
			cout<<"¿Cúal es la intensidad de corriente que circula por un conductor de 50 Ohm?\n";
			cout<<"Cuando se les aplica a sus extremos 60V.";
			cout<<"\nDigite su posible respuesta aquí: ";
			cin>>respuestaUsuario;
			resultado = 1.2;
			
			
			if(respuestaUsuario == resultado){
				cout<<respuestaCorrecta;
				regresarMenuPrincipal();
			} else {
					cout<<"\nUps, respuesta incorrecta.\n\n";
				cout<<"Presione 1 para conocer el resultado correcto.\n";
				cout<<"Presione 2 para conocer la respuesta junto con su proceso\n\n";
				cout<<"Opcion:";
				cin>>opcionConocerResultado;
				
				if(opcionConocerResultado == 1){
					cout<<"\n\tEl resultado correcto es: "<<resultado;
					regresarMenuPrincipal();
				} else if(opcionConocerResultado == 2){
					cout<<"\nCalculando";
					Sleep(700);
					cout<<".";
					Sleep(700);
					cout<<".";
					Sleep(700);
					cout<<"."<<endl<<endl;
					Sleep(700);
					cout<<"\nLa fórmula es: I = V / R. Se reemplazan los valores, es decir:  60/50 = "<<resultado<<endl;
					regresarMenuPrincipal();
			break;
		case 5:	// EJERCICIO REALIZADO POR GQ.//
		 system("cls");
			cout<<endl<<endl;
			cout<<"\t"<<lineaCorta<<"Ejercicio número 5:"<<lineaCorta<<endl<<endl;
			cout<<" Por un circuito de 20V circula corriente de 2 A\n";
			cout<<"Calcular el valor de dicha resistencia";
			cout<<"\nDigite su posible respuesta aquí: ";
			cin>>respuestaUsuario;
			resultado = 10;
			
			
			if(respuestaUsuario == resultado){
				cout<<respuestaCorrecta;
				regresarMenuPrincipal();
			} else {
					cout<<"\nUps, respuesta incorrecta.\n\n";
				cout<<"Presione 1 para conocer el resultado correcto.\n";
				cout<<"Presione 2 para conocer la respuesta junto con su proceso\n\n";
				cout<<"Opcion:";
				cin>>opcionConocerResultado;
				
				if(opcionConocerResultado == 1){
					cout<<"\n\tEl resultado correcto es: "<<resultado;
					regresarMenuPrincipal();
				} else if(opcionConocerResultado == 2){
					cout<<"\nCalculando";
					Sleep(700);
					cout<<".";
					Sleep(700);
					cout<<".";
					Sleep(700);
					cout<<"."<<endl<<endl;
					Sleep(700);
					cout<<"\nLa fórmula es: R = E / I. Se reemplazan los valores, es decir:  20/2 = "<<resultado<<endl;
					regresarMenuPrincipal();
		
					}
				}
			}
		}
	}
}

void Facil(){
	int a = Aleatorio(1,5);
	float resultado;
	float respuestaUsuario;
	string formula;
	string respuestaFormula;
	int opcionConocerResultado;	
	
	switch(a){
		case 1:
			system("cls");
			cout<<endl<<endl;
			cout<<"\t"<<lineaCorta<<"Ejercicio número 1"<<lineaCorta<<endl<<endl;
			cout<<"\nDIGITE LA FÓRMULA SIN ESPACIOS EN BLANCO."<<endl<<endl;
			cout<<"¿Cúal es la fórmula para calcular (I) ?"<<endl;
			cout<<"\nDigite su posible respuesta aquí: ";
			cin>>formula;
			respuestaFormula = "V/R";
			
			if(formula == respuestaFormula || formula == "v/r"){
				cout<<respuestaCorrecta;
				regresarMenuPrincipal();
			} else {
				cout<<"\nUps, respuesta incorrecta.\n\n";
				cout<<"Presione 1 para conocer el resultado correcto.\n";
				cout<<"Presione 2 para regresar al menú principal.\n";
				cout<<"Opcion:";
				cin>>opcionConocerResultado;
				
				if(opcionConocerResultado == 1){
					cout<<"\n\tEl resultado correcto es: v/r"<<endl;
					regresarMenuPrincipal();
				} else if(opcionConocerResultado == 2){
					system("cls");
					Bienvenida();
					Opciones();
				}				
				
			}
			break;
			
		case 2:
			system("cls");
			cout<<endl<<endl;
			cout<<"\t"<<lineaCorta<<"Ejercicio número 2"<<lineaCorta<<endl<<endl;
			cout<<"\nDIGITE LA FÓRMULA SIN ESPACIOS EN BLANCO."<<endl<<endl;
			cout<<"¿Cúal es la fórmula para calcular (R) ?"<<endl;
			cout<<"\nDigite su posible respuesta aquí: ";
			cin>>formula;
			respuestaFormula = "V/I";
			
			if(formula == respuestaFormula || formula == "v/i"){
				cout<<respuestaCorrecta;
				regresarMenuPrincipal();
			} else {
				cout<<"\nUps, respuesta incorrecta.\n\n";
				cout<<"Presione 1 para conocer el resultado correcto.\n";
				cout<<"Presione 2 para regresar al menú principal.\n";
				cout<<"Opcion:";
				cin>>opcionConocerResultado;
				
				if(opcionConocerResultado == 1){
					cout<<"\n\tEl resultado correcto es: "<<respuestaFormula<<endl;
					regresarMenuPrincipal();
				} else if(opcionConocerResultado == 2){
					system("cls");
					Bienvenida();
					Opciones();
				}				
				
			}
			break;
		case 3:
			system("cls");
			cout<<endl<<endl;
			cout<<"\t"<<lineaCorta<<"Ejercicio número 2"<<lineaCorta<<endl<<endl;
			cout<<"\nDIGITE LA FÓRMULA SIN ESPACIOS EN BLANCO."<<endl<<endl;
			cout<<"¿Cúal es la fórmula para calcular (V) ?"<<endl;
			cout<<"\nDigite su posible respuesta aquí: ";
			cin>>formula;
			respuestaFormula = "I*R";
			
			if(formula == respuestaFormula || formula == "i*r"){
				cout<<respuestaCorrecta;
				regresarMenuPrincipal();
			} else {
				cout<<"\nUps, respuesta incorrecta.\n\n";
				cout<<"Presione 1 para conocer el resultado correcto.\n";
				cout<<"Presione 2 para regresar al menú principal.\n";
				cout<<"Opcion:";
				cin>>opcionConocerResultado;
				
				if(opcionConocerResultado == 1){
					cout<<"\n\tEl resultado correcto es: "<<respuestaFormula<<endl;
					regresarMenuPrincipal();
				} else if(opcionConocerResultado == 2){
					system("cls");
					Bienvenida();
					Opciones();
				}				
				
			}		
			break;	
		case 4:
			system("cls");
			cout<<endl<<endl;
			cout<<"\t"<<lineaCorta<<"Ejercicio número 4"<<lineaCorta<<endl<<endl;
			cout<<"\nV = 10"<<endl;
			cout<<"R = 5"<<endl;
			cout<<"I = ";
			cin>>respuestaUsuario;
			resultado = 10/5;
			
			if(respuestaUsuario == resultado){
				cout<<respuestaCorrecta;
				regresarMenuPrincipal();
			} else {
				cout<<"\nUps, respuesta incorrecta.\n\n";
				cout<<"Presione 1 para conocer el resultado correcto.\n";
				cout<<"Presione 2 para regresar al menú principal.\n";
				cout<<"Opcion:";
				cin>>opcionConocerResultado;
				
				if(opcionConocerResultado == 1){
					cout<<"\n\tEl resultado correcto es: "<<resultado<<endl;
					regresarMenuPrincipal();
				} else if(opcionConocerResultado == 2){
					system("cls");
					Bienvenida();
					Opciones();
				}								
			}		
			break;		
			
		case 5:
			system("cls");
			cout<<endl<<endl;
			cout<<"\t"<<lineaCorta<<"Ejercicio número 4"<<lineaCorta<<endl<<endl;
			cout<<"\nR = 3"<<endl;
			cout<<"V = 30"<<endl;
			cout<<"I = ";
			cin>>respuestaUsuario;
			resultado = 30/3;
			
			if(respuestaUsuario == resultado){
				cout<<respuestaCorrecta;
				regresarMenuPrincipal();
			} else {
				cout<<"\nUps, respuesta incorrecta.\n\n";
				cout<<"Presione 1 para conocer el resultado correcto.\n";
				cout<<"Presione 2 para regresar al menú principal.\n";
				cout<<"Opcion:";
				cin>>opcionConocerResultado;
				
				if(opcionConocerResultado == 1){
					cout<<"\n\tEl resultado correcto es: "<<resultado<<endl;
					regresarMenuPrincipal();
				} else if(opcionConocerResultado == 2){
					system("cls");
					Bienvenida();
					Opciones();
				}				
				
			}			
			break;
	}
}
