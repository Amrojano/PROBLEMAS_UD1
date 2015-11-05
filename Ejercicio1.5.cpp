// despues de corregir los errores de el logaritmo original que nos facilitaron en el ejercicio, vamos a programar el logaritmo correcto.

#include <iostream>
#include <cmath> // Hemos introducido el archivo de cabecera cmath para poder realizar las funciones logaritmicas.

using namespace std;
int main (){
	double valor, base; // Son los dos espacios en memoria que vamos a guardar.
	cout << "Indique base: ";
	cin >> base;
	cout << "Indique valor: ";
	cin >> valor;
	cout << "El log en base: " << base << "de" << valor << "es" << endl;
	cout << "log (valor) / log (base): " << endl;
}

