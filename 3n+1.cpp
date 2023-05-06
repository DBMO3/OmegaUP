#include <iostream>
using namespace std;

int cycleLength(int n) {
    int length = 1;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = n * 3 + 1;
        }
        length++;
    }
    return length;
}

int maxCycleLength(int a, int b) {
    int max_length = 0;
    for (int i = a; i <= b; i++) {
        int length = cycleLength(i);
        if (length > max_length) {
            max_length = length;
        }
    }
    return max_length;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << maxCycleLength(a, b) << endl;
    return 0;
}
