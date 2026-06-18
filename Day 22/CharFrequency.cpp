#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "ENTER A STRING: ";
    getline(cin, s);

    int freq[256] = {0};

    for (int i = 0; i < s.length(); i++)
        freq[s[i]]++;

    cout << "CHARACTER FREQUENCIES :" << endl;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0)
            cout << (char)i << " -> " << freq[i] << endl;
    }

    return 0;
}