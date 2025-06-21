#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// failed login
// void rearrangeBySign(int nums[], int size){
//     for(int i = 0 ; i < size; i++){
//         if(i%2 == 0 && nums[i] < 0){
//             swap(nums[i], nums[i+1]);
//         }
//         if(i%2 != 0 && nums[i]>0){
//             swap(nums[i], nums[i+1]);
//         }
//     }
// }

void rearrangeArrayBySign(vector<int>nums){
    vector<int> pos, neg;
    int n = nums.size();

    for(int i = 0; i<n; i++){
        if(nums[i]>0){
            pos.push_back(nums[i]);
        }else{
            neg.push_back(nums[i]);
        }
    }

    vector<int> result(n);

    for(int i = 0; i< n/2; i++){
        result[2 * i] = pos[i];
        result[2 * i + 1] = neg[i];
    }

    for(int i =0; i< n; i++){
        cout << result[i] << " ";
    }
}

int main(){
    vector<int> nums = {28,-41,22,-8,-37,46,35,-9,18,-6,19,-26,-37,-10,-9,15,14,31};

    rearrangeArrayBySign(nums);
}