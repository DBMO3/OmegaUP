#include <iostream>
using namespace std;

int calculateK(int N){
  int sum = 0;
  int k = 0;
  while(sum < N){
    k++;
    sum += k + 7;
  }

  return k;
}

int main() {
  int N;
  cin >> N;

  int k = calculateK(N);
  cout << k;

  return 0;
}
