#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    int pass;
cin >> pass;

for(int i = 0; i < pass; i++)
{
    int minIndex = i;

    for(int j = i + 1; j < n; j++)
    {
        if(arr[minIndex] > arr[j])
        {
            minIndex = j;
        }
    }

    swap(arr[minIndex], arr[i]);
}
}

int main(){
 int n ;
 cout << "Enter array n:" << endl;
 cin >> n;

     int arr[100];

    cout << "Enter " << n << " elements: ";
 for(int i = 0; i<n; i++){
    cin >> arr[i];
 }
  selectionSort(arr,n);
 cout << "Sorted Array:";
 for(int i = 0; i<n; i++){
    cout << arr[i] << " ";
 }
  
}