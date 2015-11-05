//Vamos a realizar un programa que calcule la nota de un alumno en la asignatura de programacion, donde la teoria vale el 70%, la practica el 20% y los problemas el 10%.

#include <iostream>
using namespace std;
int main(){
	// Declaramos las variables necesarias.
	const double teoria = 0.70;
	const double practica = 0.20;
	const double problemas = 0.10;
	double t, pr, p, total;

	//Entrada al programa.
	cout << "Introduzca el valor de la teoria: " << endl;
	cin >> t;

	cout << "Introduzca el valor la practica: " << endl;
	cin >> pr;

	cout << "Introduzca el valor de los problemas: " << endl;
	cin >> p;

	//Donde procesamos la información.
	total = (teoria*t)+(practica*pr)+(problemas*p);

	//Salidas del programa.
	cout << "La nota final es: " << total << endl;

}
