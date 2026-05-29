#include<iostream>
using namespace std;

int main(){

    int n,d,reverse=0 ,temp;
    cout<<"Enter the number=";
    cin>>n;
temp=n;
    while(n>0){
        reverse=reverse*10 + n%10;
        n=n/10;
    }
    if(reverse==temp){
        cout<<"Number is Pallidrome";
    }
    else{
        cout<<"Not Pallidrome"<<" ";
    }
    cout<<endl;

    return 0;
}