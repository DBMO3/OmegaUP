#include <iostream>
using namespace std;

int main(){
	int sum = 0, count = 0, n;
	while(sum <= 1000){
		cin >> n;
		sum += n;
		count++;
	}

	cout << count << endl;
	return 0;
}
