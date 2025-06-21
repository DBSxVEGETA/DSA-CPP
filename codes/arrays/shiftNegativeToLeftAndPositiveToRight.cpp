#include<iostream>
#include<vector>
using namespace std;

int shiftNegativeToLeftAndPositiveToRight(vector<int> &nums){
// bruteforce solution time comeplexity On^2
    // for(int i = 0 ; i<nums.size(); i++){
    //     for(int j = i + 1; j<nums.size(); j++){
    //         if(nums[i]>nums[j]){
    //             swap(nums[i], nums[j]);
    //         }
    //     }
    // }

// Two pointer approach TC: On

    int j = 0; 
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] < 0){
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

int main(){
    vector<int> nums = {23, -7, 12, -10, -11, 40, 60};
    shiftNegativeToLeftAndPositiveToRight(nums);

    for(int i = 0; i<nums.size(); i++){
        cout << nums[i] << " ";
    }
}