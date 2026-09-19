#include<iostream>
using namespace std;
int firstOcc(int arr[], int size, int key){
   int start =0;
    int end = size-1;
    int ans = -1;
 
    int mid = start+(end - start)/2;
    while(start <= end){
       if(key == arr[mid]){
        ans = mid;
        end = mid - 1;

       }else if(key > arr[mid]){
        start = mid + 1;
       }else{
        end = mid - 1;
       }
      mid = start+(end-start)/2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int key){
   int start =0;
    int end = size-1;
    int ans = -1;
    int mid = start+(end - start)/2;
    while(start <= end){
       if(key == arr[mid]){
            ans = mid;
        start = mid + 1;

       }else if(key > arr[mid]){
        start = mid + 1;
       }else{
        end = mid - 1;
     
       }
      mid = start+(end-start)/2;
    }
    return ans;
}












int main(){
int n;
cout << "Enter a number:" << endl;
cin >> n;

int arr[100];
cout << "Enter " << n << "sorted array" << endl;
for(int i = 0; i<n; i++){
    cin >> arr[i];
}

  int key ;
  cout << "Enter key";
  cin >> key;
  
    int first = firstOcc(arr, n, key);
    int last = lastOcc(arr, n, key);

    cout << "First Index = " << first << endl;
    cout << "Last Index = " << last << endl;

    if (first != -1)
    {
        cout << "Total Occurrences = " << last - first + 1;
    }

    return 0;
}
