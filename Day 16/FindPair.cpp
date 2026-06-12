#include <iostream>
using namespace std;

int main() {
    int n, target;
    cout << "ENTER NUMBER OF ELEMENTS : ";
    cin >> n;

    int arr[100];
    cout << "ENTER ELEMENTS : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "ENTER TARGET SUM : ";
    cin >> target;

    bool found = false;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "PAIR FOUND : (" << arr[i] << ", " << arr[j] << ")" << endl;
                found = true;
            }
        }
    }

    if (!found)
        cout << "NO PAIR FOUND WITH SUM : " << target << endl;

    return 0;
}