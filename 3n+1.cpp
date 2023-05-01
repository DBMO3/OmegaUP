#include <iostream>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b;

	int max = 0;
	for(int i = a ; i <= b; i++){
		int n = i;
		int cycle_lenght = 1;
		while(n != 1){
			if(n%2 == 0){
				n /= 2;
			} else {
				n = (3*n) + 1;
			}
			cycle_lenght++;
		}

		if(cycle_lenght > max){
			max = cycle_lenght;
		}
	}

	cout << max << endl;
}
