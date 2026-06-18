#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, result = "";
    cout << "ENTER A STRING : ";
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ')
            result += s[i];
    }

    cout << "AFTER REMOVING SPACES : " << result << endl;

    return 0;
}