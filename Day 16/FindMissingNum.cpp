#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "ENTER NUMBER OF ELEMENTS IN ARRAY : ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " elements (range 1 to " << n + 1 << ", one number missing): ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int expectedSum = (n + 1) * (n + 2) / 2;

    int actualSum = 0;
    for (int i = 0; i < n; i++)
        actualSum += arr[i];

    int missing = expectedSum - actualSum;
    cout << "Missing number is: " << missing << endl;

    return 0;
}