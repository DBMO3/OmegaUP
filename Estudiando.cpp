#include <iostream>
using namespace std;

int main(){
	long long int a, b, sum, res, mul, div, mod;
	cin >> a >> b >> sum >> res >> mul >> div >> mod;

	if(sum == a+b && res == a-b && mul == a*b && div == a/b && mod == a%b){
		cout << "\"Correcto\" " << endl;
	} else {
		cout << "\"Incorrecto\" " << endl;
		cout << a+b << endl;
		cout << a-b << endl;
		cout << a*b << endl;
		cout << a/b << endl;
		cout << a%b << endl;
	}
	return 0;
}
