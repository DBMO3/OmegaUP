#include <iostream>
using namespace std;

int main() {
	int n, i = 1;
	cin >> n;

	long long int fact = 1;
	while(i <= n){
		fact = fact * i;
		i++;
	}

	cout << fact << endl;
	return 0;
}
