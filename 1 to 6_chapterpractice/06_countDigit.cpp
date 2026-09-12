
// Output: Sum from 1 to N.
// Count Digits
// Input: 45892
// Output: 5

#include<iostream>
using namespace std;
int main(){
    int n ;
    cin >> n;
    int count = 0;
    while(n > 0){
        n = n/10;
        count++;

    }
    cout << "Total digit =" << count;
    return 0;
}