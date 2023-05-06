#include <iostream>
using namespace std;

int main() {
  int linette;
  cin >> linette;

  int friends = 0;
  for(int i = 0; i < 3; i++){
    cin >> friends;
    if(linette > friends){
      cout << "Soy Mejor" << endl;
    } else if (linette < friends){
      cout << "Shh" << endl;
    } else {
      cout << "Te gano en la siguiente" << endl;
    }
  }

  return 0;
}
