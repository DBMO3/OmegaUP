#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    
    int arr[n], suma = 0;
    for(int i = 0; i < n; i++){
    	cin >> arr[i];
    	suma += arr[i];
    }
    
    int promedio = suma / n;
    int count = 0;
    for(int i = 0; i < n; i++){
    	if(arr[i] > promedio){
    		count++;
    	}
    }
    
    cout << count << endl;
    return 0;
}
