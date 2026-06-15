#include <iostream>
using namespace std;

int main(){
    int rows, cols;
    cout << "ENTER ROWS AND COLUMNs : ";
    cin >> rows >> cols;

    int A[rows][cols], B[rows][cols], C[rows][cols];

    cout << "ENTER ELEMENTS OF MATRIX A:\n";
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            cin >> A[i][j];

    cout << "ENTER ELEMENTS OF MATRIX B:\n";
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            cin >> B[i][j];

    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            C[i][j] = A[i][j] - B[i][j];

    cout << "DIFFERENCE MATRIX:\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;}