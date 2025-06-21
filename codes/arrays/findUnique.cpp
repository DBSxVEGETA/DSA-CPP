#include<iostream>
using namespace std;

int findUnique(int nums [], int size){


// this is a brute force approach with time complexity On^2;    
    // for(int i = 0; i < size ; i++){
    //     int count  = 1; 
    //     for(int j = i+1; j < size; j++){
    //         if(nums[i] == nums [j]){
    //             count ++;
    //         }
    //     }
    //     if(count == 1){
    //         return nums[i];
    //     }
    // }

    // return -1;

// better approach using bitwise XOR. Time complexity On

    int ans = 0; 
    for(int i = 0; i <size; i++){
        ans = ans ^ nums[i];
    }

    return ans;
}

int main(){
    int nums[9] = {10,2,11,2,5,10,6,5,6};
    int size = 9;

    cout << findUnique(nums, size) << endl;
}