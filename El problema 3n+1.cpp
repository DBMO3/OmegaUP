#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // El usuario ingresa el valor N

    int steps = 0;
    int max_n = n;
    while (n != 1) {
        if (n % 2 == 0) {
            // Si N es par, se divide entre 2.
            n /= 2;
        } else {
            // Si N es impar, se multiplica por 3 y se suma 1.
            n = n * 3 + 1;
        }
        steps++; // Cuenta los pasos
        if (n > max_n) {
            // Actualiza el valor más grande que toma N durante el cálculo
            max_n = n;
        }
    }
    cout << steps << " " << max_n << endl; // Muestra los pasos y el valor maximo
    return 0;
}
