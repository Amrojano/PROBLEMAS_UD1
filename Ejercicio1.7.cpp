// Vamos a escribir el programa que nos piden y ver el problema que nos da y poder dar una solucion.

#include <iostream>
using namespace std;
int main (){
	double a;
	double b; 
	double suma, resta, multiplicacion, division; // son las variables de tipo double que declaramos para almacenar un valor real.
	// Introducimos los valores que nos piden.
	cout << "Introduzca el valor de a: ";
	cin >> a;
	cout << "Introduzca el valor de b: ";
	cin >> b;
	// Hacemos las operaciones cque nos piden en el ejercicio.
	suma = a+b;
	cout <<"La suma es: " << suma << endl;
	resta = a-b;
	cout <<"La resta es: " << resta << endl;
	multiplicacion = a*b;
	cout <<"La multiplicacion es: " << multiplicacion << endl;
	division = a/b;
	cout <<"La division es: " << division << endl;
	}
