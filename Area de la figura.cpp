#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int area = 1;
    for (int i = 2; i <= n; i++) {
        area += 4 * (i - 1); 
    }

    cout << area << endl;
    return 0;
}
