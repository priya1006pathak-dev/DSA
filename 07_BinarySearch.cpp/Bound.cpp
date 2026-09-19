#include<iostream>
using namespace std;
int firstOcc(int arr[], int n,int key){
    int start = 0;
    int end = n-1;
    int ans = -1;
    int mid = start +(end-start)/2;
    while(start<=end){
      if(key == arr[mid]){
          ans= mid;
          end = mid -1;
      }else if(key > arr[mid]){
     start = mid + 1;
      }else {
          end = mid - 1;
      }
      mid = start +(end -start)/2;
    }
    return ans;
}
int lastOcc(int arr[], int n,int key){
    int start = 0;
    int end = n-1;
    int ans = -1;
    int mid = start +(end-start)/2;
    while(start<=end){
      if(key == arr[mid]){
          ans= mid;
          start = mid +1;
      }else if(key > arr[mid]){
     start = mid + 1;
      }else {
          end = mid - 1;
      }
      mid = start +(end -start)/2;
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter size of array" << endl;
    cin >> n;
 int arr[100];
 cout << "Enter " << n << "sorted element" << endl;
    for(int i = 0; i<n; i++){
   cin >> arr[i];
    } 
  int key ;
  cout << "Enter key";
  cin >> key;
  int answer = firstOcc(arr,n,key);
  
    int answer1 = lastOcc(arr,n,key);
  cout << "First occurence Index=" << answer << endl;
  
    cout << "last occurence Index=" << answer1 << endl;
  return 0;
}