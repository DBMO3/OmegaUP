#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int steps = 0;
    int max_n = n;
    while (n != 1) {
        if (n % 2 == 0) {
            // Si N es par, divídelo entre 2.
            n /= 2;
        } else {
            // Si N es impar, multiplícalo por 3 y súmale 1.
            n = n * 3 + 1;
        }
        steps++;
        if (n > max_n) {
            // Actualiza el valor más grande que toma N durante el cálculo
            max_n = n;
        }
    }
    cout << steps << " " << max_n << endl;
    return 0;
}
