#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cout << "ENTER FIRST STRING: ";
    cin >> s1;
    cout << "ENTER SECOND STRING: ";
    cin >> s2;

    if (s1.length() != s2.length()) {
        cout << "NOT ANAGRAM" << endl;
        return 0;
    }

    int freq[256] = {0};

    for (int i = 0; i < s1.length(); i++)
        freq[(int)s1[i]]++;

    for (int i = 0; i < s2.length(); i++)
        freq[(int)s2[i]]--;

    bool isAnagram = true;
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            isAnagram = false;
            break;
        }
    }

    cout << (isAnagram ? "ANAGRAM" : "NOT ANAGRAM") << endl;
    return 0;
}