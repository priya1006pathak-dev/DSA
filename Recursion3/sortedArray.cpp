#include<iostream>
using namespace std;
void print(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}
bool isSorted(int arr[], int size){
    cout << endl;
    print(arr,size);
    if(size == 0 || size == 1){
        return true;
    }if(arr[0] > arr[1]){
        return false;
    }else{
        bool ans = isSorted(arr+1, size-1);
        return ans;
    }
}

    int main(){
        cout << endl;
   int arr[5] = {1,2,3,5,4};
         cout << endl;
   int size = 5;


    bool ans = isSorted(arr,size);

    
    if(ans){
        cout << "Array is sorted" << endl;
    }else{
        cout << "Array is not sorted" << endl;
        
    }
    
}