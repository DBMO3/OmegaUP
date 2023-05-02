#include <iostream>
#include <cmath>

using namespace std;

bool IsPrime(int n){
    if(n < 2) return false;
    for(int i=2; i<=sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return true;
}

int kthPrime(int k){
    int count = 0, num = 2;
    while (count < k){
        if (IsPrime(num)) {
            count++;
        }
        if (count == k) {
            return num;
        }
        num++;
    }
}

int main() {
    int k;
    cin >> k;
    int kth = kthPrime(k);
    cout << kth << endl;
    return 0;
}
