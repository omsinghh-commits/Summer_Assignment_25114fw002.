#include <iostream>
using namespace std;

int main(){
long long n;
int count = 0;

cout << " ENTER A NUMBER : " ;
cin >> n;

int temp = n;
while (temp > 0){
    if(temp % 2 == 1){
        count ++;
    }
    temp = temp / 2;
}
cout << "SETS BITS IN " << n << " ARE : " << count <<  endl;
    return 0;
}