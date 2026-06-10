#include <iostream>
using namespace std;

int main() {
    int n, key;

    cout << "ENTER NUMBERS OF ELEMENT : ";
    cin >> n;

    int arr[n];

    cout << "ENTER ELEMENTS : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "ENTER ELEMENTS TO BE SEARCH : ";
    cin >> key;

    int found = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = i;
            break;
        }
    }

    if (found != -1)
        cout << "Element " << key << " found at index " << found << " (position " << found + 1 << ")" << endl;
    else
        cout << "Element " << key << " not found in the array." << endl;

    return 0;
}