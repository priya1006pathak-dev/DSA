#include<iostream>
using namespace std;

bool isPalindrome(string str,int i,int j){
    // base condition 
    if(i > j)
    return true;
 
    if(str[i] != str[j]){
        return false ;

    }else{
        return isPalindrome(str,i+1, j-1);
    }
}
int main(){
  string name = "abbc";
 bool ans =  isPalindrome(name,0,name.length()-1);

  if(ans){
    cout << "Palindrome" << endl;

  }else{
    cout << "Not palindrome" << endl;
  }
}