#include<iostream>
#include<vector>
using namespace std;

// in raw array format
// void twoSum(int nums[], int size, int target){
// // brute force solution time complexity On^2
//     for(int i = 0; i<size; i++){
//         for(int j = i+1; j<size; j++){
//             if(nums[i]+nums[j] == target){
//                 cout << i << " " << j << endl;
//             }
//         }
//     }
// }

// in vector format
void twoSum(vector<int>nums,int size, int target){

    vector<int> arr;
    
    for(int i = 0; i<size; i++){
                for(int j = i+1; j<size; j++){
                    if(nums[i]+nums[j] == target){
                        arr.push_back(i);
                        arr.push_back(j);    
                    }
                }
            }

    for(int i=0; i< arr.size(); i++){
        cout << arr[i] << " ";
    }
}   

int main(){
    // int nums [] = {2,4,3,6};
    vector<int> nums = {2,4,3,6};
    int size = 4;
    int target = 5;
    
    twoSum(nums,size,target);
}