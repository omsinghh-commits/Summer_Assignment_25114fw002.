#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "ENTER STRING: ";
    getline(cin, s);

    string compressed = "";
    int n = s.length();

    for (int i = 0; i < n; i++) {
        int count = 1;
        while (i + 1 < n && s[i] == s[i + 1]) {
            count++;
            i++;
        }
        compressed += s[i];
        compressed += to_string(count);
    }

    
    if (compressed.length() < s.length())
        cout << "COMPRESSED STRING : " << compressed << endl;
    else
        cout << "STRING IS ALREADY COMPACT : " << s << endl;

    return 0;
}