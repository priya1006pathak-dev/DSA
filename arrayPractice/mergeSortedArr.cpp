#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &arr1, vector<int> &arr2,vector<int> &arr3){
    int i = 0 ,  j = 0,  k= 0;
    while(i < arr1.size() && j < arr2.size()){
        if(arr1[i] < arr2[j])
        arr3[k++] = arr1[i++];

        else
        arr3[k++] = arr2[j++];

    }
    while(i<arr1.size())
    arr3[k++] = arr1[i++];

    while(j<arr2.size())
    arr3[k++] = arr2[j++];

}
int main(){
int n,m;
cin >> n >> m;
vector<int> arr1(n),arr2(m),arr3(n+m);
for(int i =0; i<n; i++)
cin >> arr1[i];

for(int i =0; i<m; i++)
cin >> arr2[i];
merge(arr1 , arr2,arr3);
for(int x: arr3)
cout << x << " ";


}