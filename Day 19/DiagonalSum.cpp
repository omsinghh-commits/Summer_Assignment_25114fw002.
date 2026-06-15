#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "ENTER SIZE OF SQUARE MATRIX : ";
    cin >> n;

    int A[n][n];

    cout << "ENTER ELEMENTS OF MATRIX :\n";
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> A[i][j];

    int sum = 0;

    for(int i = 0; i < n; i++){
        sum += A[i][i];        
        if(i != n-1-i)         
            sum += A[i][n-1-i]; 
    }

    cout << "TOTAL DIAGONAL SUM : " << sum << endl;

    return 0;
}