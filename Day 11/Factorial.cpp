#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    int fact = 1;
    
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;

    cout << "ENTER A NUMBER : ";
    cin >> n;
    cout << "FACTORIAL OF " << n << "  = " << factorial(n) << endl;

    return 0;
}