#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "ENTER A STRING : ";
    cin >> s;

    int freq[256] = {0};

    for (int i = 0; i < s.length(); i++)
        freq[(int)s[i]]++;

    for (int i = 0; i < s.length(); i++) {
        if (freq[(int)s[i]] == 1) {
            cout << "FIRST NON-REPEATING CHARACTER : " << s[i] << endl;
            return 0;
        }
    }

    cout << "NO NON-REPEATING CHARACTER FOUND." << endl;
    return 0;
}