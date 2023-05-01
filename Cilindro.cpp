#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  double r,h;
  double pi = 3.1416;
  cin >> r >> h;

  double area = 2 * pi * r * (r + h);
  double volume = pi * pow(r, 2) * h;

  cout << fixed << setprecision(2) << "AREA=" << area << endl;
  cout << fixed << setprecision(2) << "VOLUMEN=" << volume << endl;

  return 0;

}
