#include <iostream>

using namespace std;

int main(){
	int N, F = 1;
	cout << "introduce el nuemro a trabajar:";
	cin >> N;
	
	for (int i = 1; i <= N; ++i){
		F *= i;
	}
	cout << "el factorial de " << N << " es " << 	F << endl;
	return 0;
}	