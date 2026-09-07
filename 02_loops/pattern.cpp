// Solid Star Square ⭐

// #include<iostream>
// using namespace std;
// int main(){
//   int n ;
//   cin >> n;

//    for(int i=1; i<=n; i++){
//     cout << "*" ;
//    }
//    return 0;
// }



// // NEXT QUESTION => Print 1234 Square
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin >> n;
//   int i = 1;
//   while(i<=n){
//     int j = 1;
//     while(j<=n){
//       cout << j ;
//       j = j+1;
   
//     }
//     cout << endl;
//     i = i+1;

//   }
// }

// // IN FOR LOOP
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin >> n;
//   for(int i = 1; i<=n; i++){
//     for(int j=1; j<=n; j++){
//       cout << j;
      
//     }
//     cout << endl;
//   }
// }



// NEXT QUESTION => Reverse Number Square
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin >> n;
//   int i = 1;
//   while(i<=n){
//     int j = 1;
//     while(j <= n){
//       cout << n - j+1 ;
//       j =j + 1;

//     }
//     cout << endl;
//     i =i + 1;
//   }
// }


//IN FOOR LOOP

// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin >> n;
//   for(int i = 1; i<=n; i++){
//     for(int j = n; j>=1; j--){
//       cout << j ;
//     }
//     cout << endl;
//   }
// }

// NEXT QUESTION => Continuous Numbers Square

// #include<iostream>
// using namespace std;
// int main(){
//   int n; 
//   cin >> n;
//   int i = 1;
//   int count = 1;
//   while(i<=n){
//     int j = 1;
//     while(j<=n){
//       cout << count << " " ;
//       count++;
//       j++;
//     }
//     cout << endl;
//     i = i+1;
//   }
// }

// IN FOOR LOOP
// #include<iostream>
// using namespace std;
// int main(){
//   int n; 
//   cin >> n;
//   int count = 1;
//   for(int i = 1; i<=n; i++){
//     for(int j = 1; j<=n; j++){
//       cout << count << " ";
//       count++;
//     }
//     cout << endl;
//   }
// }

// next question => Triangle Patterns
// #include<iostream> 
// using namespace std;
// int main(){
//   int n; 
//   cin >> n;
//   int i = 1; // row
//   while(i<=n){
//     int j = 1; // column
//     while(j <= i){
//       cout << "*" ;
//       j++;
//     }
//     cout << endl;
//     i++;
//   }
// }



// IN FOOR LOOP
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin >> n;
//   for(int i = 1; i<=n; i++){
//     for(int j =1; j<=i; j++){
//       cout << "*" << " ";

//     }
//     cout << endl;
    
//   }
// }



// NEXT QUESTION => Row Number Triangle
// #include<iostream>
// using namespace std;
// int main(){
//   int n; 
//   cin >> n;
//   int i = 1;
//   while(i<=n){
//     int j = 1;
//     while(j<=i){
//       cout << i << " ";
//    j++;
//     }
//     cout << endl;
//     i++;
//   }
// }



// IN FOOR LOOP
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin >> n;
//   for(int i = 1; i<=n; i++){
//     for(int j = 1; j<=i; j++){
//       cout << i << " ";
      
//     }
//     cout << endl;
//   }
// }


// NEXT QUESTION => Increasing Number Triangle

// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin >> n;
//  for(int i = 1; i<=n; i++){
//   for(int j = 1; j<=i; j++){
//     cout << j << " ";
//   }
//   cout << endl;
//  }
// }


// Print an increasing number triangle.

// #include<iostream>
// using namespace std;
// int main(){
//   int n; 
//   cin >> n;
//   int i = 1;
//   while(i<=n){
//     int j = 1;
//     while(j<=i){
//       cout << j << " ";
//    j++;
//     }
//     cout << endl;
//     i++;
//   }
// }

// NEXT QUESTION => Print a continuous number triangle (Floyd's Triangle).
// #include<iostream>
// using namespace std;
// int main(){
//   int n; 
//   cin >> n;
//   int i = 1;
//   int count = 1;
//   while(i<=n){
//     int j = 1;
//     while(j<=i){
//       cout << count  << " ";
//       count++;
//       j++;
//     }
//     cout << endl;
//     i++;
//   }
// }


// Print a triangle where each row starts from its row number.
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin >> n;

//  for(int i = 1; i<=n; i++){
//   // int count = i;
//   for(int j = 1; j<=i; j++){
//     // cout << count  << " ";
//     cout << i+j-1;
//     // count++;
   
//   }
//   cout << endl;
//  }
// }



// Print numbers in reverse order in each row.
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin >> n;

//  for(int i = 1; i<=n; i++){

//   for(int j = 1; j<=i; j++){
  
//     cout << i-j+1;
   
//   }
//   cout << endl;
//  }
// }


//NEXT QUESTION =>  Print a square where each row contains the same alphabet.
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin >> n;
//   int i = 1;
 
//   while(i<=n){
//     int  j = 1;
//     while(j<=n){
//       char ch = 'A' + i - 1;
//       cout << ch << " ";

//       j++;
//     }
//     cout << endl;
//     i++;
//   }
// }

//  Print a square of increasing alphabets in every row.
// #include<iostream>
// using namespace std;
// int main(){
//   int n; 
//   cin >> n;
//   int i = 1;
//   while(i<=n){
//     int j = 1;
//     while(j<=n){
//       char ch = 'A'+j-1;
//       cout << ch ;
//       j++;
//     }
//     cout << endl;
//     i++; 
//   }
// }

// Print a square pattern of continuous uppercase alphabets.
// #include<iostream>
// using namespace std;
// int main(){
//   int n ;
//    cin >> n;
//    char start = 'A';
//    for(int i = 1; i<=n; i++){
//     for(int j = 1; j<=n; j++){
  
//       cout << start ;
//       start++;
//     }
//     cout << endl;
//    }
// }


// Print a square pattern where each row starts with the next alphabet.
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin >> n;
//   for(int i = 1; i<=n; i++){
//     for(int j = 1; j<=n; j++){
//   char ch = i+j-1+'A'-1;  // 'A'+i+j-2
//   cout << ch;
//     }
//     cout << endl;
//   }
// }


// Print a triangle pattern where each row contains the same alphabet.

// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin >> n;
//   int i = 1;
//   while(i<=n){
//   int j = 1;
//   while(j<=i){
//     char ch = 'A' + i - 1;
//     cout << ch ;
//     j++;
//   }
//   cout << endl;
//   i++;
// }
// }

// Reverse number triangle.

// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin >> n;
//   int i = 1;
//   while(i<=n){
//     int j = n;
//     while(j>=1){
//     cout << j;
//       j--;
//     }
//     cout << endl;
//     i++;
//   }
// }

// . Reverse number triangle.

// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin >> n;
//   int i = 1;
//   while(i<=n){
//     int j = 1;
//     while(j<=n-i+1){
//     cout << j;
//       j++;
//     }
//     cout << endl;
//     i++;
//   }
// }


// Reverse alphabet triangle.
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin >> n;
//   int i = n;
//   while(i>=1){
//     int j = 1;
//     while(j<=i){
//       char ch = 'A'+j-1;
//       cout << ch;
//     j++;
//     }
//     cout << endl;
//     i--;
//   }
// }



// Right aligned triangle print karo.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n-i){
        cout << " ";
        j++;
    }
    int star = 1;
    while(star <= 1){
        cout << "*";
        star++;
    }
    cout << endl;
    i++;
}
}