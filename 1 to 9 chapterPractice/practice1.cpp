#include<iostream>
using namespace std;
int main(){
    int Average;
    cout << "Enter the value" << " ";
    cin >> Average;
    if(Average >= 90){
        cout << " A Grade " << endl;

    }else if(Average >= 75){
        cout << "B Grade " << endl;
    }else if(Average >= 60){
        cout << "C Grade" << endl;
    }else if(Average >= 40){
        cout << " D Grade" << endl;
    }else {
        cout << "Fail" << endl;
    }
    
}