#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// void rotatedArr(vector<int>&nums, int k){
// k = k%nums.size();
// reverse(nums.begin(),nums.end());
// reverse(nums.begin(),nums.begin()+k);
// reverse(nums.begin() +k ,nums.end());
// }



// different ways
void rotateArr(vector<int>& nums, int k) {
        vector<int>temp(nums.size());
        for(int i =0; i<nums.size(); i++){
            temp[(i+k)%nums.size()] = nums[i];
        }
        nums = temp;
    }

int main(){
int n,k;
cin >> n;
vector<int>nums(n);
for(int i = 0; i<n; i++){
    cin >> nums[i];

}
cin >> k;
rotateArr(nums,k);
for(int i = 0; i<nums.size(); i++){
    cout << nums[i] << "  ";

}
return 0;
}