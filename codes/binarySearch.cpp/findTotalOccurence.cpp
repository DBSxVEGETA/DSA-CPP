#include<iostream>
using namespace std;

int findFirstOccurence(int nums [], int size, int target){
    int start = 0; 
    int end = size -1;
    int ans = -1;

    while(start<=end){
        int mid = (start+end)/2;
        if(nums[mid] == target){
            ans = mid;
            end = mid - 1;
        }else if(target>nums[mid]){
            start = mid + 1;
        }else if(target<nums[mid]){
            end = mid - 1;
        }
    }

    return ans;
}

int findLastOccurence(int nums [], int size, int target){
    int start = 0; 
    int end = size -1;
    int ans = -1;

    while(start<=end){
        int mid = start + (end - start)/2;
        if(nums[mid] == target){
            ans = mid;
            start = mid + 1;
        }else if(target > nums[mid]){
            start = mid +1;
        }else if(target<nums[mid]){
            end = mid -1;
        }
    }

    return ans;
}

int main(){
    int nums [8] = {10,20,30,30,30,30,40,50};
    int size = 8;
    int target = 30;
    
    int firstOccrence = findFirstOccurence(nums, size, target);
    int lastOccurence = findLastOccurence(nums, size, target);
    int totalOccurence = lastOccurence - firstOccrence + 1;

    cout << totalOccurence << endl;
}