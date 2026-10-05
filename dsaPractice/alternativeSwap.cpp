

 #include<iostream>
 using namespace std;
  void  pairSwap(int arr[], int n){
    for(int i=0; i<n; i+=2){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;

    }
  }


 int main(){
   int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    int arr[100];
    for(int i=0; i<n; i++){
        cin >> arr[i] ;

    }
  pairSwap(arr,n);
    cout << "pairSwap ->";
    for(int i=0; i<n; i++){
        cout << arr[i] <<" ";
    }
   cout << endl;
 }