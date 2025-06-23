#include<iostream>
#include<vector>
using namespace std;

int binarySearchInNearlySortedArray(vector<int> &nums, int target){
    int n = nums.size();
    int start = 0;
    int end = n-1;
    int mid = start+(end-start)/2;

    while(start<=end){
        if(mid-1 >=0 && nums[mid - 1] == target){
            return mid - 1;
        }else if(nums[mid] == target){
            return mid;
        }else if( mid + 1 < n && nums[mid + 1] == target){
            return mid + 1;
        }else if(target > nums[mid]){
            start = mid + 2;
        }else if(target < nums[mid]){
            end = mid - 2;
        }

        mid = start + (end - start)/2;
    }

    return -1;
}

int main(){
    vector<int> nums = {20,10,30,50,40,70,60};
    // int target = 70;
    // int target = 20;
    int target = 80;


    int ans = binarySearchInNearlySortedArray(nums, target);
    cout << ans << endl;
}