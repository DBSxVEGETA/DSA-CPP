#include<iostream>
#include<vector>
using namespace std;

void twoSum(vector<int> nums, int target){
    int n = nums.size();
    vector<int> ans;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j<n; j++){
            if(nums[i]+nums[j] == target){
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}

int main(){
    vector<int> nums = {9,8, -3, 5, -6, 18, -2, 60, 10};
    int target = 4;

    twoSum(nums, target);
}