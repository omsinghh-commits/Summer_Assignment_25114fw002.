#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "ENTER NUMBER OF ELEMENTS: ";
    cin >> n;

    int arr[100];
    cout << "ENTER ELEMENTS : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int result[100];
    int size = 0; 

    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;

        for (int j = 0; j < size; j++) {
            if (arr[i] == result[j]) {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate) {
            result[size] = arr[i];
            size++;
        }
    }

    cout << "ARRAYS AFTER REMOVING DUPLICATES  : ";
    for (int i = 0; i < size; i++)
        cout << result[i] << " ";
    cout << endl;

    return 0;}