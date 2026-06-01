#include <iostream>
using namespace std;

int main(){
  int num, temp, digit, fact, sum = 0;

  cout << " ENTER A NUMBER : ";
  cin >> num;

  temp = num;

  while (temp > 0){
    digit = temp % 10;
    fact = 1;
    for(int i=1; i<=digit; i++){
    fact *= i;
  }
  sum += fact;
  temp /= 10;
}
if(sum == num){
    cout << num << " IS A STRONG NUMBER." << endl;
}else{
    cout << num << " IS NOT A STRONG NUMBER." << endl;
}

    return 0;
}