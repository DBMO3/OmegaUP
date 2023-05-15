#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    int N = 0;
    // Suma de los numeros impares desde 1 hasta A
    for (int i = 1; i <= A; i += 2) {
        N += i;
    }
    // Resta de las potencias de 2 desde 1 hasta B
    int power = 1;
    while (power <= B) {
        N -= power;
        power *= 2;
    }
    // Division entre C de ser necesario
    while (N % C == 0) {
        N /= C;
    }
    cout << N << endl;
    return 0;
}
