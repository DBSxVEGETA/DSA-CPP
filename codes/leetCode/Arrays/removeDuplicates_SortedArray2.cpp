#include<iostream>
#include<vector>
using namespace std;

void removeDuplicates(vector<int>& nums){
    for(int i=0; i<nums.size(); i++){
        int count = 1;
        for(int j = i + 1; j<nums.size();){
            if(nums[i] == nums[j]){
                count++;
                if(count>2){
                    nums.erase(nums.begin() + j);
                    j--;
                }
                j++;
            }else{
                j++;
            }
        }
    }

    int k = nums.size();
    cout << k << endl;

    for(int i = 0; i< nums.size(); i++){
        cout << nums[i] << " ";
    }

    cout << endl;
};

int main(){
    vector<int> nums = {1,1,1,2,2,3};

    removeDuplicates(nums);
}
