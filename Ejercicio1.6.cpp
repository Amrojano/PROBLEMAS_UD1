// Vamos a escribir el programa que nos piden y ver el problema que nos da y poder dar una solucion.

#include <iostream>
using namespace std;
int main (){
	double precio, pagado; // Son los dos espacios en memoria que vamos a guardar.
	double centimos; // ponemos double para solucionar el problema y que nos salga exacto los céntimos a devolver.
	cout << "Escriba precio y dinero entregado: ";
	cin >> precio >> pagado;
	centimos= 100*(pagado-precio);
	cout << "Hay que devolver: " << centimos << "céntimos" << endl;	
}
