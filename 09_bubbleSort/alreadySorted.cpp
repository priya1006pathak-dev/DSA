#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n){
    for(int i = 1; i<n; i++){
        bool swapped = false;
        for(int j = 0; j<n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
                swapped = true;
            }

        }
        if(swapped == false){
            break;
        }
    }
}
int main(){
int n;
cin >> n;

int arr[100];
cout <<"Enter " << n << "Elements" << endl;
for(int i = 0; i<n; i++){
    cin >> arr[i];

}
bubbleSort(arr,n);
cout << "Sorted Array";
for(int i = 0; i<n; i++){
    cout << arr[i] << " ";
}
}