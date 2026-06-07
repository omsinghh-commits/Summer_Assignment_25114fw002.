#include <iostream>
using namespace std;

int max(int a, int b) {
    if(a > b){
        return a;
    }else{
        return b;
    }
}

int main() {
    int a, b;
    
    cout << "ENTER TWO NUMBERS: ";
    cin >> a >> b;
    cout << "MAXIMUM IS  = " << max(a, b) << endl;

    return 0;
}