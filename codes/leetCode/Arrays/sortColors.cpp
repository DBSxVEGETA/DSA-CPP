#include<iostream>
#include<vector>
using namespace std;

void sortColors(vector<int> &nums){
    int a = 0, b = nums.size() - 1;

    for(int i = 0; i <= b; i++){
        if(nums[i] == 2){
            swap(nums[i], nums[b]);
            b--;
            i--;
        }
        if(nums[i] == 0){
            swap(nums[i], nums[a]);
            a++;
        }
    }
}

int main(){
    vector<int> nums = {2,0};

    sortColors(nums);

    for(int i= 0; i<nums.size(); i++){
        cout << nums[i] << " ";
    }
}