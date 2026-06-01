#include <iostream>
using namespace std;

int main(){
long long n, largest = 0;

cout << " ENTER A NUMBER : ";
cin >> n;

while (n % 2 == 0){
    largest = 2;
    n /= 2;
}

for (long long i=3; i*i <= n; i+= 2){
    while (n % i == 0){
        largest  = i;
        n /= i;
    }
}

if(n > 1)
largest = n;

if(largest == 0){
    cout << " NO PRIME FACTORS EXIST :" << endl;
}else{
    cout << " LARGEST PRIME FACTOR IS : " << largest << endl;
}

    return 0;