#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;

	if(c > a && c > b){
		cout << "DERECHA" << endl;
	} else if(c < a && c < b){
		cout << "IZQUIERDA" << endl;
	} else {
		cout << "INTERVALO" << endl;
	}
	return 0;
}
