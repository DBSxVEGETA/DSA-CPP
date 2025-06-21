#include<iostream>
#include<vector>
using namespace std;

// int findPivotIndex(vector<int> nums){
//     int n = nums.size();
// // loop over the array nums for pivot index
//     for(int i = 0; i < n; i++){
//         int leftSum = 0, rightSum = 0;

//         // loop to find leftSum
//         for(int j = 0 ; j < i; j++){
//             leftSum = leftSum + nums[j];
//         }
//         // loop to find rightSum
//         for(int k = i + 1; k < n; k++){
//             rightSum = rightSum + nums[k];
//         }
//         // check if the sum's are equal
//         if(leftSum == rightSum){
//             return i;
//         }
//     }

//     return -1;
// }


int findPivotIndex(vector<int> nums){
    int n = nums.size();

    // finding sum of array nums
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += nums[i];
    }

    int leftSum = 0;
    // looping over nums to find pivot index by comparing sum and leftSum
    for(int i = 0; i < n; i++){
        sum -= nums[i];
        if(leftSum == sum){
            return i;
        }
        leftSum += nums[i];
    }

    return -1;
}

int main(){
    vector<int> nums = {1,7,3,6,5,6};

    cout << findPivotIndex(nums) << endl;;
}