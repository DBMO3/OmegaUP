#include <iostream>
using namespace std;

int main() {
    char animal;
    int distancia;
    cin >> animal >> distancia;

    if(animal == 's') {
        if(distancia >= 10) {
            cout << "retrocede y busca otro camino";
        } else {
            cout << "corre, corre por tu vida!";
        }
    } else {
        cout << "estas a salvo!";
    }
    
    return 0;
}
