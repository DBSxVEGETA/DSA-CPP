#include<iostream>
using namespace std;

int missingElement(int nums [], int size){
    int start = 0;
    int end = size - 1;
    int ans = -1;
    while(start<=end){
        int mid = start + (end - start)/2;
        if(mid + 1 == nums[mid]){
            start = mid + 1;
        }else{
            ans = mid; 
            end = mid - 1;
        }
    }

    return nums[ans] - 1;
}

int main(){
    int nums [] = {1,2,3,4,6,7,8};
    int size = 7;

    cout << missingElement(nums, size) << endl;
}