#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "ENTER ROWS AND COLUMNS: ";
    cin >> r >> c;

    int A[10][10];

    cout << "ENTER MATRIX:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> A[i][j];

    cout << "\nCOLUMN - WISE SUM:\n";
    for (int j = 0; j < c; j++) {
        int sum = 0;
        for (int i = 0; i < r; i++)
            sum += A[i][j];
        cout << "COL " << j + 1 << " SUM = " << sum << endl;
    }

    return 0;}