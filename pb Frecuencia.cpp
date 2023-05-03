#include <iostream>
#include <vector>

using namespace std;

int main() {
    int P, n;
    cin >> P >> n;
    vector<int> freq(P+1);

    // read in the favorite teacher of each student and calculate frequencies
    for (int i = 0; i < n; i++) {
        int f;
        cin >> f;
        freq[f]++;
    }

    // output the table of frequencies
    for (int i = 1; i <= P; i++) {
        cout << i << "-" << freq[i] << endl;
    }

    return 0;
}
