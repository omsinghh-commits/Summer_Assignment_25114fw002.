#include<iostream>
using namespace std;

int main ()
{
    bool isprime;
    cout<<"Prime number from 1 to 100 is=";

    for(int num=2; num<=100;num++){
        isprime = true;
        for(int i=2;i<=num/2 ;i++)
      {if (num%i==0){
   isprime = false;
    break;
      }
    }


    if (isprime)
    { cout<< num <<" ";}
    }
return 0;
}
