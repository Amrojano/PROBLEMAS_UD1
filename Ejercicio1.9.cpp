//Vamos a realizar un programa que calcule las dos soluciones de una ecuacion de segundo grado.

#include <iostream>
#include <cmath>
using namespace std;
int main(){
	// Declaramos las variables necesarias.
	double a, b, c, resultado1, resultado2;

	//Entrada al programa.
	cout << "Introduzca el valor para la variable a: " << endl;
	cin >> a;

	cout << "Introduzca el valor para la variable b: " << endl;
	cin >> b;

	cout << "Introduzca el valor para la variable c: " << endl;
	cin >> c;

	//Donde procesamos la información.
	resultado1 = ( -b + sqrt(pow(b,2)-4*a*c)) / (2*a);
	resultado2 = ( -b - sqrt(pow(b,2)-4*a*c)) / (2*a);
	//Salidas del programa.
	cout << "La raiz del resultado 1 es: " << resultado1 << endl;
	cout << "La raiz del resultado 2 es: " << resultado2 << endl;
}
