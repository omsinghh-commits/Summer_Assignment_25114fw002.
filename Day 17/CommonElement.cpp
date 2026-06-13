#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n1, n2, n3;

    cout << "ENTER SIZE OF FIRST ARRAYS : ";
    cin >> n1;
    int arr1[n1];
    cout << "ENTER ELEMENTS OF FIRST ARRAYS:\n";
    for (int i = 0; i < n1; i++)
        cin >> arr1[i];

    cout << "ENTER SIZE OF SECOND ARRAYS : ";
    cin >> n2;
    int arr2[n2];
    cout << "ENTER ELEMENTS OF SECOND ARRAYS:\n";
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];

    cout << "ENTER SIZE OF THIRD ARRAYS : ";
    cin >> n3;
    int arr3[n3];
    cout << "ENTER ELEMNTS OF THIRD ARRAYS :\n";
    for (int i = 0; i < n3; i++)
        cin >> arr3[i];

    sort(arr1, arr1 + n1);
    sort(arr2, arr2 + n2);
    sort(arr3, arr3 + n3);

    cout << "\nCOMMON ELEMENTS : ";

    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2 && k < n3) {

        if (i > 0 && arr1[i] == arr1[i - 1]) { i++; continue; }

        if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
            cout << arr1[i] << " ";  
            i++; j++; k++;
        }
        else if (arr1[i] <= arr2[j] && arr1[i] <= arr3[k])
            i++;
        else if (arr2[j] <= arr1[i] && arr2[j] <= arr3[k])
            j++;
        else
            k++;
    }

    cout << endl;
    return 0;}