#include<iostream>
#include<vector>
using namespace std;
bool check(vector<int>&nums){
    int count =0;
    for(int i=1; i<nums.size(); i++){
        if(nums[i-1] > nums[i]){
            count++;
        }
    }
    if(nums[nums.size()-1] > nums[0]){
        count++;
        return count <= 1;


    }
}
int main(){
    int n;
    cout << "Enter number of element:";
    cin >> n;

    vector<int>nums;
    cout << "Enter elements:";
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        nums.push_back(x);

    }
    cout << check(nums);
    return 0;

}