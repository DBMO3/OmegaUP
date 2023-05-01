#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    if (n%2 == 0) {
        n--;
    }

    int numAsterisk = 1;
    int space = n / 2;

    for (int i = 0; i < n; i += 2)
    {
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < numAsterisk; j++)
        {
            cout << "@";
        }

        cout << endl;
        numAsterisk += 2;
        space--;
    }

    return 0;
}
