#include<iostream>
using namespace std;

int fib(int);

int main(){
    int n;
    cout<<"Enter n=";
    cin>>n;

    cout<<"The "<<n<<"th fibonacci term is :"<<fib(n-1)<<endl;
    return 0;

}
int fib(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 1;

    else
     return (fib(n-1) + fib(n-2));
     
}