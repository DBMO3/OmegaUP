#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    // Lee los nombres de los instructores
    getline(cin, name);

    // Cuenta la cantidad de nombres de instructores
    int count = 1; // Empieza en 1 ya que siempre habrá al menos un nombre
    size_t pos = name.find(" ");
    while(pos != string::npos) {
        count++;
        pos = name.find(" ", pos+1);
    }

    // Imprime la cantidad de instructores
    cout << count << endl;
    return 0;
}
