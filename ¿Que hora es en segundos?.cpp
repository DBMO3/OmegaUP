#include <iostream>
using namespace std;

int main(){
	int h,m,s;
	cin >> h >> m >> s;

	int hours,minutes;
	hours = (h * 60 * 60);
	minutes = (m * 60);

	int clock;
	clock = hours + minutes + s;
	cout << clock << endl;

	return 0;
}
