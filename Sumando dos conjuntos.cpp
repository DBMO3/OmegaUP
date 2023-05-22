#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

	int arr[n];
	int arr2[n];
	int result[n];

	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}


	for(int i = 0; i < n; i++){
		cin >> arr2[i];
	}


	for(int i = 0; i < n; i++){
		result[i] = arr[i] + arr2[i];
	}


	for(int i = 0; i < n; i++){
		cout << result[i] << " " << endl;
	}

	return 0;
}
