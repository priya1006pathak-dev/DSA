
// Positive, Negative or Zero

// Return "Positive", "Negative" or "Zero".

#include<iostream>
using namespace std;
int main(){
int n ;
cout << " Enter the value of n";
cin >> n;
if(n > 0){
    cout << "Positive";
}else if(n < 0){
    cout << "Negative";
}else{
    cout << "Zero";
}
}