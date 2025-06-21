#include<iostream>
using namespace std;

void extremePrint(int nums [], int size){
    int left = 0; 
    int right = size - 1;
    while(left<=right){
        if(nums[left] == nums[right]){
            cout << nums[left] << endl;
        }else{
            cout << nums[left] << " " << nums[right] << " ";
        }
        left++;
        right--;
    }
}

int main(){
    int nums [7] = {10,20,30,40,50,60,70};
    int size = 7;

    extremePrint(nums, size);
}   