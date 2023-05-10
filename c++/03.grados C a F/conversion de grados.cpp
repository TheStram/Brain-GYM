#include <iostream>

using namespace std;

int main(){
	int C,F;
	cout << "introduce los grados celcius:";
	cin >> C;
	F = C * 9/5 + 32;
	cout << C << " grados celsius equivalen a " << F << " grados fahrenheit.";
	return 0;
}