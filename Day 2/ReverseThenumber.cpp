#include<iostream>
using namespace std;

int main(){

    int n,d,reverse=0;
    cout<<"Enter the number=";
    cin>>n;

    while(n>0){
        d=n%10;
        reverse=reverse*10 + d;
        n=n/10;
    }
    cout<<"Reversed number = "<<reverse<<" ";
    cout<<endl;

    return 0;
}
