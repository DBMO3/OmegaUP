#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    int arr[5] = {a, b, c, d, e};
    sort(arr, arr+5);
    
    int p = arr[0];
    int q = arr[4];
    cout << p << " " << q << endl;
    return 0;
}
