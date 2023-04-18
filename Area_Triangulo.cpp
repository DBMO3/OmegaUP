#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double b,h;
  cin >> b >> h;

  double area = (b*h) / 2;
  cout << fixed << setprecision(3) << area << endl;
  return 0;
}
