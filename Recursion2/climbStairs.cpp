#include<iostream>
using namespace std;
int countWays(int nStairs){
    if(nStairs < 0){
        return 0;
    }
    if(nStairs == 0){
        return 1;
    }
        int starisNumber = countWays(nStairs-1) + countWays(nStairs-2);
        return starisNumber;
    

}
int main(){
  int n;
  cin >> n;
  int ans = countWays(n);
  cout << ans << endl;
}