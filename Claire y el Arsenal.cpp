#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	cin >> n;

	vector<int> Weapon(n);
	for(int i = 0; i < n; i++){
		cin >> Weapon[i];
	}

	int damage = 0;
	for(int i = 1; i < n; i++){
		if(Weapon[i] > Weapon[damage]){
			damage = i;
		}
	}

	cout << Weapon[damage] << " " << damage+1 << endl;
    return 0;
}
