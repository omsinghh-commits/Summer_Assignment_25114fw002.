#include <iostream>
using namespace std;

int main() {
    int n, key;

    cout << "ENTER NUMBER OF ELEMENTS : ";
    cin >> n;

    int arr[n];

    cout << "ENTER ELEMENTS : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "ENTER ELEMENTS FOR FINDING FREQUENCY : ";
    cin >> key;

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
        }
    }

    if (count > 0)
        cout << "Element " << key << " appears " << count << " time(s) in the array." << endl;
    else
        cout << "Element " << key << " not found in the array." << endl;

    return 0;
}