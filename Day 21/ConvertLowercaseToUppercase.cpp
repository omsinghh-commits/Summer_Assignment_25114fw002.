#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "ENTER A STRING : ";
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;
        }
    }

    cout << "UPPERCASE CASE STRING : " << s << endl;

    return 0;
}