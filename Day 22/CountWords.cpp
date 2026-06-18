#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "ENTER A SENTENCE : ";
    getline(cin, s);

    int count = 0;
    bool inWord = false;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            if (!inWord) {
                count++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }

    cout << "WORD COUNT : " << count << endl;

    return 0;
}