#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "ENTER SIZE OF SQUARE MATRIX: ";
    cin >> n;

    int A[10][10];

    cout << "ENTER MATRIX:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];

    bool symmetric = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] != A[j][i]) {
                symmetric = false;
                break;
            }
        }
        if (!symmetric) break;
    }

    if (symmetric)
        cout << "MATRIX IS SYMMETRIC" << endl;
    else
        cout << "MATRIX IS NOT SYMMETRIC" << endl;

    return 0;}