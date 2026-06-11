#include <iostream>
using namespace std;

int main() {
    int n, k;
    cout << "ENTER SIZE OF ARRAY : ";
    cin >> n;

    int arr[n];
    cout << "ENTER ELEMENTS : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "ENTER NUMBER OF LEFT ROTATION (k): ";
    cin >> k;

    k = k % n;
    int start = 0, end = k - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    start = k, end = n - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    start = 0, end = n - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    cout << "ARRAY AFTER LEFT ROTATION: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}