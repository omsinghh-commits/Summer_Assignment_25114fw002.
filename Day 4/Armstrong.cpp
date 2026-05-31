#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int i,n,d,digits=0,sum=0,temp,originalNum;
    cout<<"Enter n =";
    cin>>n;

    temp=n;
    originalNum=n;

    while(temp>0){
        temp=temp/10;
        digits++;
    }

    temp=originalNum;
    while(temp>0){
        d=temp%10;
        sum=sum + round(pow(d,digits));
        temp=temp/10;
    }
    if(sum==originalNum){
        cout<<n<< " is Armstrong number"<<" ";
    }
    else{
        cout<<n<< " is Not Armstrong number"<<" ";
    }
    cout<<endl;
    return 0;
}