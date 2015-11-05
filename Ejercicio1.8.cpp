// Vamos hacer un programa para calcular la tabla de multiplicar de cualquier numero entero.
#include <iostream>
using namespace std;
int main() {
	int numero;
	cout << "tabla de multiplicar: "; // Donde vamos a introducir el numero de cuya tabla de multiplicar queremos saber
	cin >> numero;
// Lo que se va a mostrar por pantalla.	
	cout << numero << " x " << 1 << " = " << numero*1 << endl;
	cout << numero << " x " << 2 << " = " << numero*2 << endl;
	cout << numero << " x " << 3 << " = " << numero*3 << endl;
	cout << numero << " x " << 4 << " = " << numero*4 << endl;
	cout << numero << " x " << 5 << " = " << numero*5 << endl;
	cout << numero << " x " << 6 << " = " << numero*6 << endl;
	cout << numero << " x " << 7 << " = " << numero*7 << endl;
	cout << numero << " x " << 8 << " = " << numero*8 << endl;
	cout << numero << " x " << 9 << " = " << numero*9 << endl;
	cout << numero << " x " << 10 << " = " << numero*10 << endl;
}
