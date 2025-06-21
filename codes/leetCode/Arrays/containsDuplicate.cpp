#include<iostream>
#include<algorithm>
using namespace std;

bool containsDuplicate(int nums[], int size){

// brute force solution with time complexity On^2
    // for(int i = 0; i < size; i++){
    //     int count = 1; 
    //     for(int j = i + 1; j < size; j++){
    //         if(nums[i] == nums[j]){
    //             count ++;
    //         }
    //     }
    //     if(count > 1){
    //         return true;
    //     }
    // }
    // return false;

// better solution using sort with time complexity Onlogn

    sort(nums, nums + size);

    for(int i = 0; i < size - 1; i++){
        if(nums[i] == nums[i+1]){
            return true;
        }
    }
    return false;

}

int main(){
    // int nums [4] = {1,2,3,1};
    int nums [4] = {1,2,3,4};
    int size = 4;

    cout << containsDuplicate(nums, size);
}