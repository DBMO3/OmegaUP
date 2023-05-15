#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n;

    while (n--) {
      cin >> k;
      int sum = 0, tomas;
      for(int i = 0; i < k; i++){
        cin >> tomas;
        sum += tomas;
      }
      sum -= k-1;
      cout << sum << endl;
    }
    return 0;
}
