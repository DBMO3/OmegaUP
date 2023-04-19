#include <iostream>
using namespace std;

int main(){
	int piece_pizza, pizza_box,i = 0,friends;
	cin >> pizza_box;
	piece_pizza = pizza_box * 8;

	while(i < 5){
		cin >> friends;
		piece_pizza -= friends;
		i++;
	}

	if(piece_pizza > 1){
		cout << "FF" << endl;
	} else {
		cout << "FH" << endl;
	}

	return 0;
}
