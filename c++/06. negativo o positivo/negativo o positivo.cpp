#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "introdusca el numero entero:";
	cin >> n;
	
	if (n > 0){
		cout << n <<" es un numero entero positivo";
	}
	else if (n == 0){
		cout << n << " es cero";
	}
	else if (n < 0){
		cout << n << " es un numero negativo";
	}
	return 0;
}