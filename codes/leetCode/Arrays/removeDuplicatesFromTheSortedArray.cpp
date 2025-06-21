#include<iostream>
#include<vector>
using namespace std;

void removeDuplicates(vector<int>& nums){
    for(int i = 0; i<nums.size(); i++){
        for(int j = i + 1; j<nums.size();){
            if(nums[i] == nums[j]){
                nums.erase(nums.begin() + j);
            }else{
                j++;
            }
        }
    }

    int k = nums.size();
    cout << k << endl;

    for(int i = 0; i<nums.size(); i++){
        cout<< nums[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};

    removeDuplicates(nums);
}