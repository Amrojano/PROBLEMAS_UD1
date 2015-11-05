//Vamos a realizar un programa que lea 3 valores reales y escriba en su salida la media y la desviacion tipica de esos valores.

#include <iostream>
#include <cmath>
using namespace std;
int main(){
	// Declaramos las variables necesarias.
	double x1, x2, x3, m, d, v1, v2, v3;
	//Entrada al programa.
	cout << "Introduzca un valor para la variable x1: " << endl;
	cin >> x1;

	cout << "Introduzca un valor para la variable x2: " << endl;
	cin >> x2;

	cout << "Introduzca un valor para la variable x3: " << endl;
	cin >> x3;

	//Donde procesamos la información.
	m = (x1+x2+x3)/3;

	v1 = pow((x1-m),2);
	v2 = pow((x2-m),2);
	v3 = pow((x3-m),2);

	d = sqrt(((v1+v2+v3)/3));

	//Salidas del programa.
	cout << "Resultado m: " << m << endl;
	cout << "Resultado d: " << d << endl;

}
