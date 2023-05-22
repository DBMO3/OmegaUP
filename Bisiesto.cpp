#include <iostream>
using namespace std;

int main() {
  int n,year;
  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> year;
    if((year%4 == 0 && year%100 != 0) || (year%100 == 0 && year%400 == 0)){
      cout << "S" << endl;
    } else {
      cout << "N" << endl;
    }
  }

  return 0;
}
