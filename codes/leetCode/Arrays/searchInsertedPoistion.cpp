#include<iostream>
#include<vector>
using namespace std;

void searchInsertedPosiiton(vector<int> nums, int target){
    for(int i =0; i < nums.size(); i++){
        if(nums[i] == target){
            cout << i << endl;
        }else if(i == 0 && target<nums[i]){
            cout << i << endl;
        }else if(i == (nums.size() - 1) && target > nums[i]){
            cout << i + 1 << endl;
        }
        else if(target>nums[i] && target < nums[i+1]){
            cout << i+1 << endl;
        }
    }
}


int main(){
    vector<int> nums = {2,3,4,5,7};
    int target = 1;

    searchInsertedPosiiton(nums,target);
}