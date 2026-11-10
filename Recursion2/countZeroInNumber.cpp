#include<iostream>
using namespace std;
  int countNumber(int n){
    if(n == 0)
        return 0;
    int digit = n % 10;
    int count = 0;

    if(digit == 0)
    count = 1;
   
    return count + countNumber(n / 10);
    
  }



int main(){
int n;
cin >> n;
int ans = countNumber(n);
cout << ans << endl;
return 0;
}