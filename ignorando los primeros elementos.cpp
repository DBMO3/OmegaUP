#include <iostream>
using namespace std;

int main(){
	int n, k;
	cin >> n;

	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	cin >> k;

	int arr2[n - k];
	for(int i = k; i < n; i++){
		arr2[i-k] = arr[i];
	}

	for(int i = 0; i < n-k; i++){
		cout << arr2[i] << " ";
	}

	return 0;
}
