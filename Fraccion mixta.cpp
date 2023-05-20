#include <iostream>
using namespace std;

int main() {
  int n, m, a, b;
  cin >> n >> m;

  a = n / m;
  b = n % m;

  if (b != 0) {
    cout << a << " " << b << "/" << m << endl;
  } else {
    cout << a << endl;
  }

  return 0;
}
