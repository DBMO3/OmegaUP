#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int num_vowels = 0, num_consonants = 0;
    char word[100];

    cin >> word;
    for (int i = 0; i < strlen(word); i++) {
        if (word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U') {
            num_vowels++;
        }
        else {
            num_consonants++;
        }
    }

    cout << num_consonants << " " << num_vowels << endl;
    return 0;
}
