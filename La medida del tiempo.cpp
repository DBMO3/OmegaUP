#include <iostream>
using namespace std;

int main() {
  int s, a, d, h, m, q;
  cin >> s;

  a = s / 31536000;
  d = (s % 31536000) / 86400;
  h = (s % 86400) / 3600;
  m = (s % 3600) / 60;
  q = s % 60;

  cout << a << " " << d << " " << h << " " << m << " " << q << " " << endl;
  return 0;
}
