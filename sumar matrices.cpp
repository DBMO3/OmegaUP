#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr1[n][n], arr2[n][n], arrSum[n][n];

    // Leer los elementos de la primera matriz
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr1[i][j];
        }
    }

    // Leer los elementos de la segunda matriz
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr2[i][j];
        }
    }

    // Sumar los elementos correspondientes de ambas matrices
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            arrSum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    // Imprimir la matriz resultante
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arrSum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
