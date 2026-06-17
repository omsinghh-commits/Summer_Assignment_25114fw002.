#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "ENTER A STRING : ";
    getline(cin, s);

    int n = s.length();
    int start = 0, end = n - 1;

    while (start < end) {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }

    cout << "REVERSED STRING : " << s << endl;

    return 0;
}