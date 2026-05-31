#include<iostream>
#include<cmath>
using namespace std;

bool isArmstrong(int num){
    int temp=num, digits=0, sum=0,d;

    while (temp>0){
        temp=temp/10;
        digits++;}

        temp=num;
        while(temp>0){
        d=temp%10;
        sum=sum+ round( pow(d,digits));
        temp=temp/10;}

        return (sum==num);

        }
        int main(){
            int n;
            cout<<"Enter the upper limit (n) = ";
            cin>>n;

            cout<<"Armstrong Number between 1 to "<<n<<" are"<<endl;

            for(int i=1;i<=n;i++){
                if(isArmstrong(i)){
                    cout<<i <<" ";
                }
            }
            cout<<endl;

            return 0;


        }