#include<iostream>
using namespace std;
int GCD(int,int);

int main(){
    int a,b;
    cout<<"Enter a=";
    cin>>a;
    cout<<"Enter b=";
    cin>>b;

    cout<<"GCD of numbers is="<<GCD(a,b);

    return 0;


}
int GCD(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return(GCD(b,a%b));
    }
}
