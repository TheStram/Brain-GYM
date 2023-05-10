#include <iostream>
#include <cmath>

using namespace std;

int main(){
	cout << "vamos a calcular el area de un circulo\n";
	int r,a;
	cout << "primero introduce el radio de tu circulo:";
	cin >> r;
	a = M_PI * pow(r, 2);
	cout << "el area del circulo es:" << a;
	return 0;
	
}