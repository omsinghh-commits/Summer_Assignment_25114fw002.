#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cout << "ENTER FIRST STRING : ";
    getline(cin, s1);
    cout << "ENTER SECOND STRING : ";
    getline(cin, s2);

    if (s1.length() != s2.length()) {
        cout << "NOT A ROTATION " << endl;
        return 0;
    }

    string combined = s1 + s1;   

    if (combined.find(s2) != string::npos)
        cout << s2 << " IS A ROTATION OF " << s1 << endl;
    else
        cout << s2 << " IS NOT A ROTATION OF " << s1 << endl;

    return 0;
}