#include <iostream>
using namespace std;

int fib(int i){
    if(i==0)
    return 0;
    if(i==1)
    return 1;
    return (fib(i-1)+fib(i-2));
}

int main(){
    int n,i;
    cout <<"ENTER THE NUMBERS OF TERMS : ";
    cin >> n;
    for(i=0; i<n-1; i++){
        cout << fib(i) << " ";
    }
return 0;}