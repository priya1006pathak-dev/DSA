#include<iostream>
using namespace std;
int reverse(int n , int rev){
    if(n == 0)
    return rev;
  
     int digit = n%10;
     n = n /10;
     rev = rev * 10 + digit;

     return reverse(n , rev);
}
int main (){
   int n;
   cin >> n;
   int ans = reverse(n,0);
   cout << ans << endl;
}