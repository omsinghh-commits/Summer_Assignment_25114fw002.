#include <iostream>
using namespace std;

int sod(int n){
    if(n == 0)
    return 0;
    else
    return ( n%10 + sod(n/10));
}

int main(){
    int n;
    cout << "ENTER THE NUMBER OF FINDING SUM OF DIGIT : " ;
    cin >> n;

    cout << "THE SUM OF DIGIT IS = " << sod(n) ;

    return 0;
}