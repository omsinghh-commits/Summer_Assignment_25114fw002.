#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "ENTER ROWS AND COLUMNS : ";
    cin >> r >> c;

    int A[10][10];

    cout << "ENTER MATRIX :\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> A[i][j];

    cout << "\nROW - WISE SUM:\n";
    for (int i = 0; i < r; i++) {
        int sum = 0;
        for (int j = 0; j < c; j++)
            sum += A[i][j];
        cout << "ROW " << i + 1 << " SUM = " << sum << endl;
    }

    return 0;}