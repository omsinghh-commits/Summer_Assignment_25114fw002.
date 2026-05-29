#include<iostream>
using namespace std;

int main(){

    int n,d,product=1;
    cout<<"Enter the number=";
    cin>>n;

    while(n>0){
        d=n%10;
        product*=d;
        n/=10;
    }

    cout<<"The product of digits is="<<product<<" ";
    cout<<endl;

    return 0;
}

    