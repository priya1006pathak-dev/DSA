// // Largest of Three Numbers

// // Input: a b c

// // Output: Largest number only.

// #include<iostream>
// using namespace std;
// int main(){
 
//     int a , b , c;
//     cin >> a >> b >> c;
//     if(a >= b && a >= c){
//         cout <<"Largest number is:" <<  a;

//     }else if(b >= a && b >= c){
//         cout << "Largest number is:" <<b ;

//     }else{
//         cout << "Largest number is:"<< c;
//     }
    
// }





 // Reverse Counting
// Input: N
// Print N to 1.
// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cin >> n;
//     for(int i = n; i > 0; i--){
//    cout << i << " ";
//     }
// }
// Count Even Numbers from 1 to N
// Input: N
// Output: Total even numbers.
#include<iostream>
using namespace std;
int main(){
    int n;
      cin >> n;
    int count = 0;
  

 for(int i =1; i<=n; i++){
    if(i%2==0){
        count++;
    }
    }
      cout << "total even  number=" << count ;
 
}


// Count Odd Numbers from 1 to N
// Input: N
// Output: Total odd numbers.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for(int i=1; i<=n; i++){
//         if(i%2!=0){
//             cout << i << " ";
//         }
//     }
// }

// Easy 10
// Factorial
// Input: N
// Output: N!
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int fact = 1;
//     cin >> n;
//     for(int i=1; i<=n; i++){
//         fact = fact * i;
       
//     }
//     cout << fact;

// }