#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string sentence;
    cout << "ENTER A SENTENCE : ";
    getline(cin, sentence);

    stringstream ss(sentence);
    string word, longestWord = "";

    while (ss >> word) {
        if (word.length() > longestWord.length())
            longestWord = word;
    }

    cout << "LONGEST WORD: " << longestWord << endl;
    cout << "LENGTH: " << longestWord.length() << endl;

    return 0;
}