#include <iostream>
using namespace std;

int main(){
int num;

cout << " ENTER THE NUMBER FOR FINDING FACTORS : ";
cin >> num;

cout << " THE FACTORS ARE:" << endl;

for ( int i=1 ; i<=num ; i++){
    if(num % i == 0){
        cout << i << "  " ;
    }
}

    return 0;
}