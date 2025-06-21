#include<iostream>
#include<vector>
using namespace std;

void removeElement(vector<int>& nums, int val){
    for(int i=0; i<nums.size(); ){
        if(nums[i] == val){
            nums.erase(nums.begin() + i);
        }else{
            i++; // only incrment when there is not removal
        }
    }

    int k = nums.size();
    cout<<k<<endl;

    for(int i=0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
}

int main(){
    vector<int> nums = {3,2,2,3};
    int val = 2;

    removeElement(nums, val);
}