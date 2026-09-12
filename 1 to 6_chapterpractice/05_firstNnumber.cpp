// Print table from n × 1 to n × 10.
// Sum of First N Numbers
// Input: N

#include<iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    cin >> n;
    for(int i =1; i<=n; i++){
        sum += i;
    }
    cout << "sum" << sum;
}