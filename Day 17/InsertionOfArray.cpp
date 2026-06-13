#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n1, n2;

    cout << "ENTER SIZE OF FIRST ARRAYS : ";
    cin >> n1;
    int arr1[n1];
    cout << "ENTER ELEMENTS OF FIRST ARRAYS :\n";
    for (int i = 0; i < n1; i++)
        cin >> arr1[i];

    cout << "ENTER SIZE OF SECOND ARRAYS : ";
    cin >> n2;
    int arr2[n2];
    cout << "ENTER ELEMNTS OF SECOND ARRAYS :\n";
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];

    sort(arr1, arr1 + n1);
    sort(arr2, arr2 + n2);

    cout << "\nINTERACTION : ";

    int i = 0, j = 0;
    while (i < n1 && j < n2) {
        if (i > 0 && arr1[i] == arr1[i - 1]) { i++; continue; }

        if (arr1[i] < arr2[j])
            i++;
        else if (arr1[i] > arr2[j])
            j++;
        else {
            cout << arr1[i] << " "; 
            i++;
            j++;
        }
    }

    cout << endl;
    return 0;
}