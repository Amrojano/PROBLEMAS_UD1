#include <iostream>
#include <cmath>

using namespace std;

	int main(){
	double x1, x2, x3, m, d, v1, v2, v3;
	cout << "Introduzca un valor para la variable x1: " << endl;
	cin >> x1;

	cout << "Introduzca un valor para la variable x2: " << endl;
	cin >> x2;

	cout << "Introduzca un valor para la variable x3: " << endl;
	cin >> x3;

	m = (x1+x2+x3)/3;

	v1 = pow((x1-m),2);
	v2 = pow((x2-m),2);
	v3 = pow((x3-m),2);

	d = sqrt(((v1+v2+v3)/3));

	cout << "Resultado m: " << m << endl;
	cout << "Resultado d: " << d << endl;


	}
