#include<iostream>
using namespace std;

int binarySearch(int nums [], int size, int target){
    int start = 0; 
    int end = size-1;

    
    while(start<=end){
        int mid = (start + end)/2;
        if(nums[mid] == target ){
            return mid;
        }else{
            if(target>nums[mid]){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
        }
    }

    return -1;
}

int main(){
    int nums [8] = {1,2,3,4,5,6,7,8};
    int size = 8;
    int target = 7;

    cout << binarySearch(nums, size, target);
}