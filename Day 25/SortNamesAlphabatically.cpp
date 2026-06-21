#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "ENTER NUMBER OF NAMES: ";
    cin >> n;

    string names[n];
    cout << "ENTER NAMES: ";
    for (int i = 0; i < n; i++)
        cin >> names[i];

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (names[j] > names[j + 1]) {
                string temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }

    cout << "NAMES IN ALPHABETICAL ORDER: ";
    for (int i = 0; i < n; i++)
        cout << names[i] << " ";
    cout << endl;

    return 0;
}