#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "ENTER THE NUMBER OF ROWS : " ;
    cin >> n;
    char A;

    for (int i=0; i<n; i++){
        char A = 'A' + i;
        for (int j=0; j<=i; j++){
            cout << A;
        }
        cout << endl;
    }

    return 0;
}