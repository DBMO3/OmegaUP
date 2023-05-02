#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, G, temp;
    vector<int> X, Y;
    cin >> N >> G;
  
    for(int i = 0; i < N; i++) {
        cin >> temp;
        X.push_back(temp);
    }

    // Rotate the vector G times
    for(int i = 0; i < G; i++) {
        Y.insert(Y.begin(), X[N-1]);   // Insert the last element of X at the beginning of Y
        for(int j = 0; j < N-1; j++) {
            Y.push_back(X[j]);   // Add the first N-1 elements of X to the end of Y
        }
        X = Y;   // Set X equal to Y
        Y.clear();   // Clear Y for the next iteration
    }

    // Print the rotated vector Y
    for(int i = 0; i < N; i++) {
        cout << X[i] << " ";
    }
    cout << endl;

    return 0;
}
