#include<iostream>
using namespace std;
void print(int arr[],int size){
    for(int i=0; i<size-1; i++){
        cout << arr[i] << " ";

    }
}
bool linearSearch(int arr[], int size , int k){
    cout << endl;
    print(arr, size);
    
    if(size == 0)
    return false;

    if(arr[0] == k){
        return true;
    }else{
        bool remainingPart = linearSearch(arr+1, size-1,k);
        return remainingPart;
    }
}
int main(){
   
    int arr[5] = {3 ,5 ,1,2,6};
    int size = 5;
    int key = 9;

    bool ans = linearSearch(arr,size,key);

  if(ans){
    cout << "Present"<< endl;

  }
  else{
    cout << "Absent"<< endl;   
  }
  return 0;
}