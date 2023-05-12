#include <iostream>
using namespace std;

int main(){
	double gilbertoFriends, resultGilberto;
	int n;
	cin >> gilbertoFriends >> n;

	double sum = 0;
	for(int i = 0; i < n; i++){
		double result;
		cin >> result;
		sum += result;
	}

	resultGilberto = sum / n;

	if(resultGilberto > gilbertoFriends){
		cout << "Presume" << endl;
	} else {
		cout << "Ladra" << endl;
	}

	return 0;
}
