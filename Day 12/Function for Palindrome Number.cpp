#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int original = num, reverse = 0;

    while (num > 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }

    return original == reverse;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPalindrome(n))
        cout << "Palindrome Number";
    else
        cout << "Not a Palindrome Number";

    return 0;
}
