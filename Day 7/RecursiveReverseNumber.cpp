#include <iostream>
using namespace std;

int reverse(int n, int rev = 0){
    if (n ==0){
        return rev;
    }
    return reverse(n / 10, rev * 10 + n % 10);
}

int main(){
    int n;
    cout << "ENTER THE NUMBER FOR FINDING REVERSE :";
    cin >> n;

    cout << "THE REVERSED IS = " << reverse(n) << endl;

    return 0;
}