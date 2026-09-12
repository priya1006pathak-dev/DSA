#include<iostream>
using namespace std;
int add(){
    return 20 + 5;
}
int subtract(){
    return 20-5;
}
int multiply(){
 return 20*5;
}
int divide(){
    return 20/5;
}
int main(){
cout << "Addition   : " << add() << endl;
cout << "subtract   : " << subtract() << endl;
cout << "multiply   : " << multiply() << endl;
cout << "dividion   : " << divide() << endl;
}