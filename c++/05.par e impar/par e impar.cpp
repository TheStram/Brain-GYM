#include <iostream>

using namespace std;

int main(){
	int n;
	cout << "introduce el numero:";
	cin >> n;
	if (n % 2 == 0){
		cout << n << " es numero par";
	}
	else {
		cout << n << " es numero impar";
	}
	return 0;
}