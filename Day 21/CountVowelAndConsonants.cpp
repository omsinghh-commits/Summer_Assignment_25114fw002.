#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "ENTER A STRING: ";
    getline(cin, s);

    int vowels = 0, consonants = 0;

    for (int i = 0; i < s.length(); i++) {
        char c = tolower(s[i]);

        if (c >= 'a' && c <= 'z') {
            if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    cout << "VOWELS =  " << vowels << endl;
    cout << "CONSONANTS =  " << consonants << endl;

    return 0;
}