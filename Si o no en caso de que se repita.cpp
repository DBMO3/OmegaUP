#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;

	if(a == b || a == c){
		cout << "Si" << endl;
	} else if(b == a || b == c){
		cout << "Si" << endl;
	} else if(c == a || c == b){
		cout << "Si" << endl;
	} else {
		cout << "No" << endl;
	}
	
	return 0;
}
