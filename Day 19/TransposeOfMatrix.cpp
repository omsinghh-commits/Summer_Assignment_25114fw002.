#include <iostream>
using namespace std;

int main(){
    int rows, cols;
    cout << "ENTER ROWS AN COLUMNS : ";
    cin >> rows >> cols;

    int A[rows][cols], T[cols][rows];

    cout << "ENTER ELEMENTS OF MATRIX :\n";
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            cin >> A[i][j];

    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            T[j][i] = A[i][j];

    cout << "ORIGINAL MATRIX :\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }

    cout << "TRANSPOSED MATRIX :\n";
    for(int i = 0; i < cols; i++){
        for(int j = 0; j < rows; j++)
            cout << T[i][j] << " ";
        cout << endl;
    }

    return 0;
}