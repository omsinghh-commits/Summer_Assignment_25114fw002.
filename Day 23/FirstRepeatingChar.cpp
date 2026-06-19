#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "ENTER A STRING : ";
    cin >> s;

    int freq[256] = {0};

    for (int i = 0; i < s.length(); i++) {
        freq[(int)s[i]]++;
        if (freq[(int)s[i]] == 2) {
            cout << "FIRST REPEATING CHARACTER : " << s[i] << endl;
            return 0;
        }
    }

    cout << "NO REPEATING CHARACTER FOUND ." << endl;
    return 0;
}