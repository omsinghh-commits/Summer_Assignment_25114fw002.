#include <iostream>
using namespace std;

bool isPerfect(int num) {
    int sum = 0;

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0)
            sum += i;
    }

    return sum == num;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPerfect(n))
        cout << "Perfect Number";
    else
        cout << "Not a Perfect Number";

    return 0;
}
