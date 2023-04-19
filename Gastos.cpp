#include <iostream>
using namespace std;

int main(){
	int unit,suma,count = 0;
	while(unit != 0){

		cin >> unit;
		suma += unit;
		count++;

		if(unit == 0){
			count--;
		}

	}

	cout << suma << " " << count << endl;
	return 0;
}
