#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "ENTER NUMBER OF ELEMENTS : ";
    cin >> n;

    int arr[n];

    cout << "ENTER ELEMENTS : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = arr[0], second = arr[0];

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    if (second == arr[0])
        cout << "No second largest element exists." << endl;
    else
        cout << "Second largest element is: " << second << endl;

    return 0;}