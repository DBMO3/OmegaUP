#include <iostream>
#include <climits>
using namespace std;

int main() {
	int count = 0;
	int prevN = INT_MIN;
	int currentN;
	
	while(true){
		cin >> currentN;
		
		if(currentN < prevN){
			break;
		}
		
		count++;
		prevN = currentN;
	}
	
	cout << count << endl;
	return 0;
}
