#include<iostream>
#include<algorithm>
using namespace std;

void shiftRightOnce(int nums [], int size){
// brute force
    // int a = nums[size - 1];

    // for(int i = size - 1 ; i > 0; i--){
    //     nums[i] = nums[i-1];
    // }

    // nums[0] = a;

// better using reverse method
    reverse(nums, nums + size);

    reverse(nums + 1, nums + size);

    for(int i = 0; i < size ; i++){
        cout << nums[i] << " ";
    }
    cout << endl;

}

int main(){
    int nums [] = {1,2,3,4,5};
    int size = 5;

    shiftRightOnce(nums, size);
}