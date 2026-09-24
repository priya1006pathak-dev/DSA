#include<iostream>
using namespace std;
int main(){
    int balance , withdrawalAmount;
    cout << "Enter the balance:" << endl;
    cin >> balance;


    cout << "Enter withdrawalAmount" << endl;
    cin >> withdrawalAmount;

    if(balance >= withdrawalAmount && withdrawalAmount % 100 == 0 && balance - withdrawalAmount >= 500){
        cout << "withdrawal successfull" << endl;

    }else{
        cout << "Insufficint balance" << endl;
    }
}