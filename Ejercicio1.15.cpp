// Vamos a realizar un programa donde calcularemos los valores de pi0, pi1 y pi2.

#include <iostream>
#include <cmath>
using namespace std;
int main() { //Declaramos las variables.
	double pi0, pi1, pi2;
	double x0, x1, x2;
	double y1, y2;

	//Como calcular pi0
	pi0 = 2 + sqrt (2.0);
	cout << "El resultado de pi0 es: " << pi0 << endl;

	//Como calcular pi1
	x0 = sqrt (2.0);
	y1 = pow(2,(1.0/4.0));
	x1 = (1.0/2.0)*(sqrt(x0)+(1.0/sqrt(x0)));
	pi1= pi0*((x0+1)/(y1+1));
	cout << "El resultado de pi1 es: " << pi1 << endl;
	
	//Como calcular pi2
	x2 = (1.0/2.0)*(sqrt(x0)+(1.0/sqrt(x1)));
	y2 = (y1 * sqrt(x1) + (1.0/sqrt(x1)))/(y1 + 1);
	pi2= pi1*((x2+1)/(y2+1));
	cout << "El resultado de pi1 es: " << pi2 << endl;
}

