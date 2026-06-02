#include <iostream>
using namespace std;

int main(){
int decimal = 0, base = 1;
long long n;

cout << "ENTER BINARY NUMBER : ";
cin >> n;

int temp = n;
while (temp > 0){
    int lastdigit = temp % 10;
    decimal = decimal + lastdigit * base;
    base = base * 2;
    temp = temp / 10; 
}

cout << "DECIMAL OF " << n << " is : " << decimal << endl;

    return 0;
}