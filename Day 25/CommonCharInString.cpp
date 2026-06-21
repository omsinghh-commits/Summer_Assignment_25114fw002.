#include <iostream>
using namespace std;

int main() {
    string s1, s2;
    cout << "ENTER FIRST STRING: ";
    cin >> s1;
    cout << "ENTER SECOND STRING: ";
    cin >> s2;

    int freq1[256] = {0};
    int freq2[256] = {0};

    for (int i = 0; i < s1.length(); i++)
        freq1[(int)s1[i]]++;

    for (int i = 0; i < s2.length(); i++)
        freq2[(int)s2[i]]++;

    cout << "COMMON CHARACTERS: ";
    for (int i = 0; i < 256; i++) {
        if (freq1[i] > 0 && freq2[i] > 0) {
            int minCount = min(freq1[i], freq2[i]);
            for (int j = 0; j < minCount; j++)
                cout << (char)i << " ";
        }
    }
    cout << endl;

    return 0;
}